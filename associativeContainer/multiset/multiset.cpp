#include <iostream>
#include <set>

int main() {
    std::multiset<int> multisetExample;
    multisetExample.insert(1);
    multisetExample.insert(2);
    multisetExample.insert(2); // Duplicate elements are allowed
    multisetExample.insert(3);

    for(const auto& element : multisetExample) {
        std::cout << element << std::endl;
    }

    return 0;
}