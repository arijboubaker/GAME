#ifndef ENNEMI_H_
#define ENNEMI_H_
#include <stdio.h>

#include <stdlib.h>

#include "SDL/SDL.h"

#include "SDL/SDL_image.h"

#include "SDL/SDL_mixer.h"

#include "SDL/SDL_ttf.h"

#include <time.h>

typedef struct ennemi
{
	SDL_Rect position_ennemi;
        SDL_Rect pmax_ennemi;
	SDL_Rect pmin_ennemi;
	SDL_Surface *sprite[8];
        int vie;
        int num;
        int direction;
}ennemi;

void initialiserennemi(ennemi *e);
void freesurfaceennemi(ennemi *e);
void affichage_ennemi(ennemi e, SDL_Surface *screen);
int rand_pos(int pmax, int pmin);
void dep_alea(ennemi *e, SDL_Surface *screen, SDL_Rect poshero);
#endif
