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

int main(int argc, const char * argv[]) {
  
    int len=0;
    vector<int> arr;
    
    cin >> len;
    for(int i=0; i<len; i++){
        
        int num;
        cin >> num;
        
        arr.push_back(num);
    }
    
    sort(arr.begin(), arr.end());
    
    for(int i : arr)
        cout << i << endl;
    
    return 0;
}
