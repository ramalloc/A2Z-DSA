// K Rotate a LinkedList 

/*
Node* findNewTail(Node* ptr, int k){
     int count = 1;
     while(ptr != NULL){
          if(count == k) return ptr;
          ptr = ptr->next;
          count++;
     }
     return ptr;
}
Node *rotate(Node *head, int k) {
     Node* tail = head;
     int count = 1;
     while(tail->next != NULL){
          count++;
          tail = tail->next;
     }
     if(k % count == 0) return head;
     k = k % count;
     tail->next = head;

     Node* newtail = findNewTail(head, count-k);
     head = newtail->next;
     newtail->next = NULL;

     return head;
}
*/

// Time Complexty = O(2N)
// Space Complexty = O(1)
