//
//  main.cpp
//  Binary_Search_Tree
//
//  Created by Ted on 2017. 6. 17..
//  Copyright © 2017년 Ted. All rights reserved.
//

#include <iostream>
#include <random>

using namespace std;

class Node{
    
public:
    
    int value;
    Node* left;
    Node* right;
    
    Node(Node* left, Node* right, int value){
        
        this->left = left;
        this->right = right;
        this->value = value;

    }
    
    ~Node();
    
};

class BST{
    
    Node* root;
    
public:
    
    BST(){

    }
    
    ~BST();
    
    Node* getNode(int targetValue){
        
        int curVal=0;
        
        while(root != NULL){
            
            curVal = root->value;
            
            if(curVal == targetValue)
                break;
            else if(curVal < targetValue)
                root = root->right;
            else
                root = root->left;
        }
        
        return root;
    }
    
    void insertNode(int newValue){
        
        Node* curNode = getNode(newValue);
        
        if(root == NULL)
            root = curNode;
        
        if(curNode == NULL){
            
            Node *temp = getNode(newValue);
            
            if(temp->value < newValue)
                temp->right = curNode;
            else
                temp->left = curNode;
        }
        else
            cout << "this value is already exsit!!" << endl;
        
    }
    
    void deleteNode(int targetValue){
        
        
    }
    
};

void init_BST();

int main(int argc, const char * argv[]) {
    
    BST* tree = new BST();
    
    
    
    
    return 0;
}

void init_BST(){
    
    int newValue=0;
    
    for(int i=0; i<15; i++){
        
        newValue = rand()%100+1;
        Node newNode = Node(NULL, NULL, newValue);
        
    }
}
































