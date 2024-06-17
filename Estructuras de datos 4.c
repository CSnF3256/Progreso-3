#include <stdio.h>

typedef struct direccion{
    char calle[40];
    int numerocasa;
    char ciudad[40];
    char parroquia[20];
}dir;

typedef struct direccion dir;

typedef struct usuario{
    char nombre[40];
    char apellido[40];
    struct direccion dir;
    char phone[15];
}user;

int main()
{
    user pablo={
        "Pablo",
        "Piccaso",
        {"Calle_P",6969, "UIO","Cumbayork"},
        "593-25465"
    };

    printf("Usuario: %s %s \n",pablo.nombre, pablo.apellido);
    printf("Usuario: %s %s \n",pablo.dir.calle, pablo.dir.numerocasa,pablo.phone);
    return 0;
}