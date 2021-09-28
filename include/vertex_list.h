#ifndef VERTEX_LIST_H
#define VERTEX_LIST_H

#include <memory>
#include "person.h"
#include "arc_list.h"

class vertex_list
{
    public:
        typedef struct vertex_node {
            std::shared_ptr<person> key;
            arc_list arcs;
            std::shared_ptr<vertex_node> next;
        } vertex_node;
        /** Default constructor */
        vertex_list();
        /** Default destructor */
        virtual ~vertex_list();
        bool empty() const;
        void clear();
        std::shared_ptr<vertex_node> find(const person&) const;
    private:
        std::shared_ptr<vertex_node> m_first; //!< Member variable "m_first"
};

#endif // VERTEX_LIST_H
