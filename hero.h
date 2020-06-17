#ifndef Hero_H
#define Hero_H
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "background.h"
#include "defs.h"


struct hero{
        SDL_Surface * image;
	SDL_Rect positionAnimation [SPRITE_HERO_NbL][SPRITE_HERO_NbCol];
	FRAME Frame;
	SDL_Rect positionAbsolue;
	int vies;
	int is_attacking;
};
typedef struct hero Hero;

int init_hero(Hero* H, char* path, Hero* f);
void update_hero(Hero* H, int Tab_input[], int HE_collision,Hero* f);

void display_hero(Hero H, SDL_Surface* screen, Hero f);
void freeHero(Hero *H,Hero *f);

int loadHeroImages(Hero * H, char* path,Hero* f);
void initHeroAttributes(Hero *H,Hero *f);

void animateHero(Hero *H, int Tab_input[],int HE_collision);
void moveHero(Hero *H, int Tab_input[],Hero* f);
void updateHeroScore(Hero* H, int HE_collision);




#endif
