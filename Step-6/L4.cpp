// Reverse Doubly Linked List

// 1. Reversing Using Stack
/*
-> make a pointer to head which traverse the LL and push the data of ptr into stack till becomes nullptr.
->  again assign ptr = head, traverse LL and push the top() of the stack in ptr and pop() the stack till ptr becomes nullptr.
*/

/*
Node* reverseDLL(Node* head)
{
    Node* ptr = head;
    stack<int> st;
    while(ptr != NULL){
        st.push(ptr->data);
        ptr = ptr->next;
    }

    ptr = head;
    while(ptr != NULL){
        ptr->data = st.top();
        st.pop();
        ptr = ptr->next;
    }

    return head;
}
*/

// 2. Reversing the LL by reversing the Links of Linked List

/*
Node *reverseDLL(Node *head) {
    if(head == NULL || head->next == NULL){
        return head;
    }
  Node *ptr = head;
  Node *back = NULL;
  while (ptr != NULL) {
    back = ptr->prev;
    ptr->prev = ptr->next;
    ptr->next = back;
    ptr = ptr->prev;
  }

  return back->prev;
}

*/