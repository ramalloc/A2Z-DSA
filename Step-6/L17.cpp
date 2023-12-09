// Find the starting point of the Loop/Cycle in LinkedList
// We are returning Starting Node if LL is cyclic. If LL is Linear then we will return nullptr


// 1. Using Hashing -> we will traverse and store the node in map and we check if any Node visited twice then we will return that node.
/*
#include <bits/stdc++.h>
Node *firstNode(Node *head)
{
    Node* ptr = head;
    map<Node*, int> mpp;

    while(ptr != NULL){
        if(mpp.find(ptr) != mpp.end()){
            return ptr;
        }
        mpp[ptr] = 1;
        ptr = ptr->next;
    }
    return nullptr;
}
*/ 
// Time Complexity = O(2N) 
// Space Complexity = O(N) 



// 2. Using Tortoise and Hare Method
/*
-> First we chexk the cycle in LL and slow and fast reached at same node.
-> Second we point head with slow and traverse the LL and move slow and fast simultaneously one-one step. 
    When they met at a node we will return that Node
*/
/*
#include <bits/stdc++.h>
Node *firstNode(Node *head)
{   
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            slow = head;
            while(slow != fast){
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return NULL;
}
*/
 