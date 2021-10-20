#include <iostream>

using namespace std;

bool isLeapYear(int year){

    if (year % 4 != 0)
        return false;
    else{
        if (year % 100 == 0){
            if (year % 400 == 0)
                return true;
            else
                return false;
        }
        else
            return true;
    }
}

int main(){
    int year;
    char a;
    do{
        cout << "enter a year value: ";
        cin >> year;
        if (isLeapYear(year))
            cout << year << " is a leap year" << endl;
        else
            cout << year << " is not a leap year" << endl;
        cout << "continue? (y/n): ";
        cin >> a;
    }while (a == 'y');
    return 0;
}
