// Find the intersection point of Y LinkedList 
// We have given two linked list, We have to find first Common Node 

// 1. Using Hashing By visiting in map
/*
-> We will traverse first LL and marked them visited then We will traverse the second LL and if we find the visited Node in the traversal
    Then we return that Node.
*/
/*
#include <bits/stdc++.h>

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    map<Node*, int> mpp;
    Node* ptr = firstHead;
    while(ptr != NULL){
        mpp[ptr] = 1;
        ptr = ptr->next;
    }

    ptr = secondHead;
    while(ptr != NULL){
        if(mpp.find(ptr) == mpp.end()){
            return ptr;
        }
        ptr = ptr->next;
    }

    return nullptr;
}

*/



