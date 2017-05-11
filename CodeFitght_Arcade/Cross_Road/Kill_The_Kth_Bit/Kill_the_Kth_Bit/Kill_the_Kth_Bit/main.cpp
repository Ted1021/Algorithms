//
//  main.cpp
//  Kill_the_Kth_Bit
//
//  Created by Ted on 2017. 5. 11..
//  Copyright © 2017년 Ted. All rights reserved.
//

#include <iostream>
#include <stack>
#include <math.h>

using namespace std;

int killKthBit(int n, int k){
    
    return n&~(1<<(k-1));
}

int main(int argc, const char * argv[]) {
    
    stack<int> s;
    
    int n, k;
    int size = 0;
    int sum = 0;
    int target;
    
    cin >> n >> k;
    cout << killKthBit(n, k) << endl;
    
    while(n>0){
        
        s.push(n%2);
        n /= 2;
        
    }
    
    size = (int) s.size();
    for(int i=0; i<size; i++){
        
        target = s.top();
        
        if((size-i) == k)
            target = 0;
        
        cout << target << endl;
        
        sum += target * pow(2, (size-1)-i);
        s.pop();
    }
    
    cout << sum << endl;
    
    return 0;
}
