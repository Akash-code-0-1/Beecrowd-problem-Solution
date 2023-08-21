#include <iostream>
#include <string>

int main()
{
    std::string l1, l2, l3, mdfl1, mdfl2, mdfl3;

    std::getline(std::cin, l1);

    std::getline(std::cin, l2);

    std::getline(std::cin, l3);

    std::cin.ignore();

    std::cout << l1 + l2 + l3 << std::endl;

    std::cout << l2 + l3 + l1 << std::endl;

    std::cout << l3 + l1 + l2 << std::endl;

    if (l1.length() > 10)
    {
        mdfl1 = l1.substr(0, 10);
    }
    else
    {
        mdfl1 = l1;
    }
    if (l2.length() > 10)
    {
        mdfl2 = l2.substr(0, 10);
    }
    else
    {
        mdfl2 = l2;
    }
    if (l3.length() > 10)
    {
        mdfl3 = l3.substr(0, 10);
    }
    else
    {
        mdfl3 = l3;
    }

    std::cout << mdfl1 + mdfl2 + mdfl3 << std::endl;

    return 0;
}