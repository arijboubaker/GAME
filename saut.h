/**
* @file deplacement.h
*/
#ifndef JEU_H_INCLUDED
#define JEU_H_INCLUDED
#include <SDL/SDL.h>
/**
* @struct objet
* @brief struct for Objet
*/


void animate(SDL_Surface *screen ,  SDL_Surface *Background ,SDL_Surface *image2, SDL_Rect *positionFond  , int *running);
void fichier(char nomfichier[],int *n, short int *i  , int *running);
void extraire(char nomfichier[],int *x, short  int *y ) ;
#endif // JEU_H_INCLUDED

