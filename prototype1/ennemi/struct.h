#ifndef ANIMENNEMI_H_

#define ANIMENNEMI_H_

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




typedef struct ennemi

{

	SDL_Rect position_ennemi;

	SDL_Rect pos2;

	SDL_Rect pos1;

	SDL_Rect position_sprite ;

	int direction ; 

	SDL_Surface *sprite;

}ennemi;



#endif
