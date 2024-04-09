#include <stdio.h>
#include <stdlib.h>

struct{
        int velocidad;
        int anio;
        int cantidad;
        char *tipo_cpu;
    } typedef compu;

void mostrarLista(compu l[]);
void mostrarPcMasVieja(compu l[]);
void mostrarPcMasRapida(compu l[]);

int main(){

    char tipos[5][10] = {"AMD", "Celeron", "Athlon", "Core", "Pentium"};

    compu misComputadoras[5] = {
        {1, 2017, 2, tipos[rand() % 5]},
        {2, 2020, 5, tipos[rand() % 5]},
        {3, 2016, 7, tipos[rand() % 5]},
        {2, 2023, 4, tipos[rand() % 5]},
        {1, 2022, 8, tipos[rand() % 5]}
    };

    mostrarLista(misComputadoras);

    mostrarPcMasVieja(misComputadoras);

    mostrarPcMasRapida(misComputadoras);

}

void mostrarLista(compu l[]){

    for(int i = 0; i < 5; i++){

        printf("\nDatos de Computadora %d",  i + 1);
        printf("\nVelocidad: %d GHz", l[i].velocidad);
        printf("\nAnio: %d", l[i].anio);
        printf("\nCantidad: %d", l[i].cantidad);
        printf("\nTipo de CPU: %s\n", l[i].tipo_cpu);

    }

}

void mostrarPcMasVieja(compu l[]){

    int menor = 2023;

    for(int i = 0; i < 5; i++){
        if(l[i].anio < menor){
            menor = l[i].anio;
        }
    }

    for(int i = 0; i < 5; i++){
        if(l[i].anio == menor){
            printf("\nDatos de Computadora Mas Vieja");
            printf("\nVelocidad: %d GHz", l[i].velocidad);
            printf("\nAnio: %d", l[i].anio);
            printf("\nCantidad: %d", l[i].cantidad);
            printf("\nTipo de CPU: %s\n", l[i].tipo_cpu);
        }
    }
}

void mostrarPcMasRapida(compu l[]){

    int mayor = 0;

    for(int i = 0; i < 5; i++){
        if(l[i].velocidad > mayor){
            mayor = l[i].velocidad;
        }
    }

    for(int i = 0; i < 5; i++){
        if(l[i].velocidad == mayor){
            printf("\nDatos de Computadora Mas Rapida");
            printf("\nVelocidad: %d GHz", l[i].velocidad);
            printf("\nAnio: %d", l[i].anio);
            printf("\nCantidad: %d", l[i].cantidad);
            printf("\nTipo de CPU: %s\n", l[i].tipo_cpu);
        }
    }

}

 