#include <stdio.h>

struct automovil{
    char marca[100];
    char modelo[100];
    char color[100];
    int year_model;
    int km;
};

int main()
{
    struct automovil *prt;
    struct automovil car1={"Audi","TT","Azul",2023};
    prt = &car1;
    printf("El mejor auto es: %s - y el modelo es: %s - el color es: %s\n", car1.marca, car1.modelo, car1.color);
    printf("El mejor auto es: %s - y el modelo es: %s - el color es: %s\n", prt->marca, prt->modelo, prt->color);
    return 0;
}