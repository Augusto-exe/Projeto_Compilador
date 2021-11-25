#/* Grupo C - Augusto Exenberger Becker e Vitória Lentz */
all:	
	bison -d parser.y
	flex scanner.l
	g++ -std=c++0x -c lex.yy.c parser.tab.c main.cpp 
	g++ -std=c++0x -o etapa7 ListaInst.cpp arvore.cpp common.cpp pilhaContexto.cpp  tabelaSimbolos.cpp lex.yy.o main.o parser.tab.o -lfl
clean:
	rm main.o lex.yy.o lex.yy.c etapa7 parser.tab.o parser.tab.c parser.tab.h 
