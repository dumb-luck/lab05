#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {

    if (num == 1)
        return false;
    else if (num == 2 || num == 3)
        return true;
    else {
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                return false;
                break;
            }
        }
        return true;
    }
}

int main(){
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 0)
        cout << "Invalid input!";
    else{
        if (isPrime(num))
            cout << num << " is a prime number";
        else
            cout << num << " is not a prime number";
    }
    return 0;
}
