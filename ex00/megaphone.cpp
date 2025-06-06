#include <iostream>
#include <ctype.h>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::string text = "* LOUD AND UNBREABLE FEEDBACK NOISE *";
        std::cout << text << std::endl;
    }
    else
    {
        for (int i = 1; argv[i]; i++)
        {
            std::string arg = argv[i];
            for (std::string::size_type j = 0; j < arg.size(); j++)
            {
                if (islower(arg[j]))
                    std::cout << static_cast<char>(std::toupper(arg[j]));
                else
                    std::cout << arg[j];
            }
        }
        std::cout << std::endl;
    }
    return (0);
}