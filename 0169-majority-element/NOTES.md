**Approach 1 :**
sort the element since majority elements always exits so when we sort the elements whaterver elments comes after n/2 position is majority elements because majority has to be by n/2 times so all no major elemnts comes upto n/2 places after that whatever has come it must be majortity but the thing is it require O(nlogn) tc.
​
**Approach 2 :**
if the value is given in some range then we can use the hash map to store the cout of the values and simultaneously update a maxcount variable in that we way we will solve the problem in linear time.
​
**Approach 3 :**
The another approach is to put initial value into result and then start moving ahead and whenever we found another item decrease the count when count reaches 0 update the reuslt with current position value and start the same procedure the intution behind this is when we get same value count increases and when we get different value the count is getting balanced by different elements found.