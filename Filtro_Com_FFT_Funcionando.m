clc; 
N = 2048; 
[sinal, Fs] = audioread('sinal_1.wav');

m = log2(N);%numero de estagios 
x = 0:(N-1); 
b = de2bi(x);

for i=1:N %inversao de bits
    b(i,:) = b(i,log2(N):-1:1);
end

sinali = bi2de(b);

for a=1: N
signal(a, 1) = sinal(sinali(a) + 1); %sinal que sera feita a transformada
end 

%calculo da transformada

for a=1:m 
  N1 = 2^a;
  U = 1 + 0*j; 
  W = (exp(-j*2*pi/N1)); 
  for(t1 = 1:(N1/2))
    for p=(t1:N1:N)
      q = p + N1/2; 
      tW = signal(q,a)*U;%foi necessario mudar o sinal da transformada para uma matriz pois com
      %sobreposicao nao é dada a precisão correta
      signal(q, a+1) = signal(p, a) - tW; 
      signal(p, a+1) = signal(p, a) + tW;
    end 
    U = U*W;
  end
end 


%figure(1);
%plot(1:N, abs(signal(1:N,m+1))); %transformada

f = (0:N-1)*Fs/N;
figure(1); 
plot(f, abs(signal(1:N, m+1))); 

%calculando o nivel dc

v = 1; 
for i=1:N/2 %limitado pela metade já que o cosseno é espelhado
if(abs(signal(i, m+1)) > abs(signal(1, m+1)))
fre(v) = i*Fs/N; %componentes da frequencia
pot(v) = abs(signal(i, m+1)).^2;%potencias
v+=1; 
end 
end 

%calculando o volt 

for i=1:(v-1)%v-1 pois na ultima iteracao do for acima ele soma + 1
  volt(i) = pot(i)* 1/pot(1);
end 

M = 45; 
Amostras = N + 1; %número total de amostras

for i= 1:5
  F_Central = fre(i); 
  F_Esquerda = fre(i) - M; 
  F_Direita = fre(i) + M; 
 
  K_esquerda = floor(Amostras*F_Esquerda/Fs); 
  K_Direita = floor(Amostras*F_Direita/Fs); 
  
  A=[zeros(1, K_esquerda) ones(1, K_Direita - K_esquerda)  zeros(1, N/2 - K_Direita + 1)]; 
  
  k= 1:N/2; 
 
 for p = 0:N
   h(p+1) = A(1)+2*sum((-1).^k.*A(k+1).*cos(pi.*k*(1+2*p)/Amostras));
 endfor  
 h = h./Amostras; 
 
 %colocando em uma matriz de filtros para plotar posteriormente o sinal convoluido com o filtro
  for l = 1:Amostras
    filtro(l, i) = h(l);
  endfor
endfor


for i=1:5
  figure(i+1); 
  plot(f, abs(signal(1:N, m+1)).*abs(fft(filtro(1:N, i)))); 
endfor
