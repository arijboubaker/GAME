/**
* @file main.c
* @autor Bouabker Arij
* @date  Mai ,2020
*
*testing program for ennemy animation  
*
*/
#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"
#include "SDL/SDL_ttf.h"
#include "animennemi.h"

int main()
{

if (SDL_Init(SDL_INIT_VIDEO)==-1)
    {
        printf ("unable to initialize SDL:%s\n",SDL_GetError());
    }




ennemi e ;
SDL_Event event;
SDL_Surface *screen=NULL;

int go=1,i;

background b ;
initialiserennemi(&e);
b.background=IMG_Load("background.png");
if (b.background==NULL)
    {
        printf ("Unable to load background:%s\n",SDL_GetError());
    }


screen=SDL_SetVideoMode(1280, 720, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);
SDL_BlitSurface(b.background, NULL, screen, &b.posbg);
SDL_Flip(screen);



while(go)
{   

SDL_PollEvent(&event);

switch(event.type)
        {
	case SDL_KEYDOWN:
            switch(event.key.keysym.sym)
            	{	
		
		case SDLK_ESCAPE:
			go = 0;
		break;	

		}
	}




	animEnm(&e,screen,b);
 

	SDL_Flip(screen);

}

	freesurfaceennemi(&e);
	SDL_FreeSurface(b.background);
	SDL_Quit();
return 0;
}

