#include <stdio.h>

struct direccion{
    char calle[40];
    int numerocasa;
    char ciudad[40];
    char parroquia[20];
}dir;

struct direccion dir;

struct usuario{
    char nombre[40];
    char apellido[40];
    struct direccion dir;
    char phone[15];
};//user

int main()
{
    int i;
    struct usuario user[2];
    for(i=0;i<2;i++){
        scanf("%s",user[i].nombre);
        scanf("%s",&user[i].dir);
    }


    return 0;
}