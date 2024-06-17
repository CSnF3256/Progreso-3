#include <stdio.h>

struct automovil{
    char marca[100];
    char modelo[100];
    char color[100];
    int year_model;
    int km;
};

/*
Otra forma de llamar
    struct automovil{
    char marca[100];
    char modelo[100];
    char color[100];
    int year_model;
    int km;
}auto;
*/


int main()
{
    struct automovil auto1={"KIA","GrandCarnival","Azul",2023};
    //prt = &auto1;
    printf("El mejor auto es: %s - y el modelo es: %s - el color es: %s", auto1.marca, auto1.modelo, auto1.color);
    return 0;
}