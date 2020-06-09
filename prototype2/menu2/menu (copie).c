#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include "SDL/SDL_mixer.h"
#include "menu.h"



void initialiser (Objet *newgame,Objet *loadgame ,Objet *settings,Objet *icon,Objet *in_sound ,Objet *in_sound25,Objet *in_sound50,Objet *in_sound75,Objet *in_sound100,Objet *in_settings,Objet *credits,Objet *main_menu ,Objet *quitter,Objet *wexit,Objet *nwexit ,Objet *exxit,Objet *game , Objet *j1 , Objet *j2 ,Objet *joueur , Objet *mode, Objet *souris , Objet *clavier , Objet *manette)
{
  game->img = IMG_Load("game.png");
    game->pos.x=0 ;
    game->pos.y=0 ;

  newgame->img=IMG_Load("newgame.png");
  newgame->pos.x=0 ;
  newgame->pos.y=0 ;
  newgame->pos_text.w=n_w ;
  newgame->pos_text.h=n_h ;
  newgame->pos_text.x=0 ;
  newgame->pos_text.y=274 ;



  loadgame->img=IMG_Load("loadgame.png");
  loadgame->pos.x=0 ;
  loadgame->pos.y=0 ;
  loadgame->pos_text.w=n_w ;
  loadgame->pos_text.h=n_h ;
  loadgame->pos_text.x=0 ;
  loadgame->pos_text.y=102 ;
  

  settings->img=IMG_Load("settings.png");
  settings->pos.x=0 ;
  settings->pos.y=0 ;
  settings->pos_text.w=s_w ;
  settings->pos_text.h=s_h ;
  settings->pos_text.x=0 ;
  settings->pos_text.y=432 ;

 quitter->img=IMG_Load("exit.png");
  quitter->pos.x=0 ;
  quitter->pos.y=0 ;
  quitter->pos_text.w=e_w ;
  quitter->pos_text.h=e_h ;
  quitter->pos_text.x=0 ;
  quitter->pos_text.y=594 ;

  icon->img=IMG_Load("yes.png");
  icon->pos.x=20 ;
  icon->pos.y=50 ;
  icon->pos_text.w=sound_w ;
  icon->pos_text.h=sound_h ;
  icon->pos_text.x=20 ;
  icon->pos_text.y=50 ;
  
  in_sound->img=IMG_Load("asound0.png");
  in_sound->pos.x=0 ;
  in_sound->pos.y=0 ;
  in_sound->pos_text.w=i_s_w ;
  in_sound->pos_text.h=i_s_h ;
  in_sound->pos_text.x=345; 
  in_sound->pos_text.y=250 ;


  in_sound25->img=IMG_Load("asound25.png");
  in_sound25->pos.x=0 ;
  in_sound25->pos.y=0 ;

  in_sound50->img=IMG_Load("asound50.png") ;
  in_sound50->pos.x=0 ;
  in_sound50->pos.y=0 ;

  in_sound75->img=IMG_Load("asound75.png") ;
  in_sound75->pos.x=0 ;
  in_sound75->pos.y=0 ;

  in_sound100->img=IMG_Load("asound100.png");
  in_sound100->pos.x=0 ;
  in_sound100->pos.y=0 ;

  in_settings->img=IMG_Load("settings2.png") ;
  in_settings->pos.x=0 ;
  in_settings->pos.y=0 ;


  main_menu->img=IMG_Load("main_menu.png");
  main_menu->pos.x=0 ;
  main_menu->pos.y=0 ;
  main_menu->pos_text.w=i_s_w ;
  main_menu->pos_text.h=i_s_h ;
  main_menu->pos_text.x=20 ;
  main_menu->pos_text.y=162 ;



  


  wexit->img=IMG_Load("ywexit.png") ;
  wexit->pos.x=0 ;
  wexit->pos.y=0 ;
  wexit->pos_text.w=yn_w ;
  wexit->pos_text.h=yn_h ;
  wexit->pos_text.x=997 ;
  wexit->pos_text.y=704 ;



  nwexit->img=IMG_Load("nwexit.png") ;
  nwexit->pos.x=0 ;
  nwexit->pos.y=0 ;
  nwexit->pos_text.w=yn_w  ;
  nwexit->pos_text.h=yn_h  ;
  nwexit->pos_text.x=549  ;
  nwexit->pos_text.y=704  ;

  


  exxit->img=IMG_Load("wexit.png") ;
  exxit->pos.x=0 ;
  exxit->pos.y=0 ;

  j1->img=IMG_Load("becha.png") ;
  j1->pos.x=0 ;
  j1->pos.y=0 ;
  j1->pos_text.w=b_w  ;
  j1->pos_text.h=b_h  ;
  j1->pos_text.x=330  ;
  j1->pos_text.y=648  ;


  j2->img=IMG_Load("yasmine.png") ;
  j2->pos.x=0 ;
  j2->pos.y=0 ;
  j2->pos_text.w=y_w  ;
  j2->pos_text.h=y_h  ;
  j2->pos_text.x=793  ;
  j2->pos_text.y=648  ;

  joueur->img=IMG_Load("joueur.png") ;
  joueur->pos.x=0 ;
  joueur->pos.y=0 ;
  joueur->pos_text.w=j_w  ;
  joueur->pos_text.h=j_h  ;
  joueur->pos_text.x=20  ;
  joueur->pos_text.y=360  ;

  mode->img=IMG_Load("modedejeu.png") ;
  mode->pos.x=0 ;
  mode->pos.y=0 ;
  mode->pos_text.w=m_w  ;
  mode->pos_text.h=m_h  ;
  mode->pos_text.x=20  ;
  mode->pos_text.y=264  ;

  souris->img=IMG_Load("souris.png") ;
  souris->pos.x=0 ;
  souris->pos.y=0 ;
  souris->pos_text.w=so_w  ;
  souris->pos_text.h=so_h  ;
  souris->pos_text.x=645  ;
  souris->pos_text.y=369  ;


  clavier->img=IMG_Load("clavier.png") ;
  clavier->pos.x=0 ;
  clavier->pos.y=0 ;
  clavier->pos_text.w=c_w  ;
  clavier->pos_text.h=c_h  ;
  clavier->pos_text.x=1065  ;
  clavier->pos_text.y=369  ;

  manette->img=IMG_Load("manette.png") ;
  manette->pos.x=0 ;
  manette->pos.y=0 ;
  manette->pos_text.w=ma_w  ;
  manette->pos_text.h=ma_h  ;
  manette->pos_text.x=1464  ;
  manette->pos_text.y=369  ;

}
void setup (SDL_Surface *screen ,Objet *game,Objet *icon)
{
    SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 255, 255, 255));
    SDL_BlitSurface(game->img, NULL, screen, &(game->pos));
    SDL_Flip(screen);
}
int verif_motion_surface (SDL_Event event,Objet surface)
{
  int pos=0 ;

  if (event.motion.x > surface.pos_text.x && event.motion.x < (surface.pos_text.w + surface.pos_text.x) && event.motion.y > surface.pos_text.y && event.motion.y < (surface.pos_text.h + surface.pos_text.y)) 
    pos=1 ;//pour verifier le balayage sur l espace du bouton

    return pos ;
  
}
void update (SDL_Surface *screen , Objet *surface1,Objet *surface2)
{
  if(surface1!=NULL)
  SDL_BlitSurface(surface1->img, NULL, screen, &(surface1->pos));
  if(surface2!=NULL)
  SDL_BlitSurface(surface2->img, NULL, screen, &(surface2->pos));

  SDL_Flip (screen) ;
}
void liberate (Objet *newgame,Objet *loadgame ,Objet *settings,Objet *icon,Objet *in_sound ,Objet *in_sound25,Objet *in_sound50,Objet *in_sound75,Objet *in_sound100,Objet *in_settings,Objet *credits,Objet *main_menu ,Objet *quitter,Objet *wexit,Objet *nwexit ,Objet *exxit,Objet *game, Objet *j1 , Objet *j2 ,Objet *joueur , Objet *mode, Objet *souris , Objet *clavier , Objet *manette)
{
  SDL_FreeSurface (newgame->img);
  SDL_FreeSurface (loadgame->img);
  SDL_FreeSurface (settings->img);
  SDL_FreeSurface (icon->img);
  SDL_FreeSurface (in_sound->img);
  SDL_FreeSurface (in_sound25->img);
  SDL_FreeSurface (in_sound50->img);
  SDL_FreeSurface (in_sound75->img);
  SDL_FreeSurface (in_sound100->img);
  SDL_FreeSurface (in_settings->img);
  SDL_FreeSurface (credits->img);
  SDL_FreeSurface (main_menu->img);
  SDL_FreeSurface (quitter->img);
  SDL_FreeSurface (wexit->img);
  SDL_FreeSurface (nwexit->img);
  SDL_FreeSurface (exxit->img);
  SDL_FreeSurface (game->img);
SDL_FreeSurface (j1->img);
SDL_FreeSurface (j2->img);
SDL_FreeSurface (joueur->img);
SDL_FreeSurface (mode->img);
SDL_FreeSurface (manette->img);
SDL_FreeSurface (clavier->img);
SDL_FreeSurface (souris->img);




}
void clic_souris_menu_principale (SDL_Surface *screen,SDL_Event event, int curseur ,Objet newgame,Objet loadgame,Objet settings,Objet in_settings,Objet *icon,Objet quitter,int *in,int *running,int *boolean_icon,int *quitt,Objet exxit)
{
            if (event.button.button == SDL_BUTTON_LEFT && (curseur)==1 )
           {
            if(verif_motion_surface (event,loadgame)) 
            {
              //loadgame ici  
            } 
              
           }
           if (event.button.button == SDL_BUTTON_LEFT && (curseur)==2 )
           {
            if(verif_motion_surface (event,newgame))
            {
              //newgame ici  
            } 
                        
           }
           if (event.button.button == SDL_BUTTON_LEFT && (curseur)==3 )
           {
            if(verif_motion_surface (event,settings)) 
            {
             update (screen ,&in_settings,&in_settings) ;
             *in=1 ;
            } 
                              
           }
           if (event.button.button == SDL_BUTTON_LEFT && (curseur)==4 )
           {
            if(verif_motion_surface (event,quitter)) 
            {
             update (screen ,&exxit,&exxit) ; 
             *quitt=1 ;  
            }
            
           }
 
}
void clic_entrer_menu_principale (SDL_Surface *screen ,Objet in_settings,Objet icon,Mix_Chunk *effect, int curseur,int *in,int *running,int *quitt,Objet exxit )
{
               switch ((curseur))
             {
               case 1:
               
               break;
               case 2:
               
               break;               
               case 3:
                   update (screen ,&in_settings,&in_settings) ;
                   Mix_PlayChannel(1,effect,0);  
                   *in=1 ;               
               break; 
               case 4:
                   update (screen ,&exxit,&exxit) ;
                   Mix_PlayChannel(1,effect,0);
                   *quitt=1 ;
                     
                
               break;                           
             }
}
void mouse_motion_main_menu (SDL_Surface *screen ,SDL_Event event,Mix_Chunk *effect,int *curseur,Objet newgame,Objet icon,Objet loadgame,Objet settings,Objet quitter,int *quitt )
{
          if(verif_motion_surface (event,loadgame)) 
            {
              if((*curseur)==1)
              return;
             *curseur=1 ;
              update (screen ,&loadgame,&loadgame) ;
              Mix_PlayChannel(1,effect,0);              
            }
          if(verif_motion_surface (event,newgame)) 
            {
              if((*curseur)==2)
              return;              
             *curseur=2 ;
              update (screen ,&newgame,&newgame) ;
              Mix_PlayChannel(1,effect,0);              
            }
          if(verif_motion_surface (event,settings)) 
            {
              if((*curseur)==3)
              return;              
             *curseur=3 ;
              update (screen ,&settings,&settings) ;
              Mix_PlayChannel(1,effect,0);              
            }                        
          if(verif_motion_surface (event,quitter)) 
            {
              if((*curseur)==4)
              return;              
             *curseur=4 ;
              update (screen ,&quitter,&quitter) ;
              Mix_PlayChannel(1,effect,0);              
            }
}
void deplacementmenu_down (SDL_Surface *screen ,Mix_Chunk *effect,int *curseur,Objet newgame,Objet icon,Objet loadgame,Objet settings,Objet quitter,int *quitt )
{
               (*curseur)++ ;
               
                switch ((*curseur))
                  {
                    case 1 :
                       update (screen ,&loadgame,&loadgame) ;
                       Mix_PlayChannel(1,effect,0);
                    break;
                    case 2:
                       update (screen ,&newgame,&newgame) ;
                       Mix_PlayChannel(1,effect,0);
                    break;
                    
                    case 3 :
                       update (screen ,&settings,&settings) ;
                       Mix_PlayChannel(1,effect,0);
                    break ;
                    case 4 : 
                       update (screen ,&quitter,&quitter) ;
                       Mix_PlayChannel(1,effect,0);
                    break ;  
                    case 5 : 
                       update (screen ,&loadgame,&loadgame) ;
                       Mix_PlayChannel(1,effect,0);
                      (*curseur)=1;

                    break ; 
  

                  }
              
}
void deplacementmenu_up (SDL_Surface *screen ,Mix_Chunk *effect,int *curseur,Objet newgame,Objet icon,Objet loadgame,Objet settings,Objet quitter,int *firsttime,int *quitt)
{
              if((*curseur)==0 && (*firsttime)==0)
               {
                 update (screen ,&loadgame,&loadgame) ;
                 Mix_PlayChannel(1,effect,0);
                 (*curseur)=1 ;
                 (*firsttime)=1 ;
               }
             else
               {
                 (*curseur)++ ;
                                 
                  switch ((*curseur))
                  {
                    case 1:
                       update (screen ,&loadgame,&loadgame) ;
                       Mix_PlayChannel(1,effect,0);
                    break;
                    case 2 :
                       update (screen ,&quitter,&quitter) ;
                       Mix_PlayChannel(1,effect,0);
                    break;
                    case 3 :
                       update (screen ,&settings,&settings) ;
                       Mix_PlayChannel(1,effect,0);
                    break ;
                    case 4 : 
                       update (screen ,&newgame,&newgame) ;
                       Mix_PlayChannel(1,effect,0);
                    break ; 
                    case 5 : 
                       update (screen ,&loadgame,&loadgame) ;
                       Mix_PlayChannel(1,effect,0);
                     (*curseur)=1;
                    break ;
                  }//fin switch (*curseur)
                 
                
                 
               } 
}
int deplacementmenu_up_down(SDL_Surface *screen, SDL_Event event ,int *firsttime,int *curseur,int *running,Objet newgame,Objet loadgame,Objet settings ,Objet quitter ,Objet *icon,Objet in_settings , Mix_Chunk *effect,int *boolean_icon,int *quitt,Objet exxit)
{

  int in=0 ;
  *quitt= 0 ;
      SDL_WaitEvent(&event);
    switch (event.type)
    {
      case SDL_QUIT:
      *running = 0;
      break ;
      case SDL_MOUSEBUTTONDOWN:
           clic_souris_menu_principale (screen,event, *curseur ,newgame,loadgame,settings,in_settings,icon,quitter,&in,running,boolean_icon,quitt,exxit) ;                   
      break;
      case SDL_MOUSEMOTION:
           mouse_motion_main_menu (screen , event,effect,curseur,newgame,*icon,loadgame,settings,quitter,quitt ) ;
      break;
      case SDL_KEYDOWN:
          switch (event.key.keysym.sym)
          {
           case SDLK_ESCAPE:
           running=0 ;
           break ; 
           case SDLK_RETURN:
               clic_entrer_menu_principale (screen ,in_settings,*icon,effect,*curseur,&in,running,quitt,exxit ) ;
           break ;
           case SDLK_DOWN :
               deplacementmenu_down (screen ,effect,curseur,newgame,*icon,loadgame,settings,quitter,quitt ) ;
           break ;
           case SDLK_UP :
               deplacementmenu_up (screen ,effect,curseur,newgame,*icon,loadgame,settings,quitter,firsttime,quitt ) ;
           break ;
     
          }//fin sswitch keydown
    }//fin switch 

     return in ;
}
void deplacement__sousmenu_down (SDL_Surface *screen ,Mix_Chunk *effect,int *curseur,Objet in_sound,Objet in_sound25,Objet in_sound50,Objet in_sound75,Objet in_sound100,int position_volume,Objet icon,Objet credits,Objet main_menu, Objet j1 , Objet j2 ,Objet joueur , Objet mode, Objet souris , Objet clavier , Objet manette,int position_mode,int position_j)
{
                (*curseur)++ ;
               if((*curseur)<5)
                switch ((*curseur))
                  {
                    case 1:
                       update_volume_surface(screen,effect,in_sound ,in_sound25,in_sound50,in_sound75,in_sound100,position_volume) ;
                       
                    break;
                   
                    case 2 :
                       update (screen ,&main_menu,&main_menu) ;
                       Mix_PlayChannel(1,effect,0);
                    break ;
                   case 3 :
                       update_mode_surface(screen,effect,mode ,souris,clavier,manette,position_mode);
                       Mix_PlayChannel(1,effect,0);
                    break ;
                  case 4 :
                       update_joueur_surface(screen,effect,joueur , j1, j2,position_j);
                       Mix_PlayChannel(1,effect,0);
                    break ;

                  }
              
}
void deplacement__sousmenu_up (SDL_Surface *screen ,Mix_Chunk *effect,int *curseur,Objet in_sound,Objet in_sound25,Objet in_sound50,Objet in_sound75,Objet in_sound100,int position_volume,Objet icon,Objet credits,Objet main_menu,int *firsttime, Objet j1 , Objet j2 ,Objet joueur , Objet mode, Objet souris , Objet clavier , Objet manette,int position_mode,int position_j)
{
               if((*curseur)==0 && (*firsttime)==0)
               {
                 update_volume_surface(screen,effect,in_sound ,in_sound25,in_sound50,in_sound75,in_sound100,position_volume) ;
                 
                 (*curseur)=1 ;
                 (*firsttime)=1 ;
               }
             else
               {
                 (*curseur)-- ;
                 if((*curseur)!=0)
                 {
                  switch ((*curseur))
                  {
                    case 1:
                       update_volume_surface(screen,effect,in_sound ,in_sound25,in_sound50,in_sound75,in_sound100,position_volume) ;
                       Mix_PlayChannel(1,effect,0);
                    break;
                    
                    case 2 :
                       update (screen ,&main_menu,&main_menu) ;
                       Mix_PlayChannel(1,effect,0);
                    break ;
                  case 3 :
                update_mode_surface(screen,effect,mode ,souris,clavier,manette,position_mode);
                       Mix_PlayChannel(1,effect,0);
                    break ;
                  case 4 :
                     update_joueur_surface(screen,effect,joueur , j1, j2,position_j);
                       Mix_PlayChannel(1,effect,0);
                    break ;

                  }//fin switch (*curseur)
                 }
                

                 
               } 
}
void update_volume_surface(SDL_Surface *screen,Mix_Chunk *effect,Objet in_sound ,Objet in_sound25,Objet in_sound50,Objet in_sound75,Objet in_sound100,int position_volume)
{
 switch (position_volume)
 {
   case 1:
     update (screen ,&in_sound,NULL) ;
     Mix_PlayChannel(1,effect,0);
     break;
 
   case 2:
     update (screen ,&in_sound25,NULL) ;
     Mix_PlayChannel(1,effect,0);
     break;
   case 3:
     update (screen ,&in_sound50,NULL) ;
     Mix_PlayChannel(1,effect,0);
     break;
   case 4:
     update (screen ,&in_sound75,NULL) ;
     Mix_PlayChannel(1,effect,0);
     break;
   case 5:
     update (screen ,&in_sound100,NULL) ;
     Mix_PlayChannel(1,effect,0);
     break;               
 }
}





