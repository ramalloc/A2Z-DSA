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
// Time Complexity = O(1) 



// 2. Using Turtoise and Hare Method











