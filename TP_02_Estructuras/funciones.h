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

void hardcodeo(ePersona persona[],int Caux);
void asignarEstado (ePersona persona[],int C,int estado);
int validarMenu(eMenu opciones);
void altaPersona(ePersona persona[],int indice,int estado);
void bajaPersona (ePersona persona[],int C, int indice);
void listarPersonas(ePersona persona[],int);
int validarString(eValidar cadena);
int validarInt(eValidar cadena);



/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int buscarIndiceLibre (ePersona persona[],int C);


/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(ePersona lista[], char dni[], int C);

