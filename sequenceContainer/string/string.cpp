#include <iostream>
#include <string>
using namespace std;


int main()
{
    string str = "Hello world";

    for(const auto& i : str)
    {
        cout << i << endl;
    }

    return 0;
}