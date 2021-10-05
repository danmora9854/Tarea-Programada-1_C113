#include "graph.h"

/**

REQ: Requiere dos personas, una fuente y otra destino.
MOD: N/A
EFE: Devuelve verdadero si hay una conexión entre ambas personas.

*/
bool graph::isArc( const person & src , const person & dst ) const
{
    // Pimero se revisa si la persona fuente está en a lista de vértices.
    std::shared_ptr<vertex_list::vertex_node> src_node = m_vertex_list.find(src);
    if (!src_node) return false;

    // Si la persona fuente está en la lista de vértices se revisa si hay un
    // arco entre la persona fuente y la destino.
    std::shared_ptr<arc_list::arc_node> dst_node = src_node->arcs.find(dst);
    if (!dst_node) return false;

    return true;
}

    bool empty() const ///< Retorna \c "true" si el contenedor est� vac�o
    { 
        return m_vertex_list.empty(); 
    } 


    graph& operator=(const graph& other)  ///< Copia <code>*this = G</code>
    { 
        m_vertex_list = other.m_vertex_list; 
        return *this; 
        }
    
    
    void clear() { m_vertex_list.clear(); } ///< Deja al grafo vac�o

    bool isVertex( const person & vtx ) const;
    void set( const person & vtx );
    void set( const person & src , const person & dst );
    void vertexList( vertex_list & aList ) const;
    void vertexList( person vtx , vertex_list & aList ) const;
    vertex_list m_vertex_list; //!< Member variable "m_vertex_list"
