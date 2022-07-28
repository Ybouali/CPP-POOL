#include "./Cat.hpp"
#include "./Dog.hpp"
#include "./WrongCat.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << "-----------------------------------------------------------------------------" << std::endl << std::endl;
    std::cout << j->getType() << " " << std::endl << std::endl;
    std::cout << i->getType() << " " << std::endl << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
    delete j;
    const Animal* p = new WrongCat();

    std::cout << "-----------------------------------------------------------------------------" << std::endl << std::endl;
    std::cout << p->getType() << " " << std::endl << std::endl;
    p->makeSound();

    delete p;

    return 0;
}
