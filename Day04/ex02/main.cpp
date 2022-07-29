#include "Cat.hpp"
#include "Dog.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"

#define NUMBER_OF_ANIMALS 10

int	main( void )
{
	AAnimal	*animals[NUMBER_OF_ANIMALS];
	Brain	*brain;
	/* AAnimal *bonjour = new AAnimal(); */
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		if (i < NUMBER_OF_ANIMALS / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
	}
	brain = animals[7]->getBrain();
	brain->ideas[0] = "I'm hungry";
	brain->ideas[1] = "I need fooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooood";
	brain->ideas[2] = "Ahhhh there is food in the restaurant";
	brain->ideas[3] = "I will be waiting for someone to give me some food";
	
    std::cout << animals[7]->getBrain()->ideas[0] << std::endl;
	
    animals[3]->makeSound();
	animals[6]->makeSound();

	std::cout << "Type: " << animals[2]->getType() << std::endl;
	*(animals[5]) = *(animals[7]);
	std::cout << animals[5]->getBrain()->ideas[2] << std::endl;
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
		delete animals[i];
    return 0;
}
