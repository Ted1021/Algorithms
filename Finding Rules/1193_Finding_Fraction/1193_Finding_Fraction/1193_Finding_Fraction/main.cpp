//
//  main.cpp
//  1193_Finding_Fraction
//
//  Created by Ted on 2017. 4. 26..
//  Copyright © 2017년 Ted. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
   
    int sum=0;
    int n=1;
    int target;
    
    cin >> target;
    
    
    while(true){
       
        sum = sum + n;
        if(sum >= target){
            
            int interval = sum-target;
            
            if(n%2==0){
                cout << n-interval << "/" << 1+interval << endl;
                
            }
            else{
                cout << 1+interval << "/" << n-interval << endl;
            }
            
            break;
        }
        
        n++;
    }
    
    return 0;
}
