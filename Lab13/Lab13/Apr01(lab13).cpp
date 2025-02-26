1. Considerando as declara��es abaixo, responda dizendo qual o tipo da informa��o
que deve ser armazenada na vari�vel :

enum trave { LEsq, LDir, CantoEsq, CantoDir, Centro };

union jogador
{
	char nome[25];
	int numero;
};

struct gol
{
	jogador jog;        // identifica��o do jogador 
	float x, y, z;        // posi��o da bola nas coordenadas 
	trave local;        // onde a bola entrou 
	float velo;         // velocidade da bola 
	float acel;         // acelera��o da bola 
};

gol estatistica[10];   // estat�sticas para at� 10 gols

i) estatistica ----------------------- vetor de gol
j) estatistica[4] -------------------- gol
k) estatistica[1].jog ---------------- jogador
l) estatistica->jog.numero -----------  int 
m) (estatistica + 9)->local ---------- trave
n) estatistica[2].velo --------------- float
o) (estatistica + 1)->jog.nome[0] ---- vetor de char 
p) estatistica[6].acel --------------- float