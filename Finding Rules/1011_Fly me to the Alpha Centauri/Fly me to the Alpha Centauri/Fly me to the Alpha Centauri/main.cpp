//
//  main.cpp
//  Fly me to the Alpha Centauri
//
//  Created by Ted on 2017. 4. 26..
//  Copyright © 2017년 Ted. All rights reserved.
//

using namespace std;

#include <iostream>

void movements(int x, int y);

int main(int argc, const char * argv[]) {
    
    int T;
    int x, y;
    
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> x >> y;
        movements(x,y);
    }
    
    return 0;
}

void movements(int x, int y){
    
    int move=1;
    int count=1;
    
    while(true){
        
        y = y-move;
        cout << "current = " << y << endl;
        
        if(y < x){
            cout << count << endl;
            break;
        }
        else{
            count++;
            move++;
            cout << "move = " << move << endl;
        }
        
    }
}
