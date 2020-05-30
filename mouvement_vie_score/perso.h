#ifndef PERSO_H_
#define PERSO_H_
#include <stdio.h>

#include <stdlib.h>

#include "SDL/SDL.h"

#include "SDL/SDL_image.h"

#include "SDL/SDL_mixer.h"

#include "SDL/SDL_ttf.h"

typedef struct background
{
	SDL_Surface *background;
	SDL_Rect posbg;
	int dx,fx,dy,fy;
}background;

typedef struct vie 
{
	int nbredevie ;
	SDL_Surface *vie[4];
	SDL_Rect position_de_vie ; 
	
}vie  ;



typedef struct score
{
	int score_atteint;
	SDL_Rect position_score ; 
	TTF_Font *police_score; 
	SDL_Surface *score_texte;
	
}score  ;

typedef struct personnage
    {
	SDL_Surface *sprite[12];
	SDL_Rect position_perso;
	int direction;
	vie vie_perso ;
	score score_perso ; 
	int num;
     } personnage;
personnage initperso (personnage c);
void affichageperso(personnage c, SDL_Surface * screen);
void animperso (personnage *c, SDL_Surface *screen);
void mouvement (personnage *c , SDL_Surface *screen);
void moveCharByMouse(SDL_Surface *screen,SDL_Rect * persoPos, SDL_Event event, char whichDirection);
void update_score (personnage *p);
void update_vie(personnage *p);



#endif
