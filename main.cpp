#include <iostream>
#include "lesson4.h"

using namespace std;

int main()
{
    int a, b;

        cout << "Enter the first number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
        auto result = ListOfPrimeNumbers(a, b);
        cout << "Result: ";

        for (auto temp : result)
        {
            cout << temp << " ";
        }

        return 0;
}
