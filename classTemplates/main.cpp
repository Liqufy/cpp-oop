#include <iostream>
using namespace std;

template <typename T>
class Array {
public:
    T array[10];

    void fill(T value)
    {
        for (int i = 0; i<10; i++)
            array[i] = value++;
    }
    T& at(int index)
    {
        return array[index];
    }
};

int main()
{
    Array<int> arr;
    arr.fill(0);
    int i = 0;
    while (i < 10)
    {
        cout << arr.at(i) << endl;
        i++;
    }

    return 0;
}