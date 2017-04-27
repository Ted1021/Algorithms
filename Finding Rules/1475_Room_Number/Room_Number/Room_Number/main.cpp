//
//  main.cpp
//  Room_Number
//
//  Created by Ted on 2017. 4. 27..
//  Copyright © 2017년 Ted. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

    int mem[10]={0};
    int num;
    int max=0, count69=0;
    
    cin >> num;
    
    while(num>0){
        
        mem[num%10]++;
        num = num/10;
        
    }
    
    for(int i=0; i<10; i++){
        
        if(i==6 || i==9){
            
            count69 += mem[i];
        }
        else{
            if(max<mem[i]){
                max = mem[i];
            }
        }
    }
    
    count69 = count69/2 + count69%2;
    if(count69 > max)
        cout << count69 << endl;
    else
        cout << max << endl;
    
    return 0;
}
