//
//  main.cpp
//  Sum_Prime_Number
//
//  Created by Ted on 2017. 5. 1..
//  Copyright © 2017년 Ted. All rights reserved.
//

#include <iostream>

using namespace std;

int findPrimeNumber(int num);
void solve(int M, int N);

int main(int argc, const char * argv[]) {
   
    int M, N;
    cin >> M >> N;
    
    solve(M, N);
    
    return 0;
}

void solve(int M, int N){
    
    int sum=0;
    int min=0, temp;
    bool flag=false;
    
    for(int i=M; i<=N; i++){
        
        temp = findPrimeNumber(i);
        
        if(temp != 0){
            sum += temp;
            
            if(flag == false){
                min = temp;
                flag = true;
            }
        }
    }
    
    if(sum==0)
        cout << "-1" << endl;
    else{
        cout << sum << endl;
        cout << min << endl;
    }
}

int findPrimeNumber(int num){
    
    if(num==1)
        return 0;
    
    for(int i=2; i<num; i++){
        if(num % i == 0)
            return 0;
    }
    
    return num;
}
