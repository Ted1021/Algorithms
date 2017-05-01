//
//  main.cpp
//  Sorting_Numbers_02
//
//  Created by Ted on 2017. 5. 1..
//  Copyright © 2017년 Ted. All rights reserved.
//

#include <iostream>

using namespace std;

static const int MAX = 1000000;

int* initArray(int len, int *arr);
void quickSort(int *arr, int left, int right);

int main(int argc, const char * argv[]) {
    
    int len;
    int arr[MAX];
    
    cin >> len;
    
    initArray(len, arr);
    
    
    return 0;
}

int* initArray(int len, int *arr){
    
    for(int i=0; i<len; i++){
        int num;
        cin >> num;
        
        arr[i] = num;
        
    }
    return arr;
}

void quickSort(int *arr, int left, int right){
    
    int pivot = left;
    int count=0;
    
    while(true){
        
        if(arr[count]<pivot){
            
            int temp = arr[count];
            left++;
            arr[left-1] = temp;
        }
        else if(arr[count]>pivot){
            
            int temp = arr[count];
            right
        }
    }
}
