# Palindrom Number — Notes

## Things to Learn

- To learn how modulo and divide is use to rever a number 
- To avoid the integer overflow so calculating the palindrome to the half way only

---

## First Principle Approach / Optimal approach

### Idea

Reverse the number using modulo (`%`) and division (`/`), then check whether the final reversed number is same a number given

### Algorithm

1. Extract last digit using `% 10`
2. Append digit using `rev = rev * 10 + digit`
3. Repeat until number becomes 0
4. Check if result is same as give number or not

### Time and Space complexity

Time complexity:  For converting a number in reverse `O(log_10 n)` and for comparing `O(1)` so 
final tc = `O(logn)` 

Space complexity: `O(1)`

---
