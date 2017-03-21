#include <stdio.h>
#include <stdlib.h>

struct TCoordenada{

    int x;
    int y;
};

int main(int argc, char *argv[]){

    struct TCoordenada a_pos;
    a_pos.x=0;
    a_pos.y=0;

    struct TCoordenada b_pos;
    b_pos.x=a_pos.x+2;
    b_pos.y=a_pos.y+2;

    return EXIT_SUCCESS;
    
}
