// Add number in the Given two SLL

/*
    Here we have two SLL which contains numbers in data, the numbers are in reverse order like SLL1 -> 4, 5, 3 So the number is 3 5 4.
    SLL2 -> 6, 9, 4 Number is ->  4 9 6
    Sum is  ->  3 5 4
                6 9 6 
                ------
              1 0 5 0
    And we are returning the reverse of Sum , sumList -> 0 5 0 1
*/

/*

Node *addTwoNumbers(Node *num1, Node *num2) {
  Node *t1 = num1;
  Node *t2 = num2;

  // Creating dummy node for returnig the next of it as head
  Node *dummyNode = new Node(-1);
//   make curr for traversing of new Sum List 
  Node *curr = dummyNode;
  int carry = 0;

  while (t1 != NULL || t2 != NULL) {
    int sum = carry;
    if (t1)
      sum = sum + t1->data;
    if (t2)
      sum = sum + t2->data;

    Node *block = new Node(sum % 10);
    carry = sum / 10;

    curr->next = block;
    curr = curr->next;

    // Now we have to traverse num1 and num2 by t1 and t2
    // if t1 and t2 it is presnent to prevent from null exception.
    if (t1)
      t1 = t1->next;
    if (t2)
      t2 = t2->next;
  }
  if (carry) {
    Node *block = new Node(carry);
    curr->next = block;
    curr = curr->next;
  }
  return dummyNode->next;
}

*/

// Time Complexity -> O(max(num1, num2));

// Space Complexity is for returning the answer
// Space Complexity -> O(max(num1, num2));