#include <iostream>
using namespace std;

void modifyValue(int x) {
    x = 10;  // Only modifies the local copy of 'x'
}

int main() {
    int num = 5;
    modifyValue(num);
    cout << "Value of num: " << num;  // Output: 5 (unchanged)
    return 0;
}





#include <iostream>
using namespace std;

void modifyValue(int &x) {
    x = 10;  // Modifies the original 'x'
}

int main() {
    int num = 5;
    modifyValue(num);
    cout << "Value of num: " << num;  // Output: 10 (modified)
    return 0;
}
