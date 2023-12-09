// Find the intersection point of Y LinkedList 
// We have given two linked list, We have to find first Common Node 

// 1. Using Hashing By visiting in map
/*
-> We will traverse first LL and marked them visited then We will traverse the second LL and if we find the visited Node in the traversal
    Then we return that Node.
*/
/*
#include <bits/stdc++.h>

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    map<Node*, int> mpp;
    Node* ptr = firstHead;
    while(ptr != NULL){
        mpp[ptr] = 1;
        ptr = ptr->next;
    }

    ptr = secondHead;
    while(ptr != NULL){
        if(mpp.find(ptr) == mpp.end()){
            return ptr;
        }
        ptr = ptr->next;
    }

    return nullptr;
}

*/



// 2. Using Two Pointet
/*
-> We have to point the starting Node from the same Node of both LL, So that by the traversal we can check both are equal or not
-> If they are equal then we can return that node. 
-> In order to stand at vertically on node, we traverse the L1 and count the Node in N1 and we traverse the L2 and count the Node in N2.
-> Now we minus the difference whosever is large we will minus the difference from that and set the ptr2 that Node ahead.
*/

/*
Node *collisionNode(Node *smallerHead, Node *greaterHead, int differ) {
  while (differ) {
    greaterHead = greaterHead->next;
    differ--;
  }

  while (greaterHead != smallerHead) {
    if (greaterHead == smallerHead)
      return greaterHead;
    greaterHead = greaterHead->next;
    smallerHead = smallerHead->next;
  }
  return smallerHead;
};

Node *findIntersection(Node *firstHead, Node *secondHead) {
  Node *ptr1 = firstHead;
  Node *ptr2 = secondHead;
  int N1 = 0;
  int N2 = 0;

  while (ptr1 != NULL) {
    N1++;
    ptr1 = ptr1->next;
  }
  while (ptr2 != NULL) {
    N2++;
    ptr2 = ptr2->next;
  }

  if (N1 < N2) {
    return collisionNode(ptr1, ptr2, N2 - N1);
  } else {
    return collisionNode(ptr2, ptr1, N1 - N2);
  }

  return nullptr;
}
*/

// Time Complexity = O(N1) + O(N2) + O(N2 - N1) + O(N1) ~ O(3N)
// Space Complexity = O(1)



// 3. 
/*
When length of LL is different -> 
-> While traversing if ptr1 reachs to NULL then it will point to opposite LL's head
-> While traversing if ptr2 reachs to NULL then it will point to opposite LL's head
-> Result of this thie ptr1 and ptr2 will be at the vertically alligned on Nodes
-> Now traverse the LL simanteausly and check t1 == t2 and return one of them. 

When length of LL is same ->
-> Traverse the LL simanteausly and check t1 == t2 and return one of them. 

When LL is not colliding ->
-> Make a condition when both ptr1 and ptr2 reaches Null return nullptr
*/

/*
Node *findIntersection(Node *firstHead, Node *secondHead) {
    if(firstHead == NULL || secondHead == NULL) return NULL;
    Node* ptr1 = firstHead;
    Node* ptr2 = secondHead;
    while(ptr1 != ptr2){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;

        if(ptr1 == ptr2) return ptr1;

        if(ptr1 == NULL) ptr1 = secondHead;
        if(ptr2 == NULL) ptr2 = firstHead;
    }
    return ptr1;
}
*/
// Time Complexity = O(N1) + O(N2) ~ O(2N)
// Space Complexity = O(1)
