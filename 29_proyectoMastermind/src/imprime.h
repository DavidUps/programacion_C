#ifndef __IO_H__
#define __IO_H__

#define N 30
#define F 4

#ifdef __cplusplus
extern "C"
{
#endif

    void saluda(char nombre[]);
    void insertar(char num[]);
    void imprime(char num[], char adv_fal[]);
    void comprobar(char num[], char adv[], char adv_fal[]);

#ifdef __cplusplus
}
#endif

#endif
