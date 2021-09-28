#include "social_network.h"

social_network::social_network()
{
    //ctor
}

social_network::~social_network()
{
    //dtor
}

/**

REQ: Requiere el nombre del archivo a cargar.
MOD: Crea una conexexion de grafos basado en el archivo de texto
EFE: N/A.

*/
void social_network::load_file(const std::string& filename)
{

}

/**

REQ: Requiere un puntero tipo persona.
MOD: Modifica la red social agregando a la persona.
EFE: N/A.

*/
void social_network::add(std::shared_ptr<person> p)
{
}

/**

REQ: Requiere dos personas, una fuente y otra destino.
MOD: N/A
EFE: Devuelve verdadero si hay una conexión entre ambas personas.

*/
bool social_network::is_friend(const person& first, const person& second) const
{
    return m_social_graph.isArc(first, second);
}
