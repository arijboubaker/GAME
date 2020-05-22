testimage:menu.o main.o
	gcc menu.o main.o -o testimage -lSDL -lSDL_ttf -lSDL_image -lSDL_mixer -g
main.o:main.c
	gcc -c main.c -g
menu.o:menu.c
	gcc -c menu.c -g

