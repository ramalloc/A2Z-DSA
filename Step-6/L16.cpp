// Delete the middle node of of given LL


// BRUTE FORCE
// In order to delete the middle node we have to reach middle - 1 Node, So we traverse till (N/2).
/*
Node *deleteMiddle(Node *head) {
  if (head == NULL || head->next == NULL)
    return NULL;
    Node* ptr = head;
    int count = 0;
    while(ptr != NULL){
        count++;
        ptr = ptr->next;
    }
    int res = (count/2);
    ptr = head;
    while(ptr != NULL){
        res--;
        if(res == 0){
            Node* middle = ptr->next;
            ptr->next = ptr->next->next;
            free(middle);
            break;
        }

        ptr = ptr->next;
    }

  return head;
}
*/
// Time Complexity = O(N) + O(N/2) 
// Space Complexity = O(1) 



// 2. Using Turtoise and Hare Method
// Here we want to that slow should stop before one Node before of middle, so we skip the one increment of slow
/*
Node *deleteMiddle(Node *head) {
  if (head == NULL || head->next == NULL)
    return NULL;
  Node *slow = head;
  Node *fast = head;
  fast = fast->next->next;
  while (fast != NULL && fast->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;
  }
  Node *block = slow->next;
  slow->next = slow->next->next;
  free(block);

  return head;
}
*/
// Time Complexity = O(N) 
// Space Complexity = O(1) 









// Own Solution
/*
Node *deleteMiddle(Node *head) {
  if (head == NULL || head->next == NULL)
    return NULL;
  Node *slow = head;
  Node *fast = head;

  Node *prev = NULL;

  while (fast != NULL && fast->next != NULL) {
    prev = slow;
    slow = slow->next;
    fast = fast->next->next;
  }
  prev->next = slow->next;
  free(slow);

  return head;
}

*/ 