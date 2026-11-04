#include <stdio.h>
#include <stdlib.h>
#include "3D_Cor.h"
#include "3D_Cor.c"

int main(){
//arreglo a estructuras
Cord3D *coordenadas=NULL;
int tam;
int i;
printf("cuantas coordenadas deseas guardar:");
scanf("%d",&tam);
    limpiarbuffer();
//reservar memoria de la estructura
coordenadas=malloc(tam*sizeof(Cord3D));
    if (coordenadas==NULL)
    {
        printf("No se reservo memoria");
    }
for(i=0;i<tam;i++){
    leercoor(coordenadas+i);

}

    mostrar_coo(coordenadas,tam);

    //liberar_memoria
    free(coordenadas);

}

