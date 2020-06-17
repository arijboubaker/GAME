prog:main.o boundingbox.o
	gcc main.o boundingbox.o -o prog -lSDL -lSDL_ttf -lSDL_image -lSDL_mixer -g
main.o:main.c
	gcc -c main.c -g
boundingbox.o:boundingbox.c
	gcc -c boundingbox.c -g


