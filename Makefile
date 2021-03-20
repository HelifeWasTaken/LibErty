all:
	make -C ./lib --silent
	gcc astar.c -L./lib -lerty -I./include -g3

expand:
	gcc -E -o expand astar.c -L./lib -lerty -I./include -g3
