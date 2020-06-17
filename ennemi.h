#ifndef Ennemi_H
#define Ennemi_H
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "defs.h"
#include "background.h"


typedef enum STATE STATE;
enum STATE {WAITING, FOLLOWING,ATTACKING,RUNNING,MOVING,MOVING1};

struct Ennemi
{
        SDL_Surface * image;
	SDL_Rect positionAnimation [SPRITE_ENNEMI_NbL][SPRITE_ENNEMI_NbCol];
	FRAME Frame;
	SDL_Rect positionAbsolue;
	int Direction;
	STATE State;
};
typedef struct Ennemi Ennemi;

int init_ennemi(Ennemi* E, char* path);
void update_ennemi(Ennemi* E, SDL_Rect posHero);

void display_ennemi(Ennemi E, SDL_Surface* screen);
void freeEnnemi(Ennemi* E);

int loadEnnemiImages(Ennemi* E, char* path);
void initEnnemiAttributes(Ennemi* E);
void anim (Ennemi* E);
void anim2 (Ennemi* E);
void animateEnnemi(Ennemi* E);
void moveEnnemi(Ennemi* E, SDL_Rect posHero);
void moveEnnemi2(Ennemi* E, SDL_Rect posHero);
void moveEnnemi3(Ennemi *E, SDL_Rect posHero);
void updateEnnemiState(Ennemi* E, int distEH);


#endif
