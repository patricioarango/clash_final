#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include "mapa.h"
/* PARAMETROS
S: Segundos que dura un intervalo.
 P: cantidad máxima que puede pedir un bandido.
 A: posiciones para definir el área de Ataque de un bandido.
 posXE: posición x de la estación.
 posYE: posición y de la estación.
 IM: intervalo máximo para generación de monedas.
 VM: intervalos máximos de vida de una moneda.
 IB: máxima cantidad de intervalos para la aparición de bandidos.
 VB: tiempo máximo de vida de un bandido.
 IP: intervalos entre producciones de las minas.
/**/
using namespace std;

int main(int argc, char** argv)
{
    if(SDL_Init(SDL_INIT_EVERYTHING)>=0){
        SDL_Window *window;
        SDL_Renderer *renderer;

        //iniciamos el mapa
        Mapa mapa;
        setAnchoVentana(mapa,800);
        setAltoVentana(mapa,600);
        setAnchoCasilla(mapa,80);
        setAltoCasilla(mapa,60);
        setColumnas(mapa, getAnchoVentana(mapa) / getAnchoCasilla(mapa));
        setFilas(mapa, getAltoVentana(mapa) / getAltoCasilla(mapa));
        int anchoVentana = getColumnas(mapa);
        int altoVentana = getFilas(mapa);

        window = SDL_CreateWindow(
            "Clash of UnLa",
            SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,
            anchoVentana,altoVentana,
            SDL_WINDOW_RESIZABLE | SDL_RENDERER_PRESENTVSYNC
            );

        renderer = SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
        IMG_Init(IMG_INIT_PNG);
        SDL_Event event;
        dibujarTablero(mapa,renderer);
        SDL_RenderPresent(renderer);//APLICA EL CAMBIO
        SDL_Delay(500);


    }
    return 0;
}
