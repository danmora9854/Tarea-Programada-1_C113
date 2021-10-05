#include "person.h"

using namespace std;
person::person()
{
    m_nickname="null";
    m_fullname="null";
    m_age=0;
    m_sex=false;

}

person::~person()
{
}

void set_m_nickname(string apodo)//!< Member variable "m_nickname"
{
    m_nickname=apodo;
}
void set_m_fullname(string nombre)//!< Member variable "m_fullname"
{
    m_fullname=nombre;
}
void set_m_age(unsigned int edad)//!< Member variable "m_age"
{
    m_age=edad;
}
void set_m_sex(bool sexo)//!< Member variable "m_sex"
{
    m_sex=sexo;
}
void set_m_hobbies(string hobby[])//!< Member variable "m_hobbies"
{
    m_hobbies=hobby;
}
void set_m_hobbies(string hobby)//!< Member variable "m_hobbies"
{
    int iter=0;
    bool asignado=false;
    while (iter<10 && asignado!=true){
        if(m_hobbies[iter]=="null"){
            m_hobbies[iter]=hobby;
            asignado=true;
        }
        iter++;
    }
}

string get_m_nickname()//!< Member variable "m_nickname"
{
    return m_nickname;
}
string get_m_fullname()//!< Member variable "m_fullname"
{
    return m_fullname;
}
unsigned int get_m_age()//!< Member variable "m_age"
{
    return m_age;
}
bool get_m_sex()//!< Member variable "m_sex"
{
    return m_sex;
}
string get_m_hobbies()//!< Member variable "m_hobbies"
{
    return m_hobbies[];
}
