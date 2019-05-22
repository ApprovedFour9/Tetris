#include <stdio.h>
#include <stdlib.h>
#include <tetris.h>
#include <termios.h>
#include <signal.h>
#include <time.h>
#include <fcntl.h>



struct tetris {
	char **game;
	int w;
	int h;
	int gameover
	struct tetris_block {
		char data[5][5];
		int w;
		int h;
	} current;
	int x;
	int y;
};

struct tetris_block blocks[] =
{
    {{"##", 
         "##"},
    2, 2
    system("color E0");
    },
    {{" X ",
         "XXX"},
    3, 2
    system("color A2");
    },
    {{"@@@@"},
        4, 1},
    {{"OO",
         "O ",
         "O "},
    2, 3
    system("color B3");
    },
    {{"&&",
         " &",
         " &"},
    2, 3
    system("color F7");
    },
    {{"ZZ ",
         " ZZ"},
    3, 2
    system("color E6");}
};
