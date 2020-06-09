#include "mvtperso.h"
#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"
#include "SDL/SDL_ttf.h"

void mouvement (personnage *c,int direction)
{
if(direction ==1)
{
c->position_perso.x +=4;
}
else if (direction ==0)
{
c->position_perso.x -=4;
}
