#include "hero.h"


int init_hero(Hero* H, char* path,Hero* f)
{
	int OK;

	OK = loadHeroImages(H, path,f);
	if (OK != -1)
	{
		initHeroAttributes(H,f);
	}
	
	return OK;
}

int loadHeroImages(Hero * H, char* path,Hero *f)
{
	H->image = IMG_Load(path);
f->image = IMG_Load("p.png");
	if(H->image == NULL) {
		printf("Unable to load Hero gif:%s\n", SDL_GetError());
		return (-1);
	}

	return (0);
}


void initHeroAttributes(Hero* H,Hero* f)
{	
	int i, j;	
	f->positionAbsolue.x = -500;
	f->positionAbsolue.y =-485;
	H->positionAbsolue.x = 0;
	H->positionAbsolue.y = 0.69 * BACKGND_H - Hero_HEIGHT;
	H->positionAbsolue.w = Hero_WIDTH;
	H->positionAbsolue.h = Hero_HEIGHT;
	H->Frame.i = 0;
	H->Frame.j = 0;
	
        // Faire le calcul des SDL_Rect des positions de toutes 
	// les imagettes une seule fois à l'initialisation
	for (i = 0; i < SPRITE_HERO_NbL; i++)
	{	for(j = 0; j < SPRITE_HERO_NbCol; j++)
		{	
			H->positionAnimation[i][j].x = j * Hero_WIDTH;
			H->positionAnimation[i][j].y = i * Hero_HEIGHT;
			H->positionAnimation[i][j].w = Hero_WIDTH;  
			H->positionAnimation[i][j].h = Hero_HEIGHT;
		}
	}
	H->vies = 100;
	H->is_attacking = 0;	
}


void display_hero(Hero H, SDL_Surface* screen,Hero f)
{
	if (H.vies!=0)
	SDL_BlitSurface(H.image, &H.positionAnimation[H.Frame.i][H.Frame.j], screen, &H.positionAbsolue);
	SDL_BlitSurface(f.image, NULL, screen, &f.positionAbsolue);
}


void update_hero(Hero* H, int Tab_input[], int HE_collision,Hero* f)
{

	animateHero(H, Tab_input,HE_collision);
	moveHero(H, Tab_input,f);
	updateHeroScore(H, HE_collision);
}


void animateHero(Hero *H, int Tab_input[],int HE_collision)
{
	// mise a jour du numero de l'imagette 
		if(Tab_input[SDLK_RIGHT])
		{
			H->Frame.i = 0;
			H->Frame.j ++;    
			if (H->Frame.j == SPRITE_HERO_NbCol)   
		 		H->Frame.j = 0;
		}
		if(Tab_input[SDLK_LEFT])
		{
			H->Frame.i = 1;
			H->Frame.j ++;    
			if (H->Frame.j == SPRITE_HERO_NbCol)   
		 		H->Frame.j = 0;
		}
if ( HE_collision)
{

H->Frame.i = 2;
			H->Frame.j ++;    
			if (H->Frame.j == SPRITE_HERO_NbCol)   
		 		H->Frame.j = 0;
}

	
}

void moveHero(Hero *H, int Tab_input[],Hero* f)
{
	if(Tab_input[SDLK_RIGHT])
{
        	H->positionAbsolue.x +=20;   
            f->positionAbsolue.x +=1;
}
	if(Tab_input[SDLK_LEFT])
{
        	H->positionAbsolue.x -=20; 
              f->positionAbsolue.x -=1;  
}
}



void updateHeroScore(Hero* H, int HE_collision)
{
	if(HE_collision)
		if(H->vies > 0)
			H->vies --;
}


void freeHero(Hero *H, Hero *f)
{
	SDL_FreeSurface(H->image);
SDL_FreeSurface(f->image);

}
