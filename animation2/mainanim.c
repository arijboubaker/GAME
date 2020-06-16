#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"
#include "SDL/SDL_ttf.h"
#include "anim.h"

int main()
{
SDL_Init(SDL_INIT_VIDEO);
SDL_Event event ; 

SDL_Surface *screen=NULL;
int go=1;






screen=SDL_SetVideoMode(1920,1080, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);



while(go)
{
 
SDL_PollEvent(&event);
switch(event.type)
        {
	case SDL_KEYDOWN:
            switch(event.key.keysym.sym)
            	{	
;
		case SDLK_ESCAPE:
			go = 0;
		break;	
		
		
		}
          }
go = animationlogo(screen ,go);
SDL_Flip(screen);
}


SDL_Quit();
return 0;
}

