#include <iostream>
using namespace std;

int main() {
    int n = 11; // Number to check
    bool isPrime = true; // Assume number is prime initially

    if (n < 2) {
        cout << "This is not a prime number";
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break; // No need to check further
        }
    }

    if (isPrime) {
        cout << "This is a prime number";
    } else {
        cout << "This is not a prime number";
    }

    return 0;
}
