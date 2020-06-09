#ifndef ANIMENNEMI_H_
#define ANIMENNEMI_H_
#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"
#include "SDL/SDL_ttf.h"
#include <time.h>
//#include "struct.h"
typedef struct background

{

	SDL_Surface *background;

	SDL_Rect posbg;

	int dx,fx,dy,fy;

}background;

typedef struct ennemi
{
	SDL_Rect position_ennemi;
	SDL_Rect pos2;
	SDL_Rect pos1;
	SDL_Rect position_sprite ;
	int direction ; 
	SDL_Surface *spriteleft;
	SDL_Surface *spriteright;
}ennemi;
typedef struct timer
{
int min;
int sec;

}timer;


void initialiserennemi(ennemi *e);
void freesurfaceennemi(ennemi *e);
void affichage_ennemi(ennemi e, SDL_Surface *screen,background b,SDL_Surface *timetext);
void mvm_alea_enemi(ennemi *e);
SDL_Surface * gameTime (timer *t);
//void affichertemps(SDL_Surface *screen,SDL_Surface *timetext);
#endif
