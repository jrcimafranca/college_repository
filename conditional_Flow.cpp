#include <iostream>

using namespace std;

int main(){
    
    int number_1;
    int number_2;

    cout << "Type in 2 different numbers below." << endl << "Type the first number: ";
    cin >> number_1;

    cout << "Type the second number: ";
    cin >> number_2;

    if (number_1 > number_2) {
        cout << "The first number which is " << number_1 << " is greater than second number " << number_2 << "." << endl;
    }

    else if (number_1 < number_2) {
        cout << "The first number which is " << number_1 << " is less than second number " << number_2 << "." << endl;
    }

    return 0;
}