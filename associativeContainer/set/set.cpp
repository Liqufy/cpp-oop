#include <iostream>
#include <set>

int main() {
    std::set<std::string> setExample;
    setExample.insert("z");
    setExample.insert("3");
    setExample.insert("a");
    setExample.insert("1"); // Duplicate elements are not! added

    for(const auto& element : setExample) {
        std::cout << element << std::endl;
    }

    return 0;
}