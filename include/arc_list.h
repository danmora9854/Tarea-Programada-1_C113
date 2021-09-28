#ifndef ARC_LIST_H
#define ARC_LIST_H

#include <memory>
#include "person.h"

class arc_list
{
    public:
        typedef struct arc_node {
            std::shared_ptr<person> item;
            std::shared_ptr<arc_node> next;
        } arc_node;
        /** Default constructor */
        arc_list();
        /** Default destructor */
        virtual ~arc_list();
        std::shared_ptr<arc_node> find(const person&) const;
    private:
        std::shared_ptr<arc_node> m_first; //!< Member variable "m_first"
};

#endif // ARC_LIST_H
