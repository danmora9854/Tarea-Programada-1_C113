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


void set_item(std::shared_ptr<person> nuevo_item){
    item=nuevo_item;
}
void set_next(std::shared_ptr<arc_node> siguiente){
    next=siguiente;
}
std::shared_ptr<arc_node> get_next(){
    return next;
}
std::shared_ptr<person> get_item(){
    return item;
}


/**

REQ: Requiere una persona.
MOD: N/A
EFE: Devuelve el puntero si se encuentra a la persona solicitada.

*/
shared_ptr<arc_list::arc_node> arc_list::find(const person& target) const
{
    bool encontrado=false;
    shared_ptr<arc_list::arc_node> iterador=next;
    while(iterador!=nullptr&&!encontrado){
        if(iterador->m_nickname=target){
                encontrado=true;
                return iterador;
        }else{
            iterador=iterador->get_next();
        }
    }
}