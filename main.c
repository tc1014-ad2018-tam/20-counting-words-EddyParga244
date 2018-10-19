/*
 * Este programa fue realizado como la tarea#20 el 17 de octubre de 2018,
 * para la clase de fundamentos de programación.
 *
 * Su proposito es contar el numero de palabras que hay en un string.
 *
 * Fecha: 17 de octubre de 2018
 * Autor: Eduardo Parga Vela
 * Correo: A01411896@itesm.mx
 */
 #include <stdio.h>

 //Funcion que cuenta las palabras
int cuentaPalabras(char cadena[]){
    int i=0;
    int j=0;
    int cont=0;

    //Mientras que cada caracter de la cadena sea diferente del caracter nulo(\0),
    //se aumenta el contador de palabras a 1 si el caracter es un espacio y prosigue al
    //siguiente caracter.
     while (cadena[i]!='\0'){
         if(cadena[i]==' '){
             ++cont;
         }
         ++i;
     }
     cont++;

    return cont;
}

int main() {
    //Definicion de variables
    char cadena[100];
    int cont;

    //Se le pide al usuario que escriba un texto
    printf("Escribe un texto: ");
    fgets(cadena, sizeof(cadena),stdin);
    cont=cuentaPalabras(cadena); //Cont se le asigna lo que llama la funcion cuentaPalabras
    printf("El total de caracteres de la cadena es %i", cont);
    return 0;
}