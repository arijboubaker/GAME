#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "scrolling.h"
#include "perso.h"


int main()
{
SDL_Surface *screen = NULL ;
SDL_Event event;
personnage c ;
background b ;
int running=1 ;

 screen= SDL_SetVideoMode(1360, 560, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);

  
  initialiser (&b ) ;
  setup (screen,&b) ;
  c=initperso(c);
  affichageperso(c,screen);
  SDL_Flip(screen);

  SDL_EnableKeyRepeat(10, 10);
  while(running){
SDL_PollEvent(&event);
switch(event.type)
        {
	case SDL_KEYDOWN:
            switch(event.key.keysym.sym)
            	{	
		case SDLK_RIGHT: 
		
			c.direction=1;
			//posbg.x-=100;
			//animperso(&c,screen,background,posbg);
			
		break;
		case SDLK_LEFT: 
			
			c.direction=0;
			
			//animperso(&c,screen,background,posbg);
			
			
		break;
		case SDLK_ESCAPE:
			running = 0;
		break;	
		}
         }
      evenement (screen ,&b,c.direction  ) ;
	animperso(&c,screen);
	affichageperso(c,screen);
	c.direction=-1;
     }
    //free_memory (&boat ,&wood,&map) ;

    

    return EXIT_SUCCESS;
}
