#include <stdio.h>
#include <stdlib.h>

int i = 17;
char c = '$';
char * s = "Hola";
char * formato = "cadena de formato %i, %c, %s\n";

int main(int argc, char *argv[]){
    printf(formato, i, c, s);
}


