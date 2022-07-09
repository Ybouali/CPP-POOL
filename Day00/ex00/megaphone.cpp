#include <iostream>
#include <string>

void megaphone(char **argv)
{
    for (int i = 1; argv[i] != 0; i++)
    {
        for (int j = 0; argv[i][j] != '\0'; j++)
        {
            if (isalpha(argv[i][j]) && islower(argv[i][j]))
                argv[i][j] -= 32;
            std::cout << argv[i][j];
        }
        std::cout << " ";
    }
}

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
        megaphone(argv);
    return 0;
}