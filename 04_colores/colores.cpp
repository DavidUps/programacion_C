#include <stdio.h>
#include <stdlib.h>

#define ROJO 1
#define AZUL 2
#define AMAR 3
#define BLAN 4

int main(){

   int opcion, color, rojo, azul, amarillo, blanco;

   system("clear");
   system("toilet --gay ¿Qué color ves?");

   printf("\n\n"
           "1.-rojo\n"
           "2.-azul\n"
           "3.-amarillo\n"
           "4.-ninguno\n"
           "\n\t Color: "
           );

   scanf(" %i", &opcion);

   switch(opcion) {
       case ROJO: system("clear");
                  system("toilet --gay ¿Qué color ves?");

                  printf("\n\n"
                         "1.-si\n"
                         "2.-no\n"
                  );
                  printf("\t ¿Ves el color amarillo?: ");
                  scanf(" %i", &color);
                  if(color == 1){
                          printf("\n1.- si"
                                 "\n2.- no"
                                 "\n \t ¿ves el color azul?: ");
                          scanf(" %i", &color);

                      if(color == 1)
                          printf("tu color es el negro\n");
                      else
                          printf("tu color es el naranja\n");
                      return 0;
                  }
                  else
                      printf("\n1.- si"
                             "\n2.- no");
                      printf("\n \t ¿Ves el color azul?: ");
                      scanf(" %i", &color);
                      if(color == 1)
                          printf("Tu color es el morado\n");
                      else
                          printf("Tu color es el rojo\n");

           break;
       case AZUL: system("clear");
                  system("toilet --gay ¿Qué color ves?");

                  printf("\n\n"
                         "1.-si\n"
                         "2.-no\n"
                  );
                  printf("\t ¿Ves el color rojo?: ");
                  scanf(" %i", &color);
                  if(color == 1){
                          printf("\n1.- si"
                                 "\n2.- no"
                                 "\n \t ¿ves el color amarillo?: ");
                          scanf(" %i", &color);

                      if(color == 1)
                          printf("tu color es el negro\n");
                      else
                          printf("tu color es el morado\n");

                      return 0;
                  }
                  else
                      printf("\n1.- si"
                             "\n2.- no");
                      printf("\n \t ¿Ves el color amarillo?: ");
                      scanf(" %i", &color);
                      if(color == 1)
                          printf("Tu color es el verde\n");
                      else
                          printf("Tu color es el azul\n");

           break;
       case AMAR: system("clear");
                  system("toilet --gay ¿Qué color ves?");

                  printf("\n\n"
                         "1.-si\n"
                         "2.-no\n"
                  );
                  printf("\t ¿Ves el color azul?: ");
                  scanf(" %i", &color);
                  if(color == 1){
                          printf("\n1.- si"
                                 "\n2.- no"
                                 "\n \t ¿ves el color rojo?: ");
                          scanf(" %i", &color);

                      if(color == 1)
                          printf("tu color es el negro\n");
                      else
                          printf("tu color es el verde\n");
                      return 0;
                  }
                  else
                      printf("\n1.- si"
                             "\n2.- no");
                      printf("\n \t ¿Ves el color rojo?: ");
                      scanf(" %i", &color);
                      if(color == 1)
                          printf("Tu color es el naranja\n");
                      else
                          printf("Tu color es el amarillo\n");

           break;

       case BLAN: system("clear");
                  system("toilet --gay ¿Qué color ves?");

                  printf("Tu color es el blanco\n");

                  break;


   }
    return EXIT_SUCCESS;
}
