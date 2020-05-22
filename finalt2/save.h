#ifndef SAVE_H_
#define SAVE_H_

#include <stdio.h>

#include <stdlib.h>

#include "SDL/SDL.h"

#include "SDL/SDL_image.h"

#include "SDL/SDL_mixer.h"

#include "SDL/SDL_ttf.h"


typedef struct 
{
  SDL_Surface *img ;
  SDL_Rect pos ;
  SDL_Rect pos_text ;
}Objet ;


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
	SDL_Surface *spriteright;
	SDL_Surface *spriteleft;
	SDL_Rect position_perso;
	SDL_Rect position_sprite;
	int direction;
	int numr , numl ;
	vie vie_perso ;
	score score_perso ; 
	double acceleration ;
	double velocity;
	int moving ; 
     } personnage;

typedef struct ennemi
{
	SDL_Rect position_ennemi;
	SDL_Rect pos2;
	SDL_Rect pos1;
	SDL_Rect position_sprite ;
	int direction ; 
	SDL_Surface *spriteleft;
	SDL_Surface *spriteright;
	int numennemi;
}ennemi;

typedef struct background

{

	SDL_Surface *background;

	SDL_Rect posbg;

	int dx,fx,dy,fy;

}background;

//*********************************************************************************************************************************************************************************************************

personnage initperso (personnage c,int posx,int posy,int posw,int posh,int direction,int posviex , int posviey ,int nbre_de_vie,int score,int spritex, int spritey , int spritew,int spriteh,int numr,int numl , int posscorex, int posscorey , double velocity , double acceleration ,int moving, int i);

//*********************************************************************************************************************************************************************************************************

void animperso (personnage *c, SDL_Surface *screen);

//*********************************************************************************************************************************************************************************************************

void affichageperso(personnage c, SDL_Surface * screen);

//*********************************************************************************************************************************************************************************************************

void mouvement (personnage *c );

//*********************************************************************************************************************************************************************************************************

background initialiser_background(background b,int posbgx,int posbgy, int dx,int fx, int fy, int dy,int i);

//*********************************************************************************************************************************************************************************************************

ennemi initialiser_ennemi(ennemi e,int eposition_ennemix ,int eposition_ennemiy,int epos1x,int epos1y,int epos2x,int epos2y,int eposition_spritex ,int eposition_spritey ,int eposition_spritew ,int eposition_spriteh,int edirection,int i);

//*********************************************************************************************************************************************************************************************************

void SaveGame(personnage c1, personnage c2, background b ,char* file , ennemi e,int niveau);

//*********************************************************************************************************************************************************************************************************

void initialiser_save(Objet *sauv,Objet *sauvy,Objet *sauvn);

//*********************************************************************************************************************************************************************************************************

int verif_motion_save (SDL_Event event,Objet surface);

//*********************************************************************************************************************************************************************************************************

void clic_souris_save(SDL_Surface *screen,SDL_Event event, int curseur ,Objet sauvn,Objet sauvy,personnage c1, personnage c2, background b,char* file , ennemi e,int niveau);

//*********************************************************************************************************************************************************************************************************

void clic_entrer_save(SDL_Surface *screen ,Mix_Chunk *effect, int curseur,Objet sauvn,Objet sauvy,personnage c1, personnage c2, background b,char* file , ennemi e,int niveau);

//*********************************************************************************************************************************************************************************************************

void mouse_motion_save (SDL_Surface *screen ,SDL_Event event,Mix_Chunk *effect,int *curseur,Objet sauvn,Objet sauvy );

//*********************************************************************************************************************************************************************************************************

void deplacement_down_save (SDL_Surface *screen ,Mix_Chunk *effect,int *curseur,Objet sauvn,Objet sauvy );

//*********************************************************************************************************************************************************************************************************

void deplacement_up_save (SDL_Surface *screen ,Mix_Chunk *effect,int *curseur,Objet sauvn,Objet sauvy,int *firsttime);

//*********************************************************************************************************************************************************************************************************

int deplacement_up_down_save(SDL_Surface *screen, SDL_Event event ,int *firsttime,int *curseur,Objet sauvn,Objet sauvy, Mix_Chunk *effect,int *go,personnage c1, personnage c2, background b,char* file , ennemi e,int niveau);

//*********************************************************************************************************************************************************************************************************

int save(SDL_Surface *screen, SDL_Event event ,int *firsttime,int *curseur,Objet sauv,Objet sauvn,Objet sauvy, Mix_Chunk *effect,personnage c1, personnage c2, background b,char* file , ennemi e,int niveau,int *go);

//*********************************************************************************************************************************************************************************************************

void LoadGame(personnage *c1, personnage *c2, background *b , char filename[], ennemi *e ,int *niveau,SDL_Surface *screen);













#endif




