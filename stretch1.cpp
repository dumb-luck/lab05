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

int last_day(int month, int year){

    int days;
    if (month == 2){
        days = isLeapYear(year) ? 29 : 28;
    }
    else
    {
        switch(month){

            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12: days = 31;
                     break;
            case 4:
            case 6:
            case 9:
            case 11: days = 30;
                     break;
        }
    }
    return days;
}

int main(){

    int month, year;
    char a;

    do{
        cout << "enter month and year: ";
        cin >> month >> year;
            cout << "days in month: " << last_day(month, year) << endl;
        cout << "continue? (y/n): ";
        cin >> a;
    }while (a == 'y');

    return 0;
}

