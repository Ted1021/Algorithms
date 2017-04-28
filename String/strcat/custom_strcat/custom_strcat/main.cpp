//
//  main.cpp
//  custom_strcat
//
//  Created by Ted on 2017. 4. 28..
//  Copyright © 2017년 Ted. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void my_char_strcat(const char *str1, const char *str2);
void my_string_strcat(const string str1, const string str2);

int main(int argc, const char * argv[]) {
  
    char arr1[100], arr2[100];
    string str1, str2;
    
    gets(arr1);
    gets(arr2);
    my_char_strcat(arr1, arr2);
    
//    getline(cin, str1);
//    getline(cin, str2);
//    my_string_strcat(str1, str2);
    
    return 0;
}

void my_char_strcat(const char *arr1, const char *arr2){
    
    int len1=0, len2=0, total_len;
    char result[200];
    
    while(arr1[++len1]);
    while(arr2[++len2]);
    
    total_len = len1 + len2;
    
    result[total_len]='\0';
    for(int i=0; i<total_len; i++){
        if(i<len1){
            result[i] = arr1[i];
        }
        else{
            result[i] = arr2[i-len1];
        }
    }
    
    cout << result << endl;
}

void my_string_strcat(const string str1, const string str2){
    
    int len1 = (int) str1.size();
    int len2 = (int ) str2.size();
    
    cout << str1+str2 << endl;
//    cout << str1.append(str2) << endl;

}
