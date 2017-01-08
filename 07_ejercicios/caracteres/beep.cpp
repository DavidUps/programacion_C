#include <stdio.h>
#include <stdlib.h>

int main(){

    char beep[3] = (54, 54, 0);
    for(int a=0;a<100; a++)
        if(beep[a] == beep[3])
           System.Media.SystemSounds.Beep.Play(1000);
        else
            printf("heee");
    return EXIT_SUCCESS;
}
