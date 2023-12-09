// Delete all occurrences of a Key in DLL
// We have to delete the all occurence (Node) of the given data matches from the present Node 

/*
Node *deleteAllOccurrences(Node *head, int k) {
  Node *prevNode = nullptr;
  Node *ptr = head;
  Node *nextNode = nullptr;

  while (ptr != NULL) {
    if (ptr->data == k) {
      if (ptr == head) {
        head = head->next;
      }
      prevNode = ptr->prev;
      nextNode = ptr->next;

    // We need these below checks to handle head and last Nose case
      if (nextNode)
        nextNode->prev = prevNode;
      if (prevNode)
        prevNode->next = nextNode;

      Node *deleteNode = ptr;
      free(deleteNode);
      ptr = nextNode;
    }
    else{
        ptr = ptr->next;
    }
  }
  return head;
}
*/
// Time Complexity = O(N)
// Space Complexity = O(1)