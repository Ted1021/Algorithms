//
//  main.cpp
//  Kaying_calendar
//
//  Created by Ted on 2017. 4. 27..
//  Copyright © 2017년 Ted. All rights reserved.
//

#include <iostream>

using namespace std;

int doom(int M, int N, int x, int y);
int gcd(int a, int b);
int lcm(int gcd, int a, int b);

int main(int argc, const char * argv[]) {
    
    int T;
    cin >> T;
    
    int M, N, x, y;
    
    for(int i=0; i<T; i++){
        
        cin >> M >> N >> x >> y;
        cout << doom(M, N, x, y) << endl;
    }
    
    return 0;
}

int doom(int M, int N, int x, int y){
    
    int interval=M-N;
    int comp=x;
    int target=y;
    int rotation=lcm(gcd(M,N), M, N)/M;
    
    for(int i=1; i<=rotation; i++){
        
        comp = comp + interval;
        
        if(comp <= 0){
            comp += N;
        }
        else if(comp > N){
            comp -= N;
        }
        
        if(comp == target)
            return i*M+x;
    }
    
    return -1;
}

int gcd(int a, int b){
    
    if(a%b==0)
        return b;
    else
        return gcd(b, a%b);
}

int lcm(int gcd, int a, int b){
    
    return a*b/gcd;
}
