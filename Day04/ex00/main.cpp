#include "./Animal.hpp"

int main(void)
{

    Animal a("hello");
    std::cout << a.getType() << std::endl;
    return 0;
}
