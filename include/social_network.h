#ifndef SOCIAL_NETWORK_H
#define SOCIAL_NETWORK_H

#include <memory>
#include <string>
#include "graph.h"

class social_network
{
    public:
        /** Default constructor */
        social_network();
        /** Default destructor */
        virtual ~social_network();
        void load_file(const std::string&);
        void add(std::shared_ptr<person>);
        bool has(const person&) const;
        bool has(const std::string) const;
        bool is_friend(const person&, const person&) const;
        bool is_friend(const std::string, const std::string) const;
    private:
        graph m_social_graph; //!< Member variable "m_social_graph"
};

#endif // SOCIAL_NETWORK_H
