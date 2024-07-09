#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> multimapExample;
    multimapExample.insert({1, "one"});
    multimapExample.insert({2, "two"});
    multimapExample.insert({2, "deux"});
    multimapExample.insert({3, "three"});

    for(const auto& pair : multimapExample) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}