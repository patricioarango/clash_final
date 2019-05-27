#include "mapa.h"

void setAnchoVentana(Mapa &mapa,int anchoVentana){
    mapa.anchoVentana = anchoVentana;
}

int getAnchoVentana(Mapa &mapa){
    return mapa.anchoVentana;
}

void setAltoVentana(Mapa &mapa,int altoVentana){
    mapa.altoVentana = altoVentana;
}

int getAltoVentana(Mapa &mapa){
    return mapa.altoVentana;
}

void setGameover(Mapa &mapa,bool estadoGameover){
    mapa.gameover = estadoGameover;
}

bool getGameOver(Mapa &mapa){
    return mapa.gameover;
}

void setAnchoCasilla(Mapa &mapa,int anchoCasilla){
    mapa.anchoCasilla = anchoCasilla;
}
int getAnchoCasilla(Mapa &mapa){
    return mapa.anchoCasilla;
}

void setAltoCasilla(Mapa &mapa,int altoCasilla){
    mapa.altoCasilla = altoCasilla;
}

int getAltoCasilla(Mapa &mapa){
    return mapa.altoCasilla;
}

void setFilas(Mapa &mapa,int filas){
    mapa.filas = filas;
}

int getFilas(Mapa &mapa){
    return mapa.filas;
}

void setColumnas(Mapa &mapa,int columnas){
    mapa.columnas = columnas;
}

int getColumnas(Mapa &mapa){
    return mapa.columnas;
}

void dibujarTablero(Mapa mapa,SDL_Renderer *renderer){
    for(int f=0;f<mapa.filas;f++){
        for(int c=0;c<mapa.columnas;c++){
            dibujarCasillero(renderer,mapa.tablero[f][c]);
        }
    }
    /*for(int f=0;f<mapa.filasMapa;f++){
        for(int c=0;c<partida.columnas;c++){
            dibujarMapa(renderer,partida.mapa[f][c],partida.intervalo);
        }
    }*/
}

void dibujarCasillero(SDL_Renderer* renderer,Casillero &casillero){
    SDL_RenderCopy(renderer,casillero.imagen,NULL,&(casillero.rectImag));
}
