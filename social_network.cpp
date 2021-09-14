#include "social_network.h"

social_network::social_network()
{
    //ctor
}

social_network::~social_network()
{
    //dtor
}

void social_network::load_file(const std::string& filename)
{

}

void social_network::add(std::shared_ptr<person> p)
{
}

bool social_network::is_friend(const person& first, const person& second) const
{
    return m_social_graph.isArc(first, second);
}
