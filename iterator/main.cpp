#include <iostream>
#include <iterator>
using namespace std;

int main()
{
    cout << "Iki sayi giriniz: "; 
    istream_iterator<int> inputInt{cin};

    int number1{*inputInt};
    ++inputInt;
    int number2{*inputInt};

    ostream_iterator<int> outputInt{cout};

    cout << "The sum is: ";
    *outputInt = number1 + number2;
    cout << endl;


    return 0;
}