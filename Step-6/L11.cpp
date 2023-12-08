// Adding 1 to number represendted by LL, like -> 1, 2, 3 = add 1 => 1, 2, 4


// 1. 
/*
-> To add 1 and solve the problem we need to start from the end of LL, So we reverse the LL
-> Now add 1 to the number then reverse the LL again.
*/

/*
Node *reverseLL(Node *&head) {
  Node *ptr = head;
  Node *prev = NULL;

  while (ptr != NULL) {
    Node *front = ptr->next;
    ptr->next = prev;
    prev = ptr;
    ptr = front;
  }
  return prev;
};

Node *addOne(Node *head) {
  // Write Your Code Here.

  //   First we reverse the LL
  head = reverseLL(head);
  Node *ptr = head;
  int carry = 1;

  while (ptr != NULL) {
    ptr->data = ptr->data + carry;
    if (ptr->data < 10) {
      carry = 0;
      break;
    }
    ptr->data = 0;
    carry = 1;
    ptr = ptr->next;
  }

//   If carry = 1 remained at last then we add one more Node of data 1 as head

    if(carry == 1){
        Node* block = new Node(1);
        head = reverseLL(head);
        block->next = head;
        return block;
    }
// If carry is not 1 then we simply reverse the LL and return the head 
    head = reverseLL(head);
    return head;
}
*/
// Time Complexity = O(N) + O(N) + O(N) ~ O(3N)
// Time Complexity = O(1)



// 2. Using recursion
/*
int carryTracking(Node *ptr) {
    if(ptr == NULL) return 1;
    int carry = carryTracking(ptr->next);
    ptr->data = ptr->data + carry;
    if(ptr->data < 10){
        return 0;
    }
    ptr->data = 0;
    return 1;
}

Node *addOne(Node *head) {
  int carry = carryTracking(head);
  if (carry == 1) {
    Node *block = new Node(1);
    block->next = head;
    return block;
  }
  return head;
}
*/

// Time Complexity = O(N)
// Time Complexity = O(N)