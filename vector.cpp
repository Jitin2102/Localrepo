#include <iostream>
#include <vector>
// working on vector
int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::cout << "Vector size: " << vec.size() << std::endl;
    vec.push_back(8);
    std::cout<<vec.at(4)<<std::endl;
    std::cout<<vec.front()<<std::endl;
    std::cout << "final size: " << vec.size() << std::endl;
    return 0;
}
