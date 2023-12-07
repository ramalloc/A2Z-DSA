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
/*

Node *removeKthNode(Node *head, int K) {
  // Write your code here.
  Node *dummyHead = new Node(-1);
  if (head == NULL || head->next == NULL)
    return dummyHead;
  // Initialiaze the fast at head

  Node *fast = head;
  //   Moving the fast to the k steps ahead from head;
  for (int i = 0; i < K; i++) {
    fast = fast->next;
  }

  // If N = 5 means to delete Head
  Node *headPtr = head;
  if (fast == NULL) {
    head = head->next;
    delete(headPtr);
    return head;
  }

  //   Now we make slow which points head and alsways k steps before of fast
  Node *slow = head;
  // At last when fast->next == NULL, slow will be pointing to the K+1th Node
  while (fast->next != NULL) {
    fast = fast->next;
    slow = slow->next;
  }
  Node *delNode = slow->next;
  slow->next = slow->next->next;
  delete (delNode);
  return head;
}
*/

// OR

/*
Node *removeKthNode(Node *head, int K) {
  Node *fast = head;
  Node *slow = head;

  for (int i = 0; i < K; i++)
    fast = fast->next;

  if (fast == NULL)
    return head->next;

  while (fast->next != NULL) {
    fast = fast->next;
    slow = slow->next;
  }

  Node *delNode = slow->next;
  slow->next = slow->next->next;
  free (delNode);
  return head;
}

*/

// Time Complexity = O(N)
// Space Complexity = O(1)

