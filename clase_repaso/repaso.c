#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "repaso.h"

int getPrice(char* msg, float* pPrecio)
{
    char ingreso[50];
    float auxPrecio;
    int ret = 0;

    printf(msg);
    scanf("%s",ingreso);
    auxPrecio = atof(ingreso);
    if(auxPrecio > 0)
    {
        *pPrecio = auxPrecio;
        ret = 1;
    }

    return ret;
}

int getCode(char* msg, char* pCode)
{
    char ingreso[50];
    int ret = 0;
    printf(msg);
    scanf("%s",ingreso);
    if(strlen(ingreso) == 6);
    {
        strncpy(pCode,ingreso,7);
        ret = 1;
    }

    return ret;
}
