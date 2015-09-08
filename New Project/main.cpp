#include <iostream>

using namespace std;

int main() {
    short netSpeed = 3;
    cout << "before: " << netSpeed << endl;
    netSpeed = 1UL << netSpeed;
    cout  "after: " << << netSpeed << endl;
    return 0;
}
