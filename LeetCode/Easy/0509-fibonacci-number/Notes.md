# Fibonacci Number — Notes

## Things to Learn

1. How recursion is done and what is the stopping condition 

2. How recursion tree grows and take stack memory and how its equation is written and solved

---

## First Principle Approach

### Idea

call the same function with f(n-1) and f(n-2) recursively and add them up.

### Algorithm

1. stoping condition is either n =0 or n =1 return the n else

2. call the same function with f(n-1) and f(n-2) and add them i.e result = f(n-1) + f(n-2)

### Time and Space complexity

Time complexity:  since in this case tree depth can be of max n but the number of function calls is 2^n so the 
	final tc is `O(2^n)`. Here the equation for this recursive algo is `T(n) = T(n-1) + T(n-2) + c`
	
Space complexity: since the maximum tree growth is n stack so space complexity is `O(n)`

---

## Better apporach (Recursive)

### Idea

In this case we just simply run the loop till n and computer the value by taking the sum of previous number and add it to sum iteratively

### Algorithm

1. start a loop and till n 

2. Then add the f(0) and f(1) value to sum and in next iteration add the number to the sum

### Time and Space complexity

Time complexity: since in this case we iterate once so tc is `O(n)`

Space complexity: `O(1)`

---

## Optimal Approach

It exists 
