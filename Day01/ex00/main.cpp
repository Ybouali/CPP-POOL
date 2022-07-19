#include "./Zombie.hpp"

std::string generate_random_string(void)
{
    char alpha[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    std::string result = "";
    for (int i = 0; i < LEN_NAME_ZOMBIE; i++)
        result += alpha[rand() % 52];

    return result;
}

Zombie *newZombie(std::string name)
{
    if (name.empty())
    {
        std::cout << "Zombie name is empty" << std::endl;    
        return nullptr;
    }
    Zombie *zombie = new Zombie(name);
    if (!zombie)
        return nullptr;
    return zombie;
}

void randomChump(std::string name)
{
    Zombie *zombie;

    zombie = newZombie(name);
    if (!zombie) return ;

    zombie->announce();
    delete zombie;
}


int main(void)
{

    Zombie zombie1[1];

    zombie1->setName("NO_ONE");
    zombie1->announce();


    Zombie *zombie2 = newZombie("COCO");

    if (!zombie2) return 1;

    zombie2->announce();
    delete zombie2;

    randomChump(generate_random_string());
    return 0;
}