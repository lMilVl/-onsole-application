#include <iostream>
#include "lesson4.h"
#include <cstdlib>
#include <sstream>

using namespace std;

int main(int argc, char * argv[])
{

    if(argc < 3) {
        // вывести сообщение об ошибке и завершить работу программы
        std::cerr << "Missing parameters" << std::endl;
        return 1;
    }
    int a, b;

    istringstream astr(argv[1]), bstr(argv[2]);

    astr >> a;
    bstr >> b;
    if(astr.fail() || !astr.eof()) {
        // вывести сообщение об ошибке и завершить работу программы
        std::cerr << "A must be an integer" << std::endl;
        return 2;
    }
    if (a < 0)
    {
        std::cerr << "A must be a positive";
        return 3;
    }


    if(bstr.fail() || !bstr.eof()) {
        // вывести сообщение об ошибке и завершить работу программы
        std::cerr << "B must be an integer" << std::endl;
        return 2;
    }
    if (b < 0)
    {
        std::cerr << "B must be a positive";
        return 3;
    }

    if (a > b)
    {
        std:: cerr << "A must be less than B";
        return 4;
    }


    auto result = ListOfPrimeNumbers(a, b);
    cout << "Result: ";

    for (auto temp : result)
    {
        cout << temp << " ";
    }

    return 0;
}
