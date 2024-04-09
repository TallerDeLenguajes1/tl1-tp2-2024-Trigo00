#include <stdio.h>

int main(){

    struct{
        int velocidad;
        int anio;
        int cantidad;
        char *tipo_cpu;
    } typedef compu;

    compu misComputadoras[5];


    for(int i = 0; i < 5; i++){

    printf("Ingrese los datos de la computadora %d\n", i);
        
    do
    {
        printf("Velocidad: ");
        fflush(stdin);
        scanf("%d", misComputadoras[i].velocidad);
    } while (misComputadoras[i].velocidad < 1 && misComputadoras[i].velocidad > 3);
    
    
    do
    {
        printf("Anio: ");
        fflush(stdin);
        scanf("%d", misComputadoras[i].anio);
    } while (misComputadoras[i].anio < 2015 && misComputadoras[i].anio > 2023);
    

    do
    {
        printf("Cantidad: ");
        fflush(stdin);
        scanf("%d", misComputadoras[i].cantidad);
    } while (misComputadoras[i].cantidad < 1 && misComputadoras[i].cantidad > 8);

    
    

    printf("Tipo de CPU: ");
    fflush(stdin);

    }

}

 