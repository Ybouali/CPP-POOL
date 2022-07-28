#include "./Cat.hpp"
#include "./Dog.hpp"

int main(void)
{
    const Animal *animals[10];

    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    std::cout << "______________________________________________________________________________________________" << std::endl << std::endl;
    for (int i = 0; i < 10; i++)
        animals[i]->makeSound();
    std::cout << "______________________________________________________________________________________________" << std::endl << std::endl;
    for (int i = 0; i < 10; i++)
        delete animals[i];
    return 0;
}
