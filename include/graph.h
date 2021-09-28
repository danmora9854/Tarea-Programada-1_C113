#ifndef GRAPH_H
#define GRAPH_H

#include "vertex_list.h"
#include "person.h"

class graph
{
    public:
        /** Constructor por omisión */
        graph() : m_vertex_list() {}
        /** Destructor */
        ~graph() {}
        /** Constructor por copia
         *  \param other Objeto del cual copiar
         */
        graph(const vertex_list& other) : m_vertex_list() { *this = other; }

        bool empty() const { return m_vertex_list.empty(); } ///< Retorna \c "true" si el contenedor está vacío
        graph& operator=(const graph& other) { m_vertex_list = other.m_vertex_list; return *this; } ///< Copia <code>*this = G</code>
        void clear() { m_vertex_list.clear(); } ///< Deja al grafo vacío

        bool isVertex( const person & vtx ) const;
        bool isArc( const person & src , const person & dst ) const;
        void set( const person & vtx );
        void set( const person & src , const person & dst );
        void vertexList( vertex_list & aList ) const;
        void vertexList( person vtx , vertex_list & aList ) const;
    private:
        vertex_list m_vertex_list; //!< Member variable "m_vertex_list"
};

#endif // GRAPH_H
