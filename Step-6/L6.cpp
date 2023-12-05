// Odd Even LL
// Here we are rearranging the LL in way that the index of LL's odds comes first and evens comes after the odds.

// 1. Using array
/*
-> We take an arr[], temp pointing to head. We traverse the LL in a way so that temp points to only odd index of LL
-> we took temp = temmp->next-next and we will save the temp->data in array.
-> Now we traverse the LL from the temp->next, to save the temp->data in arr.

*/
/*
Node *oddEvenList(Node *head) {
  if (head == NULL || head->next == NULL) {
    return head;
  }
  vector<int> arr;
  Node *ptr = head;

  while (ptr != NULL && ptr->next != NULL) {
    arr.push_back(ptr->data);
    ptr = ptr->next->next;
  }

  // But from the above loop the last element didn't pushed in arr because of
  // the loop condition
  arr.push_back(ptr->data);

  ptr = head->next;
  while (ptr != NULL && ptr->next != NULL) {
    arr.push_back(ptr->data);
    ptr = ptr->next->next;
  }
  arr.push_back(ptr->data);

  //   Now we will reassign the data of LL from the arr
  ptr = head;
  int i = 0;
  while (ptr != NULL) {
    ptr->data = arr[i];
    ptr = ptr->next;
    i++;
  }

  return head;
}
*/
// Time Complexity = O(2N)
// Space Complexity = O(N)


// 2. Link Changes
/*
Node *oddEvenList(Node *head) {
  Node *odd = head;
  Node *even = head->next;
  Node *evenHead = even;

  // Odd is alsway before Even so we checking condition only for even
  while (even != NULL && even->next != NULL) {
    odd->next = odd->next->next;
    even->next = even->next->next;

    odd = odd->next;
    even = even->next;
  }
  // Linked Odd and Even
  odd->next = evenHead;

  return head;
}
*/
// Time Complexity = O(N)
// Space Complexity = O(0)