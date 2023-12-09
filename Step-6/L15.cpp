// Find the length of the loop in LL
// If there is linear LL we will return len = 0


// 1. Hashing
// We are using map for storing the timer(t) and node
// We will traverse the loop from head and increament the timer by 1 and save the node and timer in map, when ptr reaches to the visited node
// we will minus that current timer from the before timer(length )  of that node and we will return the length.

/*
#include <bits/stdc++.h>
int lengthOfLoop(Node *head) {
  Node *ptr = head;
  map<Node *, int> mpp;
  int timer = 1;
  while (ptr != NULL) {
    if (mpp.find(ptr) != mpp.end()) {
      int value = mpp[ptr];
      return (timer - value);
    }
    mpp[ptr] = timer;
    timer++;
    ptr = ptr->next;
  }
  return 0;
}
*/
// Time Complexiity = O(2N)
// Space Complexiity = O(N)


// 2. Using Tortoise and Hare
// We will reach at the Node where slow and fast met and from that node reintialize the fast ffrom that node till that present node
// kept a count which increases with increament of fast then fast reaches back to that node then return the count as length of loop in LL.

/*
#include <bits/stdc++.h>
int findLength(Node *fast) {
  Node *fastHead = fast;
  int count = 1;
  fastHead = fastHead->next;
  while (fastHead != fast) {
    count++;
    fastHead = fastHead->next;
  }
  return count;
}
int lengthOfLoop(Node *head) {
  Node *slow = head;
  Node *fast = head;
  while (fast != NULL && fast->next !=NULL) {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast) {
      return findLength(fast);
    }
  }
  return 0;
}
*/

// Time Complexiity = O(2N)
// Space Complexiity = O(1)