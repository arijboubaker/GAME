#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "scrolling.h"

void initialiser (background *b) 
{
  SDL_WM_SetCaption("scrolling", NULL);

  b->img=IMG_Load("map.png") ;
  b->pos.x=0 ;
  b->pos.y=0 ;
  
}
void setup (SDL_Surface *screen, background *b)
{
  SDL_BlitSurface(b->img,NULL,screen, &(b->pos));
  SDL_Flip(screen) ;
}

/*void affichage_objet (SDL_Surface *screen ,background *b)
{
      if(map->pos.x<=(mapw/2 +1000) && map->pos.x>=mapw/2)
                     {
                        SDL_BlitSurface(wood->img,NULL, screen, &(wood->pos)) ;
                        SDL_BlitSurface(boat->img,NULL, screen, &(boat->pos)) ;
                        
                     }
}*/
void scrolling_droit (SDL_Surface *screen , background *b)
{
 if (b->pos.x<=mapw)
   b->pos.x+=20 ;

   SDL_BlitSurface(b->img,&(b->pos),screen, NULL);
}
void scrolling_gauche (SDL_Surface*screen , background *b)
{
 if (b->pos.x>=0)
   b->pos.x-=20 ;
 SDL_BlitSurface(b->img,&(b->pos),screen, NULL);  
}

void evenement (SDL_Surface *screen ,background *b,int direction  )
{

           if(direction==1) // Flèche droite
            	
                          scrolling_droit (screen ,b) ;
                          //affichage_objet (screen,boat,wood,map)  ;

                          SDL_Flip(screen);

                   

                     if(direction==0) // Flèche gauche
                          scrolling_gauche (screen ,b) ;
                          //affichage_objet (screen,boat,wood,map)  ; 
                 
                          SDL_Flip(screen);

}

/*void free_memory (Objet *boat ,Objet *wood,Objet *map)
{
 SDL_FreeSurface (boat->img) ;
 SDL_FreeSurface (wood->img) ;
 SDL_FreeSurface (map->img) ;

 SDL_Quit () ;

}*/
