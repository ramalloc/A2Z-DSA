// Remove duplicates from sorted DLL
// We will solve using two pointer approach

/*
Node *removeDuplicates(Node *head) {
  Node *ptr = head;
  while (ptr != NULL && ptr->next != NULL) {
    Node *nextNode = ptr->next;
    // Till ptr is not = NULL and ptr->data == nextNode->data we will travrse
    while (nextNode != NULL && nextNode->data == ptr->data) {
      Node *duplicate = nextNode;
      nextNode = nextNode->next;
      free(duplicate);
    }

    // If ptr->data != nextNode->data
    ptr->next = nextNode;

    // If nextNode is not NULL then it's prev should point to ptr
    if (nextNode) {
      nextNode->prev = ptr;
    }
    ptr = nextNode;
  }
  return head;
}

*/

// Time Complexity = O(N)
// Time Complexity = O(1)
