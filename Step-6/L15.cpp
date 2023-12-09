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