#include <iostream>
#include <memory>
#include <locale>
#include <windows.h>
#include "social_network.h"
#include "person.h"

using namespace std;

int getOption();

enum OPTIONS { OPEN = 1, ADD_PERSON, DELETE_PERSON, ADD_RELATION, DELETE_RELATION, QUERIES, SAVE, END };

int main()
{
    // asigna el código de caracteres UTF-8 a la consola y guarda el anterior
    // se hace únicamente para poder tener tildes en la impresión
    UINT oldcodepage = GetConsoleOutputCP();
    SetConsoleOutputCP(CP_UTF8);

    social_network sn; // red social

    int option; // almacena la opción del usuario

    // permite al usuario especificar una acción
    while ( ( option = getOption() ) != END )
    {
        switch ( option )
        {
        case OPEN: // abre la base de datos
            {
            sn.load_file("social_network.dat");
            break;
            }
        case ADD_PERSON: // agrega persona
            {
            std::shared_ptr<person> p {new person};
            sn.add(p);
            break;
            }
        case DELETE_PERSON: //
            {
            break;
            }
        case ADD_RELATION: //
            {
            break;
            }
        case DELETE_RELATION: //
            {
            break;
            }
        case QUERIES: //
            {
            break;
            }
        case SAVE: //
            {
            break;
            }
        default: // muestra un error si el usuario no selecciona una opción válida
            {
            wcerr << "Opción incorrecta." << endl;
            break;
            }
        } // fin de switch
    }

    // asigna el código de caracteres guardado para restaurar la consola
    SetConsoleOutputCP(oldcodepage);
    return 0;
}

/**

REQ: N/A
MOD: N/A
EFE: Permite al usuario introducir la opción del menú. Devuelve la opción.

*/
int getOption()
{
    // muestra las opciones disponibles
    wcout << "\nEscriba su opción" << endl
          << "1 - cargar base de datos" << endl
          << "2 - agregar persona" << endl
          << "3 - eliminar persona" << endl
          << "4 - agregar relación" << endl
          << "5 - eliminar relación" << endl
          << "6 - consultas" << endl
          << "6 - guardar base de datos" << endl
          << "8 - fin del programa\n? ";

    int option;
    cin >> option; // introduce la selección del menú que hizo el usuario
    return option;
} // fin de la función getOption
