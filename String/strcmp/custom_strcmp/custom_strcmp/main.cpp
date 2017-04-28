//
//  main.cpp
//  custom_strcmp
//
//  Created by Ted on 2017. 4. 28..
//  Copyright © 2017년 Ted. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

bool my_string_strcmp(string str1, string str2);
bool my_char_strcmp(const char *str1, const char *str2);

int main(int argc, const char * argv[]) {
    
    char str1[100], str2[100];
    
    cin >> str1;
    cin >> str2;
    
    cout << str1 << " " << str2 << endl;
    
    if(my_char_strcmp(str1, str2)){
        cout << "SAME" << endl;
    }
    else
        cout << "FALSE" << endl;
    
    return 0;
}

bool my_string_strcmp(string str1, string str2){
    
    int len1 = (int)str1.size();
    int len2 = (int)str2.size();
    
    cout << len1 << " " << len2 << endl;
    
    cout << str1 << " " << str2 << endl;
    
    if(len1 != len2)
        return false;
    
    for(int i=0; i<len1; i++){
        cout << str1[i] << " " << str2[i] << endl;
        if(str1[i]!=str2[i])
            return false;
    }
    return true;
}

bool my_char_strcmp(const char *str1, const char *str2){
    
    int len1=0, len2=0;
    
    while(str1[++len1]){};
    while(str2[++len2]){};
    
    cout << len1 << " " << len2 << endl;
    
    
    if(len1 != len2){
        return false;
    }
    
    for(int i=0; i<len1; i++){
        if(str1[i] != str2[i]){
            return false;
        }
    }
    return true;
}
