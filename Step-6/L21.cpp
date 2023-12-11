// Reverse Nodes in K Group Size of LinkedList

/*
-> In order to reverse a LL we need a pointer which will be pointing to kth node(last node or 3rd node).
-> When we found kth node we will save the kth's next node in a different pointer, then we set the kth->next == NULL in order to reverse the LL. 
-> After reversal the kth node is still pointing to 3rd/newNode But ptr and head is still pointing to 1st node which is last node after reversal. 
-> We need set the head = kthNode, Now we points the first node in next k sized group of LL.
-> after reversing the last node from previous k group should be pointing to kth of current k group, so we have to preserve the last node.
-> now set the prevNode = ptr and ptr = nextNode
-> If there are no further k Node in LL then attach the reaminig Nodes in the current LL

-> ptr == head then its our first k group
*/