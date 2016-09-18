typedef struct {

    char menu[500];
    char error[100];
    int desde;
    int hasta;

}eMenu;


typedef struct {

    char buffer[4000];
    int minimo;
    int maximo;

}eValidar;


typedef struct {

    char nombre[50];
    int edad;
    char dni[20];
    int estado;

}ePersona;

int validarMenu(eMenu opciones);
void altaPersona(ePersona persona[],int);
int validarString(eValidar cadena);
int validarInt(eValidar cadena);
/*


/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */

 /*
int obtenerEspacioLibre(EPersona lista[]);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */

/*
int buscarPorDni(EPersona lista[], int dni);

#endif // FUNCIONES_H_INCLUDED
*/
