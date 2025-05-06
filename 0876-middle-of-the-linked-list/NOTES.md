**Approach :** The idea here is to use to pointer one is slow and another is fast, fast jumps two nodes and slow jumps to one node, so when fast reaches end of list slow will be at middle of list.

in case of even list fast at the end can't jump to 2 places so check for one more condition that if still one node to visit the list then increase the slow pointer and return it..
