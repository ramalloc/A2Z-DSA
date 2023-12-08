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



// 2. Using Slow and Fast Pointer
/*  -> We will try to make first half and second half by fast and slow pointer
    -> Then we will reverse the second half to compare the data with first half data
    -> After comparing we will reverse the second half again
*/

/*
Node *reverseLinkedList(Node *head) {
  Node *ptr = head;
  Node *prev = NULL;

  while (ptr != NULL) {
    Node *front = ptr->next;
    ptr->next = prev;
    prev = ptr;
    ptr = front;
  }
  return prev;
}
bool isPalindrome(Node *head) {
  Node *slow = head;
  Node *fast = head;

  // Moving slow and fast to reach at the mid of LL to separate the LL into two
  // half.
  while (fast->next != NULL && fast->next->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;
  }
  // Now slow at the end of first half and fast at the start of second half
  // Now we will reverse the second half
  Node *newHead = reverseLinkedList(slow->next);
  // Now we have the starting head of reversed LL in newHead

  // We will make pointers which are pointing to end of first half and at the
  // newHead of second half
  Node *first = head;
  Node *second = newHead;

// Comparing Datas from first and second half
  while (second != NULL) {
    if (first->data != second->data) {
        // reverse the second half LL again before returning the false
      reverseLinkedList(newHead);
      return false;
    }
    second = second->next;
    first = first->next;
  }

  reverseLinkedList(newHead);
  return true;
}
*/

// Time Complexity = O(N/2) + O(N/2) + O(N/2) + O(N/2) ~ O(2N)
// Space Complexity = O(1)