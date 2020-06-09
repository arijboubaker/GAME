/**
* @file save.h
* @autor Bouabker Arij
* @date  Mai ,2020
*
*testing program for game saving and loading  
*
*/
#ifndef SAVE_H_
#define SAVE_H_

#include <stdio.h>

#include <stdlib.h>

#include "SDL/SDL.h"

#include "SDL/SDL_image.h"

#include "SDL/SDL_mixer.h"

#include "SDL/SDL_ttf.h"
/**
* @brief struct for yes/no objet 
* @struct objet 
*/


typedef struct 
{
  SDL_Surface *img ;
  SDL_Rect pos ;
  SDL_Rect pos_text ;
}Objet ;

/**
* @brief struct for vie perso 
* @struct vie 
*/

typedef struct vie 
{
	int nbredevie ;/*!< entier */
	SDL_Surface *vie[4];/*!< surface */
	SDL_Rect position_de_vie ; /*!< rectangle */
	
}vie  ;

/**
* @brief struct for score perso 
* @struct score 
*/

typedef struct score
{
	int score_atteint;/*!< entier */
	SDL_Rect position_score ; /*!< rectangle */
	TTF_Font *police_score; /*!< font */
	SDL_Surface *score_texte;/*!< surface */
	
}score  ;


/**
* @brief struct for perso 
* @struct personnage
*/
typedef struct personnage
    {
	SDL_Surface *sprite;/*!< surface */
	SDL_Rect position_perso;/*!< rectangle */
	SDL_Rect position_sprite;/*!< rectangle */
	int direction;/*!< entier */
	int numr , numl ;/*!< entier */
	vie vie_perso ;/*!<vie */
	score score_perso ; /*!< score */
	int velocity ;/*!< entier */
	int speed ; /*!< entier */
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

}ennemi;
/**
* @struct background
* @brief struct for background
*
*/
typedef struct 
{
  SDL_Surface *img ;
  SDL_Rect pos ; 

}background;







//*********************************************************************************************************************************************************************************************************
/**
* @brief to save game
* @param c1=personnage1 
* @param c2=personnage2
* @param b=background 
* @param file 
* @param e=ennemy 
* @param niveau 
* @return nothing
*/
void SaveGame(personnage c1, personnage c2, background b ,char* file , ennemi e,int niveau);

//*********************************************************************************************************************************************************************************************************
/**
* @brief pour initialiser le menu de save oui/non 
* @param sauvy
* @param sauvn
* @param sauv
* @return nothing
*/
void initialiser_save(Objet *sauv,Objet *sauvy,Objet *sauvn);

//*********************************************************************************************************************************************************************************************************
/**
* @brief to verify mouse motion  
* @param surface 
* @param event
* @return entier
*/
int verif_motion_save (SDL_Event event,Objet surface);

//*********************************************************************************************************************************************************************************************************
/**
* @brief clic avec souris dans le menu de save oui/non 
* @param screen
* @param event
* @param curseur
* @param sauvy
* @param sauvn
* @param c1=personnage 1
* @param c2=personnage 2
* @param b=background 
* @param file 
* @param e=ennemy 
* @param niveau 
* @return nothing
*/
void clic_souris_save(SDL_Surface *screen,SDL_Event event, int curseur ,Objet sauvn,Objet sauvy,personnage c1, personnage c2, background b,char* file , ennemi e,int niveau);

//*********************************************************************************************************************************************************************************************************
/**
* @brief clic avec bouton entrer dans le menu de save oui/non 
* @param screen
* @param effect
* @param curseur
* @param sauvy
* @param sauvn
* @param c1=personnage 1
* @param c2=personnage 2
* @param b=background 
* @param file 
* @param e=ennemy 
* @param niveau 
* @return nothing
*/
void clic_entrer_save(SDL_Surface *screen ,Mix_Chunk *effect, int curseur,Objet sauvn,Objet sauvy,personnage c1, personnage c2, background b,char* file , ennemi e,int niveau);

//*********************************************************************************************************************************************************************************************************

/**
* @brief mouse motion dans le menu de save oui/non
* @param screen
* @param event
* @param sauvy
* @param curseur
* @param effect 
* @return nothing
*/
void mouse_motion_save (SDL_Surface *screen ,SDL_Event event,Mix_Chunk *effect,int *curseur,Objet sauvn,Objet sauvy );

//*********************************************************************************************************************************************************************************************************
/**
* @brief se deplacer vers le bas dans le menu de save oui/non
* @param screen
* @param sauvn 
* @param sauvy
* @param curseur
* @param effect 
* @return nothing
*/
void deplacement_down_save (SDL_Surface *screen ,Mix_Chunk *effect,int *curseur,Objet sauvn,Objet sauvy );

