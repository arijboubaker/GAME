#ifndef FICHIER_H
#define FICHIER_H

#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <ctype.h>
#include <SDL/SDL_image.h> 
#include <SDL/SDL_ttf.h>
#include <string.h>
#include <SDL/SDL_rotozoom.h>
#include <SDL/SDL_mixer.h>
#include <time.h>
/**
* @struct rotozoom
* @brief struct for rotozoom
*/
typedef struct 
{

SDL_Surface *em3[2];
SDL_Rect posem3[2];

}enigme3;


/*************enigme3*************/
void roto(SDL_Surface *screen,SDL_Surface *image, SDL_Surface *rotation ,SDL_Rect rect);




#endif


