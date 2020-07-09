#include<iostream>
#include<string>

class Actor
{
public:
    Actor(std::string name);
    std::string get_name();
    void set_name(std::string name);
private:
    std::string m_name;
};

Actor::Actor(std::string name) : m_name(name)
{ 
}

void Actor::set_name(std::string name)
{
    m_name = name;
}

std::string Actor::get_name()
{
    return m_name;
}

int main()
{
    Actor *actor  = new Actor("Fred");
    Actor *actor2  = actor;
    
    actor2->set_name("Barney");
    std::cout << actor->get_name() << std::endl;

    return 0;

}









