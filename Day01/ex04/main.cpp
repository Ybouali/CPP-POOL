#include "./sed_is_for_losers.hpp"

void print(std::string filename, std::string s1, std::string s2)
{
    (void)s1;
    (void)s2;
    std::string ch;

    std::fstream file_in;

    file_in.open(filename.c_str(), std::ios::in);
    if (!file_in)
        std::cout << filename << " NOT FOUND!" << std::endl;
    else
    {
        while (1)
        {
            std::getline(file_in, ch);
            if (file_in.eof())
                break;
            std::cout << ch << std::endl;
        }
        file_in.close();
    }
    

}

int main(int argc, char const *argv[])
{
    (void)argv;
    (void)argc;

    // if (argc != 4)
    //     std::cout << "ERROR: Invalid number of arguments !!" << std::endl;
    // else
    //     print(argv[1], argv[2], argv[3]);
    std::cout << name_for_new_file() << std::endl;
    return 0;
}
