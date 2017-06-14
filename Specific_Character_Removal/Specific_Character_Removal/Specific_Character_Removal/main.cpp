//
//  main.cpp
//  Specific_Character_Removal
//
//  Created by Ted on 2017. 6. 14..
//  Copyright © 2017년 Ted. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

string removeChars(string str, string remove);

int main(int argc, const char * argv[]) {
    
    string str, remove;
    
    cout << "Insert target String : " << endl;
    getline(cin, str);
    
    cout << "Insert remove characters you want" << endl;
    cin >> remove;
    
    cout << removeChars(str, remove) << endl;
    
    return 0;
}

string removeChars(string str, string remove){
    
    for(char c : remove){
        replace(str.begin(), str.end(), c, ' ');
    }
    
    return str;
}