void update_mode_surface(SDL_Surface *screen,Mix_Chunk *effect,Objet mode ,Objet souris,Objet clavier,Objet manette,int position_mode)
{
 switch (position_mode)
 {
   case 1:
     update (screen ,&mode,NULL) ;
     Mix_PlayChannel(1,effect,0);
     break;
 
   case 2:
     update (screen ,&souris,NULL) ;
     Mix_PlayChannel(1,effect,0);
     break;
   case 3:
     update (screen ,&clavier,NULL) ;
     Mix_PlayChannel(1,effect,0);
     break;
case 4:
     update (screen ,&manette,NULL) ;
     Mix_PlayChannel(1,effect,0);
     break;
               
 }
}

void update_joueur_surface(SDL_Surface *screen,Mix_Chunk *effect,Objet joueur ,Objet j1,Objet j2,int position_j)
{
 switch (position_j)
 {
   case 1:
     update (screen ,&joueur,NULL) ;
     Mix_PlayChannel(1,effect,0);
     break;
 
   case 2:
     update (screen ,&j1,NULL) ;
     Mix_PlayChannel(1,effect,0);
     break;

case 3:
     update (screen ,&j2,NULL) ;
     Mix_PlayChannel(1,effect,0);
     break;
                 
 }
}




void motion_souris_sousmenu (SDL_Surface *screen ,SDL_Event event , Mix_Chunk *effect,int *curseur,Objet in_sound,Objet in_sound25,Objet in_sound50,Objet in_sound75,Objet in_sound100,int position_volume,Objet icon,Objet credits,Objet main_menu, Objet j1 , Objet j2 ,Objet joueur , Objet mode, Objet souris , Objet clavier , Objet manette,int position_mode,int position_j)
{
           if(verif_motion_surface (event,in_sound)) 
            {
              if((*curseur)==1)
              return;
             *curseur=1 ;
              update_volume_surface(screen,effect,in_sound ,in_sound25,in_sound50,in_sound75,in_sound100,position_volume) ;
              Mix_PlayChannel(1,effect,0);              
            }
         
          if(verif_motion_surface (event,main_menu)) 
            {
              if((*curseur)==2)
              return;              
             *curseur=2 ;
              update (screen ,&main_menu,&main_menu) ;
              Mix_PlayChannel(1,effect,0);              
            }  
   if(verif_motion_surface (event,mode)) 
            {
              if((*curseur)==3)
              return;              
             *curseur=3 ;
              update_mode_surface(screen,effect,mode ,souris,clavier,manette,position_mode);
              Mix_PlayChannel(1,effect,0);              
            }  
if(verif_motion_surface (event,joueur)) 
            {
              if((*curseur)==4)
              return;              
             *curseur=4 ;
              update_joueur_surface(screen,effect,joueur ,j1, j2,position_j);
              Mix_PlayChannel(1,effect,0);              
            }  

                    
}
void clic_souris_sousmenu (SDL_Surface *screen,Objet *icon, SDL_Event event,int curseur,Objet in_sound,Objet credits, Objet main_menu,int *running2,Objet game,int *boolean_icon, Objet j1 , Objet j2 ,Objet joueur , Objet mode, Objet souris , Objet clavier , Objet manette)
{
             if (event.button.button == SDL_BUTTON_LEFT && (curseur)==1 )
           {
            if(verif_motion_surface (event,in_sound)) 
            {
                
            }               
           }
          
           else if (event.button.button == SDL_BUTTON_LEFT && (curseur)==2 )
           {
            if(verif_motion_surface (event,main_menu)) 
            {
              update(screen,&game,icon) ;
             *running2=0 ;
             
            }
                  
           }
else if (event.button.button == SDL_BUTTON_LEFT && (curseur)==3 )
           {
            if(verif_motion_surface (event,mode)) 
            {
                     
             
            }
             
           }
else if (event.button.button == SDL_BUTTON_LEFT && (curseur)==4)
           {
            if(verif_motion_surface (event,joueur)) 
            {
                     
             
            }
                
           }
 
}
void clic_entrer_sousmenu (SDL_Surface *screen,Objet icon, int *running2,int curseur,Objet game)
{
                switch ((curseur))
             {
               case 1:
               
               break;
               case 2:
               update(screen,&game,&icon) ;
               *running2=0 ;
               break;               
               case 3:
                             
               break; 

                      
             }
}
void deplacement_droit_gauche_volume (SDL_Surface *screen,Mix_Chunk *effect,Objet in_sound ,Objet in_sound25,Objet in_sound50,Objet in_sound75,Objet in_sound100,int *position_volume) 
{
  if ((*position_volume)<1)
      (*position_volume)=1 ;      

  else if ((*position_volume)>5) 
      (*position_volume)=5 ;
  else
  {
    update_volume_surface(screen,effect,in_sound ,in_sound25,in_sound50,in_sound75,in_sound100,*position_volume) ;
  }
          
}




