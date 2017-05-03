#ifndef __IO_H__
#define __IO_H__
#define SIZE 3

#ifdef __cplusplus
extern "C"
{
#endif

    extern void loadnumboard(int tablero[SIZE][SIZE]);
    extern char loadboard(char tablero[SIZE][SIZE]);
    extern char insertj1(char tablero[SIZE][SIZE], char letra);
    extern char insertj2(char tablero[SIZE][SIZE], char letra);
    extern bool oso(char letra);
    extern int puntos(int puntos1, int puntos2);
    extern int checkoso(char tablero[SIZE][SIZE], int chocolate);

#ifdef __cplusplus
}
#endif

#endif
