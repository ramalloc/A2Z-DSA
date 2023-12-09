// L19. Find all Pairs with given Sum in DLL

// BRUTE FORCE
/*
vector<pair<int, int>> findPairs(Node* head, int k)
{
    Node* ptr1 = head;
    vector<pair<int, int>> ans;
    while(ptr1 != NULL){
    Node* ptr2 = ptr1->next;
        while(ptr2 != NULL && ptr1->data + ptr2->data <= k){
            if(ptr1->data + ptr2->data == k){
                ans.push_back(make_pair(ptr1->data, ptr2->data));
            }
            ptr2 = ptr2->next;
        }

        ptr1 = ptr1->next;
    }
    return ans;
}
*/
// Time Complexity = ~ O(N^2)
// Space Complexity =  O(1)



// 2. Two Pointer Approach
/*
Node* findTail(Node* head){
    Node* tail = head;
    while (tail->next != NULL) {
    tail = tail->next;
  }
  return tail;
}
vector<pair<int, int>> findPairs(Node *head, int k) {
  vector<pair<int, int>> ans;
  if(head == NULL) return ans;
  Node *left = head;
  Node *right = findTail(head);


  // Setting the right at the end

  // Now we will Compare According to Sorted data
  int sum = 0;
  while (left->data < right->data) {
    sum = left->data + right->data;
    if (sum == k) {
      ans.push_back(make_pair(left->data, right->data));
      left = left->next;
      right = right->prev;
    }
    else if (sum > k) {
      right = right->prev;
    } else {
      left = left->next;
    }
  }
  return ans;
}
*/
// Time Complexity = ~ O(2N)
// Space Complexity = O(1)