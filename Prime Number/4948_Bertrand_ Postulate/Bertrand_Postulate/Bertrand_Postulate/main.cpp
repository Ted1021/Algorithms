//
//  main.cpp
//  Bertrand_Postulate
//
//  Created by Ted on 2017. 5. 1..
//  Copyright © 2017년 Ted. All rights reserved.
//

#include <iostream>

using namespace std;

static const int MAX = 123456*2;

bool checkPrimeNumber(int num);
int countPrimeNumber(int target, bool *table);

void makePrimeNumTable(bool *table);


int main(int argc, const char * argv[]) {
   
    bool table[MAX];
    makePrimeNumTable(table);
    
    while(true){
        
        int target;
        cin >> target;
        
        if(target == 0)
            break;
        
        cout << countPrimeNumber(target, table) << endl;
    }
    
    return 0;
}

int countPrimeNumber(int target, bool *table){
    
    int count=0;
    
    for(int i=target+1; i<=target*2; i++){
        if(table[i])
            count++;
    }
    
    return count;
}

bool checkPrimeNumber(int num){
    
    if(num == 1)
        return false;
    
    for(int i=2; i<num; i++){
        
        if(num % i ==0){
            return false;
        }
    }
    return true;
}

void makePrimeNumTable(bool *table){
    
    for(int i=1; i<=MAX; i++){
        table[i] = checkPrimeNumber(i);
    }
}
