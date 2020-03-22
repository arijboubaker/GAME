#ifndef PERSO_H_
#define PERSO_H_
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
	SDL_Surface *spriteright[12];
	SDL_Surface *spriteleft[12];
}ennemi;



typedef struct vie 
{
	int nbredevie ;
	SDL_Surface * vie1 ;
	SDL_Surface * vie2 ;	
	SDL_Surface * vie3 ;
	SDL_Rect position_de_vie ; 
	
}vie  ;



typedef struct score
{
	int score_atteint;
	SDL_Rect position_score ; 
	TTF_Font *police_score; 
	SDL_Color policeNoire;
	SDL_Surface *score_texte;
	
}score  ;



typedef struct personnage
    {
	SDL_Surface * spriteleft[12];
	SDL_Surface * spriteright[12];
	SDL_Rect position_perso;
	int direction;
	vie vie_perso ;
	score score_perso ; 
     } personnage;


personnage initperso (personnage c);
void affichageperso(personnage c, SDL_Surface * screen, int whichDirection);
void animperso (personnage c, SDL_Surface *screen, char whichDirection);
void animEnm (ennemi e, SDL_Surface *screen, char whichDirection);

#endif
