#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include "SDL/SDL_gfxPrimitives.h"
#include "SDL/SDL_mixer.h"
#include "menu.h"


int main ()
{
SDL_Surface *screen = NULL ;
Objet newgame,settings,icon,in_sound,in_sound25,in_sound50,in_sound75,in_sound100 ;
Objet in_settings,credits,main_menu,quitter,wexit,nwexit,exxit,game ;
SDL_Event event, event2;
Mix_Music  *music_back=NULL;
 Mix_Chunk *effect ;

int running = 1,running2=1,running3=1;
int curseur = 0, firsttime = 0,in,s=0,position_volume=5,boolean_icon=1,quitt=0,test=1,test_s;


  SDL_Init(SDL_INIT_VIDEO);
  if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1)
  {
    printf("%s", Mix_GetError());
  }

  screen = SDL_SetVideoMode(1920,1080, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);

  initialiser (&newgame,&settings,&icon,&in_sound ,&in_sound25,&in_sound50,&in_sound75,&in_sound100,&in_settings,&main_menu ,&quitter,&wexit,&nwexit ,&exxit,&game) ;
  setup (screen ,&game,&icon) ;	
  music_back = Mix_LoadMUS("musique.mp3");
  effect= Mix_LoadWAV("son1.wav");
  Mix_PlayMusic(music_back,-1) ;
  
  

  
  SDL_EnableKeyRepeat(100, 100);
  while(running)
  {
   in=deplacementmenu_up_down(screen,event ,&firsttime,&curseur,&running,newgame,settings ,quitter,&icon,in_settings,effect,&boolean_icon,&quitt,exxit) ;
if(boolean_icon==1)
Mix_VolumeMusic(MIX_MAX_VOLUME / 8);
else if(boolean_icon==0)
Mix_VolumeMusic(0);
        if(quitt)
     {
       running3=1 ;
       update (screen,&exxit,&icon) ; 
       {
         test= 1 ;
         while(running3)
         {
          quitter_oui_non(screen ,event,&running,&running2,&running3,quitter,icon,wexit,nwexit,&test,&test_s) ; 
         }
         
       }
     }
   if(in)
   {
     running2=1 ;
     update (screen,&in_settings,&icon) ; 
     curseur=0,firsttime=0 ;
    while(running2)
    {
     deplacement_sous_menu (screen ,effect,event ,&running2,in_settings,in_sound,in_sound25,in_sound50,in_sound75,in_sound100,&position_volume,main_menu,&icon,&running,&curseur,&firsttime,settings,&boolean_icon) ; 

    }

     
   }

  }//fin running
  liberate (&newgame,&settings,&icon,&in_sound ,&in_sound25,&in_sound50,&in_sound75,&in_sound100,&in_settings,&main_menu ,&quitter,&wexit,&nwexit ,&exxit,&game) ;


}
