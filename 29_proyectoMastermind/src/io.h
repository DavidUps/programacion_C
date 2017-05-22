#ifndef __IO_H__
#define __IO_H__
#define F 4
#define C 10

#ifdef __cplusplus
extern "C"
{
#endif

    extern void pintarTableros(char tablero[F][C], char colorposicion[2][C], char adivinar[C]);
    extern char datosAdivinar(char adivinar[C]);
    extern char datosTablero(char tablero[F][C]);
    extern char comprobarCP(char tablero[F][C], char colorposicion[2][C], char adivinar[C]);
    extern bool comprobarWhile(bool comprobar);

#ifdef __cplusplus
}
#endif

#endif
