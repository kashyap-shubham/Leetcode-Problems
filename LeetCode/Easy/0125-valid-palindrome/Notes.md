# Valid Palindrome — Notes


## First Principle Approach

### Idea

Clean the given string then convert reverse the given string and compare with original cleaned string.

### Algorithm

1. clear the string using isalnum() and tolower().

2. reverse the string using loop or stl iterator begin() and end() and call the reverse() function.

3. Comparet the cleaned string with reverse string if matches palindrome else not.

### Time and Space complexity

Time complexity:  For cleaning the string scanning of entire string takes `O(n)` and after that reversing takes `O(n)` and comparing takes `O(n)` time so total tc = `O(n)` 

Space complexity: `O(n)` for storing the reverse string.

---

## Optimal Approach

### Idea

Take two pointer one is pointed to begining of string and one is pointed at the end of string and start comparing them if alphanumeric character encouteres skip that till mid of string if matches then palindrome else not.

### Algorithm

1. initialize the pointer to begining and end of string till end of string i.e left < right

2. initialize a loop and start comparing the string if it is not isalnum(), compare lowercase of string

3. if matches then palindrome else not

### Time and Space complexity

Time complexity: To initialize the pointer at first and last of the string `O(1)` after that comparing till n/2 so 
final tc = `O(n)`

Space complexity: `O(1)`  
