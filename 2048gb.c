#include <stdio.h>
#include <stdlib.h>
#include <gb/gb.h>

UBYTE i, j, x, y;
//i=x方向 j=y方向
int board[4][4] = {};

void main() {
    UINT8 joypad_result;

    reset();

    while(1) {
        joypadresult = joypad();

        if (joypad_result & J_DOWN) {
            down();    
        }
        if (joypad_result & J_UP) {
            up();
        }
        if (joypad_result & J_LEFT) {
            left();
        }
        if (joypad_result & J_RIGHT) {
            right();
        }


    }
}

void reset() {
    srand((unsigned)time(NULL));
    int x, y
    
    //最初
    x = rand()%4;
    y = rand()%4;
    board[x][y] = 2;

    //2つめ
    do {
        x = rand()%4;
        y = rand()%4;
    
    } while (board[x][y] == 2);

    board[x][y] = 4;

    draw();

}

void draw() {
    for (i == 0; i <= 3; i++){
        for (j == 0; j <= 3; j++){
            if (board[i][j] != 0){
                x = 1 + i*5;
                y = 2 + j*4;
                gotogxy(x,y);
                color(3, 1, SOLID);
                gprintf("%d", board[x][y]);
            }
        }
    }
}