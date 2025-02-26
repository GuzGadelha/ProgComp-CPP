enum direcao {N, NE, E, SE, S, SW, W, NW}; 

union identificador  
{ 
char codigo[5]; 
int numero; 
};

struct bola { 
identificador id; // identifica��o da bola 
char marca[30];   // marca da bola 
int posX;         
int posY;         
direcao dir;      
float vel;        
float acel;       
}; 
// posi��o no eixo X 
// posi��o no eixo Y 
// orienta��o no plano 
// velocidade 
// acelera��o 
bola proVolley[10];  // declara��o de vari�vel

a) proVolley ------------------- vetor de bola
b) proVolley[4]----------------- bola
c) proVolley[1].marca ---------- vetor de caracter 
d) proVolley[1].marca[2] ------- caracter 
e) proVolley[0].dir ------------ dire��o 
f) proVolley[4].id ------------- identificador 
g) proVolley[3].id.numero ------ int
h) proVolley[9].acel ----------- float