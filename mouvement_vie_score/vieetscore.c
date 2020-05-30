#include "perso.h"
#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"
#include "SDL/SDL_ttf.h"

void update_score (personnage *p)
{ 
p->score_perso.score_atteint += 5 ;
}

void update_vie(personnage *p)
{
p->vie_perso.nbredevie-- ;
}
