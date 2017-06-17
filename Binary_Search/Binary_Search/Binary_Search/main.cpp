//
//  main.cpp
//  Binary_Search
//
//  Created by Ted on 2017. 6. 17..
//  Copyright © 2017년 Ted. All rights reserved.
//

#include <iostream>

using namespace std;

int binarySearch(int *arr, int target);

int main(int argc, const char * argv[]) {
    
    int arr[10] = {1,3,4,5,7,8,10,13,14,16};
    int target=0;
    int index=0;
    
    cin >> target;
    
    index = binarySearch(arr, target);
    if(index != -1)
        cout << "find! Index of Array is " << index << endl;
    else
        cout << "there's no value" << endl;
    
    return 0;
}

int binarySearch(int *arr, int target){
    
    int front = 0;
    int end = 10;
    int mid;
    
    while(front <= end){
        
        mid = (front + end) / 2;
        
        if(arr[mid] == target){
            return mid;
        }
        
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else
            front = mid + 1;
        
    }
    
    return -1;
}
