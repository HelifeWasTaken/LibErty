all:
	make -C ./lib --silent
	gcc main.c -L./lib -lerty -I./include -g3

expand:
	gcc -E -o expand main.c -L./lib -lerty -I./include -g3
