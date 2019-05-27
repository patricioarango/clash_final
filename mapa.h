#ifndef MAPA_H_INCLUDED
#define MAPA_H_INCLUDED

typedef struct{
    bool gameover;
    int intervalo;
    int anchoVentana; //el anncho de la ventana en px
    int altoVentana; //el alto de la ventana en px
    int anchoCasilla; //el ancho de la imagen
    int altoCasilla; //el alto de la imagen
    int filas;
    int columnas;
    int filasMapa;
    char direccion[4];
}Mapa;

void setGameover(Mapa &mapa,bool estadoGameover);
bool getGameOver(Mapa &mapa);

void setAnchoVentana(Mapa &mapa,int anchoVentana);
int getAnchoVentana(Mapa &mapa);

void setAltoVentana(Mapa &mapa,int altoVentana);
int getAltoVentana(Mapa &mapa);

void setAnchoCasilla(Mapa &mapa,int anchoCasilla);
int getAnchoCasilla(Mapa &mapa);

void setAltoCasilla(Mapa &mapa,int altoCasilla);
int getAltoCasilla(Mapa &mapa);

void setFilas(Mapa &mapa,int filas);
int getFilas(Mapa &mapa);

void setColumnas(Mapa &mapa,int columnas);
int getColumnas(Mapa &mapa);

void initMapa(Mapa &mapa);

int getAnchoVentana(Mapa &mapa);
int getAltoVentana(Mapa &mapa);

dibujarTablero(Mapa mapa,SDL_Renderer *renderer);
#endif // MAPA_H_INCLUDED
