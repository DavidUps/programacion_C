#ifndef __IO_H__
#define __IO_H__

#define N 30
#define F 4

#ifdef __cplusplus
extern "C"
{
#endif

    extern void saluda(char nombre[N]);
    extern void insertar(int num[F]);
    extern void imprime(int num[F], char adv_fal[F]);
    extern char comprobar(int num[F], int adv[F], char adv_fal[F]);

#ifdef __cplusplus
}
#endif

#endif
