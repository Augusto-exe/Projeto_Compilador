#/* Grupo C - Augusto Exenberger Becker e Vitória Lentz */
all:	
	bison -d parser.y
	flex scanner.l
	gcc -c lex.yy.c parser.tab.c main.c
	gcc -c lex.yy.c parser.tab.c main.c
	gcc -o etapa4 arvore.c common.c lex.yy.o main.o parser.tab.o -lfl
clean:
	rm main.o lex.yy.o lex.yy.c etapa4 parser.tab.o parser.tab.c parser.tab.h 
