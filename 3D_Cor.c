#include <stdio.h>
#include "3D_Cor.h"

void limpiarbuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

void leercoor(Cord3D *c)
{
    printf("x:");
    scanf("%d", &c->x);
    limpiarbuffer();
    printf("y:");
    scanf("%d", &c->y);
    limpiarbuffer();
    printf("z:");
    scanf("%d", &c->z);
    limpiarbuffer();
}
void mostrar_coo(Cord3D *c, int tam)
{

    printf("|");
    for (int i = 0; i < tam; i++)
    {
        printf("%d,", c[i].x);
        printf("%d,", c[i].y);
        printf("%d,", c[i].z);
    }
    printf("|");
}
/*
FILE* almacenar_archivo(Cord3D *c,int tam, int binario)
{
    FILE *archivo_3D;
    if (binario)
    {
        archivo_3D=fopen("cor3D.bin","ab");
        if (archivo_3D==NULL)
        {
            printf("Error al crear el archivo binario.\n");
            //para salir directamente del programa si no encuentra ningun archivo
            return;
        }
        //escribir todo el arreglo de estructuras directamente
        fwrite(c,sizeof(Cord3D),tam,archivo_3D);
    }

    else
    {
        archivo_3D = fopen("cor3D.txt","a");
        if (archivo_3D==NULL)
        {
            printf("Error al crear el archivo de texto.\n");
            return;
        }
        //recorrer el arreglo y escribir dato por dato
        for (int i=0;i<tam;i++)
        {
            printf(archivo_3D,"%d %d %d",c[i].x,c[i].y,c[i].z);
        }
    }
    //cerrar
    fclose(archivo_3D);
    printf("archivo guardado correctamente.\n");
}
*/