//*********************************************************************************************************************************************************************************************************
/**
* @brief se deplacer vers le haut dans le menu de save oui/non
* @param screen
* @param curseur   
* @param sauvn 
* @param sauvy
* @param effect 
* @return nothing
*/
void deplacement_up_save (SDL_Surface *screen ,Mix_Chunk *effect,int *curseur,Objet sauvn,Objet sauvy );

//*********************************************************************************************************************************************************************************************************
/**
* @brief se deplacer vers le bas et vers le haut dans le menu de save oui/non
* @param screen
* @param event  
* @param curseur  
* @param sauv  
* @param sauvn 
* @param sauvy
* @param effect 
* @param c1=personnage 1
* @param c2=personnage 2
* @param b=background 
* @param file 
* @param e=ennemy 
* @param niveau 
* @param go
* @param c=personnage 
* @return nothing
*/
int deplacement_up_down_save(SDL_Surface *screen, SDL_Event event  ,int *curseur,Objet sauvn,Objet sauvy, Mix_Chunk *effect,int *go,personnage c1, personnage c2, background b,char* file , ennemi e,int niveau);

//*********************************************************************************************************************************************************************************************************
/**
* @brief to save game
* @param screen
* @param event  
* @param curseur  
* @param sauv  
* @param sauvn 
* @param sauvy
* @param effect 
* @param c1=personnage 1
* @param c2=personnage 2
* @param b=background 
* @param file 
* @param e=ennemy 
* @param niveau 
* @param go
* @param c=personnage 
* @return nothing
*/
int save(SDL_Surface *screen, SDL_Event event ,int *curseur,Objet sauv,Objet sauvn,Objet sauvy, Mix_Chunk *effect,personnage c1, personnage c2, background b,char* file , ennemi e,int niveau,int *go);

//*********************************************************************************************************************************************************************************************************
/**
* @brief to load game 
* @param c1=personnage1
* @param c2=personnage2
* @param screen
* @param b= background 
* @param e=ennemi 
* @param niveau 
* @param screen 
* @return nothing
*/
void LoadGame(personnage *c1, personnage *c2, background *b , ennemi *e ,int *niveau,SDL_Surface *screen);


///********************************************************************
/**
* @brief to animate ennemy
* @param screen
* @param e=ennemi
* @return nothing
*/
void animEnm (ennemi *e, SDL_Surface *screen);

///********************************************************************
/**
* @brief to initialize ennemy
* @param e=ennemi
* @return nothing
*/
void initialiserennemi(ennemi *e);

///********************************************************************
/**
* @brief to free memory from ennemy
* @param e=ennemi
* @return nothing
*/
void freesurfaceennemi(ennemi *e);

///********************************************************************
/**
* @brief to display ennemy 
* @param screen 
* @param e=ennemi
* @return nothing
*/
void affichage_ennemi(ennemi e, SDL_Surface *screen);

///********************************************************************
/**
* @brief to move ennemy
* @param e=ennemi
* @return nothing
*/
void mvm_alea_enemi(ennemi *e);



//*********************************************************************************************************************************************************************************************************
personnage initiaperso(personnage c);
personnage initiaperso2(personnage c);
/**
* @brief to initialize hero 
* @return personnage
*/
personnage initperso (personnage c,int posx,int posy,int posw,int posh,int direction,int posviex , int posviey ,int nbre_de_vie,int score,int spritex, int spritey , int spritew,int spriteh,int numr,int numl , int posscorex, int posscorey , int velocity , int speed, int i);

//*********************************************************************************************************************************************************************************************************
/**
* @brief to animate hero 
* @param c=personnage 
* @param screen 
* @return nothing
*/
void animperso (personnage *c, SDL_Surface *screen);

//*********************************************************************************************************************************************************************************************************
/**
* @brief to display hero 
* @param c=personnage 
* @param screen 
* @return nothing
*/
void affichageperso(personnage c, SDL_Surface * screen);

//*********************************************************************************************************************************************************************************************************
/**
* @brief to move hero 
* @param c=personnage 
* @return nothing
*/
void mouvement (personnage *c );

//*********************************************************************************************************************************************************************************************************
/**
* @brief to initialize background 
* @return background 
*/
background initialiser_background(background b,int posx,int posy,int i);

//*********************************************************************************************************************************************************************************************************
/**
* @brief to initialize ennemy 
* @return nothing
*/
void initialiserennemi(ennemi *e);
/**
* @brief to initialize ennemy  
* @return ennemy 
*/
ennemi initialiser_ennemi(ennemi e,int eposition_ennemix ,int eposition_ennemiy,int epos1x,int epos1y,int epos2x,int epos2y,int eposition_spritex ,int eposition_spritey ,int eposition_spritew ,int eposition_spriteh,int edirection);


#endif




