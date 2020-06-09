/**
* @file animennemi.h
* @autor Bouabker Arij
* @date  Mai ,2020
*
*@brief testing program for ennemy animation  
*
*/


#ifndef ANIMENNEMI_H_
#define ANIMENNEMI_H_
#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"
#include "SDL/SDL_ttf.h"



#define spriteennemi1_W 200 
#define spriteennemi1_H 300
///********************************************************************
/**
* @struct background 
* @brief struct for background
*
*/

typedef struct background

{

	SDL_Surface *background;

	SDL_Rect posbg;

	int dx,fx,dy,fy;

}background;

///********************************************************************
/**
* @struct ennemi
* @brief struct for ennemi
*
*/
typedef struct ennemi
{
	SDL_Rect position_ennemi;/*!< rectangle */
	SDL_Rect pos2;/*!< rectangle */
	SDL_Rect pos1;/*!< rectangle */
	SDL_Rect position_sprite ;/*!< rectangle */
	int direction ; /*!< entier */
	SDL_Surface *spriteleft;/*!< surface */
	SDL_Surface *spriteright;/*!< surface */
}ennemi;

///********************************************************************
/**
* @brief to animate hero 
* @param ennemi=e 
* @param screen the screen 
* @param b the background
* @return nothing
*/
void animEnm (ennemi *e, SDL_Surface *screen,background b);

///********************************************************************

void initialiserennemi(ennemi *e);

///********************************************************************

void freesurfaceennemi(ennemi *e);

///********************************************************************

void affichage_ennemi(ennemi e, SDL_Surface *screen,background b);

///********************************************************************

void mvm_alea_enemi(ennemi *e);


#endif
