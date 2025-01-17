#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> mapExample;
    mapExample[1] = "one";
    mapExample[2] = "two";
    mapExample[3] = "three";

    for(const auto& pair : mapExample) {
        std::cout << pair.second << ": " << pair.first << std::endl;
    }

    return 0;
}