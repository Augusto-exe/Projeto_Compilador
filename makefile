all:	
	flex scanner.l
	gcc -c lex.yy.c -Wno-all	
	gcc -c main.c -Wno-all
	gcc main.o lex.yy.o -o etapa1 -lfl -Wno-all
