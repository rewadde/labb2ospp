#include <iostream>
#include <Windows.h>


using namespace std;

void countMultiples(int n, int& countEven, int& countMultipleOfThree, int& countMultipleOfTwoAndThree) {
    countEven = countMultipleOfThree = countMultipleOfTwoAndThree = 0;

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            countEven++;
        }
        if (i % 3 == 0) {
            countMultipleOfThree++;
        }
        if (i % 2 == 0 && i % 3 == 0) {
            countMultipleOfTwoAndThree++;
        }
    }
}

int main()
{   
    SetConsoleOutputCP(1251);
    int n;
    cout << "Enter natural number n: ";
    cin >> n;

    int countEven, countMultipleOfThree, countMultipleOfTwoAndThree;
    countMultiples(n, countEven, countMultipleOfThree, countMultipleOfTwoAndThree);

    cout << "Count even numbers: " << countEven << endl;
    cout << "Count multiple of 3: " << countMultipleOfThree << endl;
    cout << "Count multiple of 2 and 3: " << countMultipleOfTwoAndThree << endl;
}


