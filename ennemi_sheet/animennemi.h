#ifndef ANIMENNEMI_H_
#define ANIMENNEMI_H_
#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"
#include "SDL/SDL_ttf.h"


typedef struct ennemi
{
	SDL_Rect position_ennemi;
	SDL_Rect pos2;
	SDL_Rect pos1;
	SDL_Rect position_sprite ;
	int direction ; 
	SDL_Surface *sprite;
}ennemi;


void animEnm (ennemi *e, SDL_Surface *screen);

#endif
