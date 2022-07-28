#ifndef CAT_HPP
#define CAT_HPP

#include "./Animal.hpp"
#include "./Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *myBrain;
    public:
        Cat(void);
        ~Cat();
        Cat& operator=(const Cat& other);
        Cat(const Cat & other);

        void    makeSound(void) const;
};

#endif