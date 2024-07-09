#include <iostream>
#include <vector>
#include <deque>
using namespace std;


int main()
{
    deque<int> deq;
    vector<int> vec = {10, 20};

    int i;
    i = 0;
    while (i < 10)
    {
        deq.push_front(i);
        i++;
    }

    for (int item : deq)
    {
        cout << item << " ";
    }

    return 0;
}