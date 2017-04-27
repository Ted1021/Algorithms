//
//  main.cpp
//  This_Year_2017
//
//  Created by Ted on 2017. 4. 27..
//  Copyright © 2017년 Ted. All rights reserved.
//

#include <iostream>

using namespace std;

void find_weekday(int month, int day);
int calDays(int month, int day);

int main(int argc, const char * argv[]) {
    
    int month, day;
    
    cin >> month >> day;
    find_weekday(month, day);

    return 0;
}

void find_weekday(int month, int day){
    
    int sumOfDays;
    
    sumOfDays = calDays(month, day);
    switch(sumOfDays % 7){
        case 1:
            cout << "MON" << endl;
            break;
        case 2:
            cout << "TUE" << endl;
            break;
        case 3:
            cout << "WED" << endl;
            break;
        case 4:
            cout << "THU" << endl;
            break;
        case 5:
            cout << "FRI" << endl;
            break;
        case 6:
            cout << "SAT" << endl;
            break;
        case 0:
            cout << "SUN" << endl;
            break;
    }
    
}

int calDays(int month, int day){
    
    int sumOfDays=0;
    
    if(month==1){
        return day;
    }
    
    for(int i=1; i<month; i++){
        switch(i){
            case 1:
                sumOfDays+=31;
                break;
            case 2:
                sumOfDays+=28;
                break;
            case 3:
                sumOfDays+=31;
                break;
            case 4:
                sumOfDays+=30;
                break;
            case 5:
                sumOfDays+=31;
                break;
            case 6:
                sumOfDays+=30;
                break;
            case 7:
                sumOfDays+=31;
                break;
            case 8:
                sumOfDays+=31;
                break;
            case 9:
                sumOfDays+=30;
                break;
            case 10:
                sumOfDays+=31;
                break;
            case 11:
                sumOfDays+=30;
                break;
            case 12:
                sumOfDays+=31;
                break;
        }
    }
    sumOfDays+=day;

    return sumOfDays;
    
}
