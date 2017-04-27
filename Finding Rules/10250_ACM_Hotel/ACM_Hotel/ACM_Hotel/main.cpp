//
//  main.cpp
//  ACM_Hotel
//
//  Created by Ted on 2017. 4. 27..
//  Copyright © 2017년 Ted. All rights reserved.
//

#include <iostream>

using namespace std;

void booking(int H, int W, int N);

int main(int argc, const char * argv[]) {
    
    int T;
    int H, W, N;
    
    cin >> T;
    
    for(int i=0; i<T; i++){
        
        cin >> H >> W >> N;
        booking(H,W,N);
    }
    
    return 0;
}

void booking(int H, int W, int N){
    
    int floor=0, room=0;
    
    if(N%H==0){
        floor = H;
        room = N/H;
    }
    else{
        floor = N%H;
        room = N/H+1;
    }
    
    if(room<10){
        cout << floor << "0" << room << endl;
    }
    else{
        cout << floor << room << endl;
    }

}
