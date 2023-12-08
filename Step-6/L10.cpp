// Check if a LL is Palindrome or not -> Reverse should be the same

// 1. Using Stack -> Store data of all Nodes in Stack, then compare the LL data and stack top
/*
#include<bits/stdc++.h>
bool isPalindrome(Node *head)
{
    Node* ptr = head;
    stack<int> st;
    while(ptr != NULL){
        st.push(ptr->data);
        ptr = ptr->next;
    } 

    ptr = head;
    while(ptr != NULL){
        if(ptr->data != st.top()) return false;
        else{
            ptr = ptr->next;
            st.pop();
        }
    }
    return true;
}
*/
// Time Complexity = O(N) + O(N) ~ O(2N)
// Space Complexity = O(N)



