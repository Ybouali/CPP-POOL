#include "./sed_is_for_losers.hpp"


std::string replace_s1_s2(std::string line, std::string  s1, std::string  s2)
{
    // std::string result;
    std::size_t start;
    // std::size_t start_old = 0;

    (void )s2;
    start = line.find(s1);
    if (start != std::string::npos)
    {
        while (1)
        {
            line.erase(start, s1.length());
            line.insert(start, s2.c_str(), s2.length());
            start += s2.length();
            start = line.find(s1, start + 1);
            if (start == std::string::npos)
                break;
        }
    }
    return line;
}

void print(std::string filename, std::string s1, std::string s2)
{
    (void)s1;
    (void)s2;
    std::string line;

    std::fstream file_in;
    std::fstream file_out;

    file_in.open(filename.c_str(), std::ios::in);
    if (!file_in)
        std::cout << filename << " NOT FOUND!" << std::endl;
    else
    {
        // create the new file 
        file_out.open(name_for_new_file("new_file").c_str(), std::ios::out);
        if (!file_out)
            std::cout << "ERROR: Could not create the new file!" << std::endl;
        {
            while (1)
            {
                std::getline(file_in, line);
                // std::cout << line << std::endl;
                // working on replace s1 with s2
                line = replace_s1_s2(line, s1, s2);
                file_out << line << std::endl;
                if (file_in.eof())
                    break;
            }
            file_out.close();
        }
        file_in.close();
    }
    

}

int main(int argc, char const *argv[])
{
    (void)argv;
    (void)argc;

    if (argc != 4)
        std::cout << "ERROR: Invalid number of arguments !!" << std::endl;
    else
        print(argv[1], argv[2], argv[3]);
    // std::cout << name_for_new_file() << std::endl;
    return 0;
}
