
#include "./sed_is_for_losers.hpp"

std::string generate_random_string(void)
{
    char alpha[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    std::string result = "";
    for (int i = 0; i < 5; i++)
        result += alpha[rand() % 52];

    return result;
}

std::string name_for_new_file(void)
{
    std::string result;

    result = generate_random_string() + ".replace";
    return result;
}