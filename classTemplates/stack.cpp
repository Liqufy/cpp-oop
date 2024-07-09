#include <iostream>
#include <deque>
using namespace std;

template<typename T>
class Stack {
public:
    const T& top()
    {
        return stack.front();
    }
    void push(const T& pushValue)
    {
        stack.push_front(pushValue);
    }
    void pop()
    {
        stack.pop_front();
    }
    bool isEmpty() const {
        return stack.empty();
    }
    size_t size() const {
        return stack.size();
    }
private:
    deque<T> stack;
    
};

int main()
{
    Stack<int> musics;
    musics.push(4);
    musics.push(12);
    musics.push(324);
    musics.push(76);
    cout << musics.isEmpty();
    return 0;
}