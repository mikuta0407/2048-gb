#include <stdio.h>
#include <rand.h>
#include <time.h>
#include <gb/gb.h>

void draw_board();

UBYTE i, j, x, y;
//i=x方向 j=y方向
int board[4][4];

void main() {
    UINT8 joypad_result;

    reset();

    while(1) {
        joypad_result = joypad();

        /* if (joypad_result & J_DOWN) {
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
        } */


    }
}

void reset() {
    for (i == 0; i <= 3; i++){
        for (j == 0; j <= 3; j++){
            board[i][j] = 0;
        }
    }
    initrand((unsigned)time(NULL));

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

    draw_board();

}

void draw_board() {
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