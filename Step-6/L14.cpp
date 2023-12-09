// Detect a Loop or cycle in LL
// If there exist minimum of one node where you start and reach back, then we can say LL has cycle

// 1. Using Hashmap
/*
#include <bits/stdc++.h>
bool detectCycle(Node *head)
{   
    if(head == NULL || head->next == NULL) return false;
	Node* ptr = head;
    map<Node*, int>mpp;

    while(ptr != NULL){
        if(mpp.find(ptr) != mpp.end()){
            return true;
        }
        mpp[ptr] = 1;
        ptr = ptr->next;
    }
    return false;
}
*/
// Time Complexity = O(N)
// Space Complexity = O(N)




// 2. Tutoise and Hare or Slow and Fast Method
/*
#include <bits/stdc++.h>
bool detectCycle(Node *head)
{   
    if(head == NULL || head->next == NULL) return false;
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return true;
        }
    }
    return false;
}
*/
// Time Complexity = O(N)
// Space Complexity = O(1)