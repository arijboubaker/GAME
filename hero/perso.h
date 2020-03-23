#ifndef PERSO_H_
#define PERSO_H_
#include <stdio.h>

#include <stdlib.h>

#include "SDL/SDL.h"

#include "SDL/SDL_image.h"

#include "SDL/SDL_mixer.h"

#include "SDL/SDL_ttf.h"




typedef struct vie 
{
	int nbredevie ;
	SDL_Surface * vie1 ;
	SDL_Surface * vie2 ;	
	SDL_Surface * vie3 ;
	SDL_Surface * vie0 ;
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
	SDL_Surface *sprite;
	SDL_Rect position_perso;
	SDL_Rect position_sprite;
	int direction;
	int numr , numl ;
	vie vie_perso ;
	score score_perso ; 
     } personnage;

personnage initperso (personnage c);
void affichageperso(personnage c, SDL_Surface * screen,SDL_Surface *background,SDL_Rect back);
void animperso (personnage *c, SDL_Surface *screen,SDL_Surface *background,SDL_Rect back);

#endif
