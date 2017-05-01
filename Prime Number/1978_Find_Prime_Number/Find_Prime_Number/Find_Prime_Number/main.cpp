//
//  main.cpp
//  Find_Prime_Number
//
//  Created by Ted on 2017. 5. 1..
//  Copyright © 2017년 Ted. All rights reserved.
//

#include <iostream>

using namespace std;

bool checkPrimeNumber(int num);

int main(int argc, const char * argv[]) {
    
    int numOfTarget, count=0;
    cin >> numOfTarget;
    
    for(int i=0; i<numOfTarget; i++){
        
        int num;
        cin >> num;
        
        if(checkPrimeNumber(num)){
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}

bool checkPrimeNumber(int num){
    
    if(num==1)
        return false;
    
    for(int i=2; i<num; i++){
        if(num%i==0)
            return false;
    }
    return true;
}
