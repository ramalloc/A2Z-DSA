// Sort a LL 0, 1 and 2s
// Here we have a LL's head we have to arrange the LL in a way so that the 0 at first, 1's should comes after 0s and 2's should come after 1's.

// 1. We will count the occurence of the 0s, 1s and 2s in a traversal, then we replace the data according to the occurences.
/*
Node *sortList(Node *head) {
  // Write your code here.
  Node *ptr = head;
  int count0 = 0;
  int count1 = 0;
  int count2 = 0;

  while (ptr != NULL) {
    if (count0)
      count0++;
    else if (count1)
      count1++;
    else {
      count2++;
    }
  }

  ptr = head;
  while(ptr != NULL){
      if(count0){
          ptr->data = 0;
          count0--;
      }
      else if(count1){
          ptr->data = 1;
          count1--;
      }
      else{
          ptr->data = 2;
          count2--;
      }
  }

  return head;
}
*/ 
// Time Complexity = O(2N)
// Space Complexity = O(1)


// 2. Change the Links and using Dummy Nodes for joining the head of 0's, 1's and 2's.
/*
Node *sortList(Node *head) {
  // Write your code here.
  if (head == NULL || head->next == NULL)
    return head;
  Node *ptr = head;
  Node *headPtr = NULL;

  // Below we have created dummy nodes for 0, 1 and 2
  Node *zeroHead = new Node(-1);
  Node *oneHead = new Node(-1);
  Node *secHead = new Node(-1);

  // Below we made pointer which are pointing the dummy node's head
  Node *zero = zeroHead;
  Node *one = oneHead;
  Node *two = secHead;

  // Below we are linking the nodes next to the dummy nodes and moving forward the head pointer.
  while (ptr != NULL) {
    if (ptr->data == 0) {
      zero->next = ptr;
      zero = ptr;
    } else if (ptr->data == 1) {
      one->next = ptr;
      one = ptr;
    } else {
      two->next = ptr;
      two = ptr;
    }
    ptr = ptr->next;
  }

  // Now we will Link the 0's to 1's and 1's to 2's
  // We will join 0's next to zeroHead->next, But what if there is NULL
  // But if secHead->next is NULL then it if fine because at the end it points to NULL. 
  zero->next = (oneHead->next) ? oneHead->next : secHead->next; 
  one->next = secHead->next;
  two->next = NULL;

  // Point headPtr to zeroHead->next which is 0's first node  
  headPtr = zeroHead->next;

  // At the end free the memory 
  delete(zeroHead, oneHead, secHead);
  return headPtr;
}
*/
// Time Complexity = O(N)
// Space Complexity = O(1)
