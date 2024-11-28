#include <iostream>
#include <vector>
// working on vector
using namespace std;
int main() {
    vector<int> vec = {87,54,21,65,32,78};
    cout << "Vector size: " << vec.size() <<endl;
    vec.push_back(8);
    cout<<vec.at(4)<<endl;
    cout<<vec.front()<<endl;
    cout << "final size: " << vec.size() <<endl;
    cout << "final capacity: " << vec.capacity() <<endl;
    return 0;
}