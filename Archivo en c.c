#include <stdio.h>
#include <stdlib.h>

// r abre el fichero para lectura
// w abre un fichero para escritura
// a abre un fichero para agregar datos al final del mismo
// + simbolo utiizado para abrir un fichero en modo de lectura y escritura
// b abrir un archivo de tipo binario
// t abrir un archivo de tipo texto

int main()
{   FILE * prt; //palabra clave file
    char archivo[] = "datos.txt";

//funcion fopen() es para abrir el archivo

    prt=fopen(archivo, "w"); //abrir, con la w creo un archivo // se le pone doble \\ para el path 
    if(prt==NULL){ //controlar que se pueda abrir
        printf("Error al abrir el archivo!! %s\n", archivo);
        return 1;
    }
    fclose(prt);
    return 0;

//funcion fclose() es para cerrar el archivo

}