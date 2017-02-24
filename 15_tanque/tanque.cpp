#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <curses.h>

#define DELTA .1

#define XC 20
#define YC 20
#define XC2 40
#define YC2 40

struct TCoordenada {
    double x;
    double y;
};

int main(int argc, char *argv[]){
    double t =   0.;
    struct TCoordenada a = {  0., -10. },
                       v = {  5.,  10. },
                       s = {  0.,   0. };
    struct TCoordenada a2 = {  0., -10. },
                       v2 = {  5.,  10. },
                       s2 = {  0.,   0. };


    printf("Tanque 1.-\n");
    printf("Velocidad X: ");
    scanf(" %lf", &v.x);
    printf("\nVelocidad Y: ");
    scanf(" %lf", &v.y);
    printf("Tanque 2.-\n");
    printf("Velocidad2 X: ");
    scanf(" %lf", &v2.x);
    printf("\nVelocidad2 Y: ");
    scanf(" %lf", &v2.y);

    initscr();
    curs_set(1);
    clear();

    /* Pasen los años */
    for (t=0.; s.y>=0.; t+= DELTA){

        /* actualizar la fisica */
        v.y += a.y * DELTA;
        s.y += v.y * DELTA;

        v.x += a.x * DELTA;
        s.x += v.x * DELTA;

        v2.y += a2.y * DELTA;
        s2.y += v2.y * DELTA;

        v2.x += a2.x * DELTA;
        s2.x += v2.x * DELTA;

        /* Representar */
        mvprintw(YC-s.y, XC+s.x, "(^.^)");
        mvprintw(YC2-s2.y, XC2+s2.x, "(-.-)");
        refresh();
        usleep(100000);

    }

    usleep(2000000);
    curs_set(1);
    endwin();

    return EXIT_SUCCESS;
}
