// Remove the Nth Node fom the End (Reverse)

// 1. Using count
/*
-> We count the Nodes in one traversal then we have to go to the node till before {count - N} and change the links and delete the Node
*/
/*
Node *removeKthNode(Node *head, int K) {
  // Write your code here.
  Node* dummyHead = new Node(-1);
  if (head == NULL || head->next == NULL)
    return dummyHead;
  Node *ptr = head;
  int count = 0;
  while (ptr != NULL) {
    count++;
    ptr = ptr->next;
  }

  ptr = head;
  int res = count - K;
  while (ptr != NULL) {
    res--;
    if (res == 0) {
      break;
    }
    ptr = ptr->next;
  }

  // If head to be deleted
  if (count == K) {
    Node *headPtr = head;
    head = head->next;
    delete (headPtr);
    return head;
  }

  // Storing the Node to be delete
  Node *toDeleteNode = ptr->next;
  ptr->next = ptr->next->next;
  delete (toDeleteNode);

  return head;
}
*/
// Time Complexity = O(len of LL) + O(len-N of LL) ~ O(2N)
// Space Complexity = O(1)



// 2. Using two Pointer Nodes Fast and Slow Pointer