void deplacement_droit_gauche_mode(SDL_Surface *screen,Mix_Chunk *effect,Objet mode ,Objet souris,Objet clavier,Objet manette,int *position_mode)
{

if ((*position_mode)<1)
      (*position_mode)=1 ;      

  else if ((*position_mode)>4) 
      (*position_mode)=4 ;
  else
  {
    update_mode_surface(screen,effect, mode ,souris, clavier, manette,*position_mode);
  }


}



void deplacement_droit_gauche_joueur(SDL_Surface *screen,Mix_Chunk *effect,Objet joueur ,Objet j1,Objet j2,int *position_j)
{

if ((*position_j)<1)
      (*position_j)=1 ;      

  else if ((*position_j)>3) 
      (*position_j)=3 ;
  else
  {
    update_joueur_surface(screen,effect,joueur ,j1,j2,*position_j);
  }


}







void deplacement_sous_menu (SDL_Surface *screen ,Mix_Chunk *effect,SDL_Event event , int *running2,Objet in_settings,Objet in_sound,Objet in_sound25,Objet in_sound50,Objet in_sound75,Objet in_sound100,int *position_volume,Objet credits,Objet main_menu,Objet *icon, int *running,int *curseur,int *firsttime,Objet game,int *boolean_icon, Objet j1 , Objet j2 ,Objet joueur , Objet mode, Objet souris , Objet clavier , Objet manette,int *position_mode,int *position_j)
{
   

   SDL_WaitEvent(&event);
    switch (event.type)
    {
      case SDL_QUIT:
      *running = 0;
      *running2=0 ;
      break ;
      case SDL_MOUSEBUTTONDOWN:
            clic_souris_sousmenu (screen,icon,event,*curseur,in_sound,credits,main_menu,running2,game,boolean_icon, j1 , j2 ,joueur , mode, souris ,clavier, manette)  ;                
      break;
      case SDL_MOUSEMOTION:
            motion_souris_sousmenu (screen ,event , effect,curseur,in_sound,in_sound25,in_sound50,in_sound75,in_sound100,*position_volume,*icon,credits,main_menu,j1 , j2 , joueur ,mode,  souris ,clavier , manette, *position_mode,*position_j) ;
      break;
      case SDL_KEYDOWN:
          switch (event.key.keysym.sym)
          {
           case SDLK_ESCAPE:
           *running2=0 ;
           update(screen,&game,icon) ;
           break ; 
           case SDLK_RETURN:
               clic_entrer_sousmenu (screen,*icon,running2,*curseur,game) ;
           break ;
           case SDLK_DOWN :
               deplacement__sousmenu_down (screen ,effect,curseur,in_sound,in_sound25,in_sound50,in_sound75,in_sound100,*position_volume,*icon,credits,main_menu , j1 , j2 , joueur ,  mode,  souris ,  clavier , manette, *position_mode, *position_j) ;
           break ;
           case SDLK_UP :
               deplacement__sousmenu_up (screen ,effect,curseur,in_sound,in_sound25,in_sound50,in_sound75,in_sound100,*position_volume,*icon,credits,main_menu,firsttime,j1 ,  j2 , joueur , mode,  souris , clavier ,  manette,*position_mode, *position_j) ;
           break ; 
           case SDLK_RIGHT :
           if((*curseur)==1)
             {
              (*position_volume)++ ;
             deplacement_droit_gauche_volume (screen,effect,in_sound ,in_sound25,in_sound50,in_sound75,in_sound100,position_volume);
             }
 if((*curseur)==3)
              {
             (*position_mode)++ ;
deplacement_droit_gauche_mode(screen,effect,mode , souris, clavier, manette, position_mode);
              }
 if((*curseur)==4)
{
            (*position_j)++ ;
deplacement_droit_gauche_joueur(screen,effect,joueur ,j1,j2, position_j);
}
           break ;
           case SDLK_LEFT :
if((*curseur)==1)
              {
              (*position_volume)--;
             deplacement_droit_gauche_volume (screen,effect,in_sound ,in_sound25,in_sound50,in_sound75,in_sound100,position_volume);
             }
 if((*curseur)==3)
              {
             (*position_mode)--;
deplacement_droit_gauche_mode(screen,effect,mode , souris, clavier, manette, position_mode);
              }
 if((*curseur)==4)
{
            (*position_j)-- ;
deplacement_droit_gauche_joueur(screen,effect,joueur ,j1,j2, position_j);
}
           break ;
     
          }//fin sswitch keydown
    }//fin switch 


}
void quitter_oui_non(SDL_Surface *screen ,SDL_Event event,int *running,int *running2,int *running3,Objet quitter,Objet icon,Objet wexit,Objet nwexit,int *test,int *test_s)
{
  
  SDL_WaitEvent(&event);
    switch (event.type)
    {
      case SDL_QUIT:
      *running = 0;
      *running2 = 0;
      *running3 = 0;
      break ;
      case SDL_MOUSEBUTTONDOWN:
      if (event.button.button == SDL_BUTTON_LEFT  )
      {
          if (verif_motion_surface(event,wexit))
           {
                   *running = 0;
                   *running3 = 0; 
              
           }  
           else if (verif_motion_surface(event,nwexit)) 
           {
                   update (screen,&quitter,&icon) ; 
                   *running3 = 0;        
           }
           
      }                 
      break;
      case SDL_MOUSEMOTION:
           if (verif_motion_surface(event,wexit))
           {
              update (screen,&wexit,&icon) ;
              (*test_s)=1 ;
              
           }
           else if (verif_motion_surface(event,nwexit)) 
           {
              update (screen,&nwexit,&icon) ;   
              (*test_s)=0 ;
           }
      break;
      case SDL_KEYDOWN:
          switch (event.key.keysym.sym)
          {
           case SDLK_ESCAPE:
           update(screen,&quitter,&icon) ;
           *running3=0 ;
           break ; 
           case SDLK_RETURN:
           if ((*test) % 2==0 || (*test_s)==1)
           {
                   *running = 0;
                   *running3 = 0; 
           }
              
             
           if ((*test) % 2!=0 || (*test_s)==0  )
           {
                   update (screen,&quitter,&icon) ; 
                   *running3 = 0;    
           }    
           
           break ;
           case SDLK_RIGHT :
               (*test )++ ;
               if ((*test) % 2==0)
                  update (screen,&wexit,&icon) ;
               else if ((*test) % 2!=0)
                  update (screen,&nwexit,&icon) ;   
                 
           break ;
           case SDLK_LEFT :
                (*test )++ ;
               if ((*test) % 2==0)
                  update (screen,&wexit,&icon) ;
               else if ((*test) % 2!=0)
                  update (screen,&nwexit,&icon) ;    
           break ;
     
          }//fin sswitch keydown
    }//fin switch 

}
