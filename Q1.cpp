#include <iostream>
using namespace std;
int factorial (int num);

int main() {
    int  x=4;
    cout << "\n Factorial of " << x << "= " << factorial(x);

    return 0;
}

int factorial (int num) {

    for (int i=1; i<=num; i++) {
        num*=i;
    }

    return num;
}