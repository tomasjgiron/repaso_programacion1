#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "repaso.h"
#define LEN 3

typedef struct
{
    float precio;
    char codigo[7];
}eProducto;

int main()
{

    eProducto arrayProducto[LEN];
    //float precios[LEN];
    //char codigos[LEN][7];

    int i;
    int j;

    for(j=0;j<LEN;j++)
    {
        while(getPrice("Ingrese el precio\n",&arrayProducto[j].precio) == 0)
        {
            printf("error\n");
        }

        while(getCode("Ingrese el codigo\n",arrayProducto[j].codigo) == 0)
        {
            printf("error\n");
        }

    }

    for(i=0;i<LEN-1;i++)
    {
        for(j=i+1;j<LEN;j++)
        {
            if(arrayProducto[i].precio<arrayProducto[j].precio) /// ordenamiento descendente. Para ascendente cambiar signo
            {
                eProducto auxP = arrayProducto[i];
                arrayProducto[i] = arrayProducto[j];
                arrayProducto[j] = auxP;

                /*char auxC[7];
                strcpy(auxC,codigos[i]);
                strcpy(codigos[i],codigos[j]);
                strcpy(codigos[j],auxC);*/
            }
        }

    }
    printf("---------------------------------");
    printf("\n- \tOrdenamiento precio\t-");
    printf("\n-\t\t\t\t-\n");
    printf("---------------------------------\n");

    for(i=0;i<LEN;i++)
    {
        printf("precio: %.2f\n codigo: %s\n ",arrayProducto[i].precio,arrayProducto[i].codigo);
    }
    printf("de array a estructura\n");


    return 0;
}
