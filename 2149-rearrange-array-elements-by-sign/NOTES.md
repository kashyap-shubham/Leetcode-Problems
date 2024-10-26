# Approach 1 (Naive Approach):
iterate through a array and make two sub array one consist of positive intergers and anther consists of negative integer it will take O(n) time and o(n/2) + O(n/2) space complexity for postive and negative integers and then after iterate through a loop and take each value form positive and negative array and put the values consequetively it will take O(n) time again
so total t.c = O(n) + O(n) = O(n)
s.c = O(n) + O(n) = O(n)
​
# Approach 2 :
In approach 2 we try to decrease the number of array read here we already know that the number of positive and negaitve elements is goint to be same and position of positive elements is going to be at even places like 0,2,4 and position of odd elements is going to be on odd places like 1,3,5 so we can directly utilize the position to fill our final array.
​
​