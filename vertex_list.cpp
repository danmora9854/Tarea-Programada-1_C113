#include "vertex_list.h"

vertex_list::vertex_list()
{
    //ctor
}

vertex_list::~vertex_list()
{
    //dtor
}

/**

REQ: N/A
MOD: N/A
EFE: Devuelve verdadero si no hay elementos en la lista de vertices.

*/
bool vertex_list::empty() const
{
}

/**

REQ: N/A.
MOD: Modifica la lista de vertices.
EFE: Elimina los valores dentro de la lista de vertices.

*/
void vertex_list::clear()
{
}

/**

REQ: Una persona.
MOD: N/A
EFE: Devuelve el puntero que contenga a la persona solicitada.

*/
std::shared_ptr<vertex_list::vertex_node> vertex_list::find(const person&) const
{
}
