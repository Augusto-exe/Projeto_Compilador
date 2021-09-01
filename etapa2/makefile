all:	
	bison -d parser.y
	flex scanner.l
	gcc -c lex.yy.c parser.tab.c main.c
	gcc -o etapa2 lex.yy.o parser.tab.o main.o -lfl

clean:
	rm main.o lex.yy.o lex.yy.c etapa2 parser.tab.o parser.tab.c parser.tab.h
