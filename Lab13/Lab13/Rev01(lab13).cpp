enum direcao {N, NE, E, SE, S, SW, W, NW}; 

union identificador  
{ 
char codigo[5]; 
int numero; 
};

struct bola { 
identificador id; // identificação da bola 
char marca[30];   // marca da bola 
int posX;         
int posY;         
direcao dir;      
float vel;        
float acel;       
}; 
// posição no eixo X 
// posição no eixo Y 
// orientação no plano 
// velocidade 
// aceleração 
bola proVolley[10];  // declaração de variável

a) proVolley ------------------- vetor de bola
b) proVolley[4]----------------- bola
c) proVolley[1].marca ---------- vetor de caracter 
d) proVolley[1].marca[2] ------- caracter 
e) proVolley[0].dir ------------ direção 
f) proVolley[4].id ------------- identificador 
g) proVolley[3].id.numero ------ int
h) proVolley[9].acel ----------- float