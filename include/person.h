#ifndef PERSON_H
#define PERSON_H

#include <string>

class person
{
    public:
        /** Default constructor */
        person();
        /** Default destructor */
        virtual ~person();
    private:
        std::string m_nickname; //!< Member variable "m_nickname"
        std::string m_fullname; //!< Member variable "m_fullname"
        unsigned int m_age; //!< Member variable "m_age"
        bool m_sex; //!< Member variable "m_sex"
        std::string m_hobbies[10]; //!< Member variable "m_hobbies"
};

#endif // PERSON_H
