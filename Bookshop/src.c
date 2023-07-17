//**************************************************************************************************************//
//                                                                                                              //
//                                            BIENVENIDO A LA LIBRERIA EN C                                     //
//                                                                                                              //
//**************************************************************************************************************//

#include <stdio.h>

// Enum

// Structs

int main()
{
    // Variables
    int opc;
    // Start
    puts("Bienvenido a la Tienda de libros en C !\n\n");
    puts("Ingrese una opcion:\n");
    scanf("%d", &opc);
    while (opc != 0)
    {
            puts("Ingreso un uno:\n");
            puts("Ingrese otro valor:\n");
            scanf("%d", &opc);
    }
    return 0;
}