#ifndef CAT_HPP
#define CAT_HPP

#include "./AAnimal.hpp"

class Cat : public AAnimal
{
    private:
        Brain *myBrain;
    public:
        Cat(void);
        ~Cat();
        Cat& operator=(const Cat& other);
        Cat(const Cat & other);

        virtual void makeSound() const;
        virtual Brain *getBrain( void ) const;
};

#endif