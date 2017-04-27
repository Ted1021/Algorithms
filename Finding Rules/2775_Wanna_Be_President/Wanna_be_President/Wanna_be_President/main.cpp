//
//  main.cpp
//  Wanna_be_President
//
//  Created by Ted on 2017. 4. 27..
//  Copyright © 2017년 Ted. All rights reserved.
//

#include <iostream>

using namespace std;

int numOfPerson(int floor, int room);
int main(int argc, const char * argv[]) {
    
    int T;
    cin >> T;
    
    for(int i=0; i<T; i++){
        
        int floor, room;
        
        cin >> floor;
        cin >> room;
        
        cout << numOfPerson(floor, room) << endl;
        
    }
    return 0;
}

int numOfPerson(int floor, int room){
    
    if(floor==0){
        return room;
    }
    
    if(room==1){
        return 1;
    }
    
    return numOfPerson(floor, room-1) + numOfPerson(floor-1, room);
}
