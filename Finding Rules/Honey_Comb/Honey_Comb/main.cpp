//
//  main.cpp
//  Honey_Comb
//
//  Created by Ted on 2017. 4. 26..
//  Copyright © 2017년 Ted. All rights reserved.

using namespace std;

#include <iostream>

int main(int argc, const char * argv[]) {
    
    long long int sum=1, n=1;
    long long int target;
    
    cin >> target;
    
    while(true){
        
        sum += 6*n;
        
        if(target == 1){
            cout << target << endl;
            break;
        }
        else if(sum>=target){
            cout << n+1 << endl;
            break;
        }
        else
            n++;

    }
    
    return 0;
}

