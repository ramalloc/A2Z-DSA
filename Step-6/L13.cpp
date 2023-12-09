// Find the middle Node of LL 

// If there are odd no. of Nodes then we can return the middle one
// But if there Even no. of Nodes then we return after middle Node -> (N/2) + 1

// 1. We will count the LL till ptr != NULL, then we take middle = (N/2) + 1; and traverse till middle == 0 and ptr = ptr->next
// then we return the ptr

/*
Node *findMiddle(Node *head) {
  Node *ptr = head;
  int count = 0;
  while (ptr != NULL) {
    count++;
    ptr = ptr->next;
  }

  int mid = (count / 2) + 1;
  ptr = head;
  while (ptr != NULL) {
    mid = mid - 1;
    if (mid == 0) {
      break;
    }
    ptr = ptr->next;
  }
  return ptr;
}
*/
// Time Complexity = O(N) + O(N/2) 
// Space Complexity = O(1)


// 2. Using Turtoise and Hare Method or Slow and Fast Pointer method
