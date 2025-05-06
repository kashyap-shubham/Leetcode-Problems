## Naive Approach** : Since the pointer to the node which needs to be deleted is given and it's not the last node so what we can do, we can put replace the value of next to the node which needs to be deleted and then we do so iterretively until we stand on the one node back to the node which does not point to any other node and then delete that node from the list.
Tc in this case is O(n) and Sc is O(1).



## Better Approach**: If we clearly observe then we find that we are already given a pointer to the node which needs to be deleted then copy the value of next node to the node we are standing and then just simply make that node point to next of next node
TC = O(1) and SC = O(1)
but here assumption is we can swap one node content to another node in O(1) time i.e the copy will happen in constant time.
