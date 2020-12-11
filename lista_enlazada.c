#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef char cadena[24];

typedef struct contagiado
{
    cadena rut;
    cadena nombre;
    int edad;
    int fechaDiagnostico;
    cadena region;
    struct contagiado *link;
}
nodo;

typedef nodo *enlace;  // esto se va a usar para añadir nodos
typedef enlace catastro[16];




int main(int argc, char const *argv[])
{

    
    enlace ptr = NULL;
    
    
    
    
    
    //   ---------------------------------------------------------------------------------
    int opc;   
    printf("\t\tCATASTRO NACIONAL COVID-19\n\n\nSeleccione del menu: \n\n1) Inicializar\n2) Agregar\n3) Eliminar\n4) Buscar\n5) Obtener\n6) Desplegar\n\n0) Salir\n\n");
    
    while (opc != -1)
    {
        printf(">");
        scanf("%d",&opc);
        switch (opc)
        {
            case 1:
                // void Inicializar(regiones);
                printf("Hecho! (1)");
                break;
            case 2:

                break;
            case 3:
                /* code */
                break;
            case 4:

                break;
            case 5:
                /* code */
                break;
            case 6:

                break;    
            case 0:
                printf("Cerrando sesion...");
                opc = -1;
                break;
            default:
                break;
        }    
    }
    
    return 0;
}

void Inicializar(catastro a)
{
    

}

void Agregar(enlace *ptr, cadena Rut, cadena Nombre, int Edad, int fecha, cadena Region)
{
    enlace nuevo;
    nuevo = (enlace)malloc(sizeof(nodo));
    strcpy(nuevo->rut, Rut);
    strcpy(nuevo->nombre, Nombre);
    nuevo->edad = Edad;
    nuevo->fechaDiagnostico = fecha;
    strcpy(nuevo->region, Region);
    nuevo->link = *ptr; // link = NULL (contenido del puntero ptr)
    *ptr = nuevo;       // nuevo es un puntero, ptr apunta a este nodo



}