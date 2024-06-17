#include <stdio.h>
struct datos{
    char celular[15];
    char nombre[40];
    char apellido[40];
    char correo[40];
    char direccion[70];
    char cedula[20];
};
int main ()
{
    struct datos dat;

    //ingreso datos
    
    printf("Ingrese sus datos:\n");

    printf("Ingrese su nombre:\n");
    scanf("%s",&dat.nombre);
    printf("Ingrese su apellido:\n");
    scanf("%s",&dat.apellido);
    printf("Ingrese su numero de telefono:\n");
    scanf("%s",&dat.celular);
    printf("Ingrese su correo electronico:\n");
    scanf("%s",&dat.correo);
    printf("Ingrese su numero de cedula:\n");
    scanf("%s",&dat.cedula);
    printf("Ingrese su direccion:\n");
    scanf("%s",&dat.direccion);

    //despliego

    printf("Nombre: %s\n",dat.nombre);
    printf("Apellido: %s\n",dat.apellido);
    printf("Numero de telefono: %s\n",dat.celular);
    printf("Correo: %s\n",dat.correo);
    printf("Cedula: %s\n",dat.cedula);
    printf("Direccion: %s\n",dat.direccion);

return 0;
}