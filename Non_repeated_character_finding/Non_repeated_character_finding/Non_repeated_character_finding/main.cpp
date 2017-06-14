//
//  main.cpp
//  Non_repeated_character_finding
//
//  Created by Ted on 2017. 6. 14..
//  Copyright © 2017년 Ted. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

char findRepeatedCharacter(string str);

int main(int argc, const char * argv[]) {
    
    string str = "";
    cin >> str;
    
    if(findRepeatedCharacter(str) != -1){
        cout << findRepeatedCharacter(str) << endl;
    }
    else
        cout << "there's no repeated character" << endl;
    
    
    return 0;
}

char findRepeatedCharacter(string str){
    
    // 대소문자의 구분 여부 필요
    // 특수문자 포함 여부 필요
    
    // 구분할 경우, 배열의 길이는 ...
    // 구분하지 않을 경우, 배열의 길이는 ...
    
    char countingChar[26] = {0}; // 소문자만 받는다고 판단
    int index=0;    // 배열 공간을 효율적으로 사용하기 위한 index 화
    
    for(char c : str){
        index = c - 97;
        countingChar[index]++;
        
    }
    
    for(char c : str){
        index = c - 97;
        if(countingChar[index] == 1)
            return c;
        
    }
    
    return -1;
}
