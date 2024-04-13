**Approcah 1:**
The idea here is to find the place in which the elements is going to be placed after rotation. Since array is treated as circular tape so after we reach last index i.e size of array then we have to go to 0 index to do so we can use modular operator. Since after adding the rotation number to index position we do modular division to get its final position
​
**Approach 2:**
​
The second approach is to reverse the array from 0 to n-k elements and again reverse the array from n-k to n  and then reverse the entire array once again this will give the resultant rotated array inplace in O(1) time and time complexity O(n-k) + O(n-k) + O(n) so overall O(n).
​