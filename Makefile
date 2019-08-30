.PHONY: all clean

OBJ	= build/src/tetris.o build/src/main.o
LINKOBJ	= build/src/tetis.o build/src/main.o
FLAG = -Wall -Werror
all : bin/tetris

clean:
	rm -rf $(BIN) build/src/*.o
bin/Tetris: %(OBJ)
	gcc -std=c99 $(LINKOBJ) -o bin/tetris
build/src/tetris.o:  src/tetris.c
	gcc $(FLAG) -std=c99 -c src/tetris.c -o build/src/tetris.o
build/src/make.o: src/make.c
	gcc $(FLAG)   -std=c99  -c src/main.c -o build/src/main.o 
