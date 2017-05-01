//
//  main.cpp
//  Sorting_Number_01
//
//  Created by Ted on 2017. 4. 28..
//  Copyright © 2017년 Ted. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int> arr){
    
    int len = (int) arr.size();
    for(int i=0; i<len-1; i++){
        for(int j=i+1; j<len; j++){
            if(arr[i] >= arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    
    for(int i : arr)
        cout << i << endl;
}

void bubleSort(vector<int> arr){
    
    int len = (int) arr.size();
    for(int i=0; i<len-1; i++){
        for(int j=0; j<len-i; j++){
            if(arr[i] >= arr[j]){
                swap(arr[1], arr[j]);
            }
        }
    }
}

int main(int argc, const char * argv[]) {
  
    int len=0;
    vector<int> arr;
    
    cin >> len;
    for(int i=0; i<len; i++){
        
        int num;
        cin >> num;
        
        arr.push_back(num);
    }
    selectionSort(arr);
    
    return 0;
}
