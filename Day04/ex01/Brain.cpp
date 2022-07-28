#include "./Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain  Default constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "I wanna eat ..........";
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    return *this;
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = other;
}
