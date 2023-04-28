all:
	make -C ./lib --silent
	gcc main.c -o test -L./lib -lerty -I./include -g3
