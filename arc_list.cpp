#include "arc_list.h"
using namespace std;
arc_list::arc_list()
{
    item=nullptr;
    next=nullptr;
    m_first=nullptr;
}

arc_list::~arc_list()
{
    //dtor
}

/**

REQ: Requiere una persona.
MOD: N/A
EFE: Devuelve el puntero si se encuentra a la persona solicitada.

*/
shared_ptr<arc_list::arc_node> arc_list::find(const person& target) const
{

}

