#include <stdio.h>

struct direccion{
    char calle[40];
    int casanumero;
    char ciudad[40];
    char parroquia[20];
};

struct user{
    char nombre[40];
    char apellido[40];
    struct direccion dir;
    char phone[15];
}; // se pone punto y coma para saber que es el ultimo valor de la estructura

int main()
{
 
  /* se lo puede poner asi al nombre
  typedef struct direccion dir; o con el user*/
 
    struct user pablo={
        "Pablo",
        "Piccaso",
        {"Calle_P", 6969, "UIO","Cumbayá"},
        "593-25465"
    };

    printf("Usuario: %s %s \n",pablo.nombre, pablo.apellido);
    printf("Usuario: %s %s \n",pablo.dir.calle, pablo.dir.casanumero,pablo.phone);
    return 0;
}