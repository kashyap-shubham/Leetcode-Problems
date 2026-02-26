# Reverse Integer — Notes

## Things to Learn

1. In C++, `INT_MAX` and `INT_MIN` are defined in `<climits>`:
   - `INT_MAX = 2³¹ − 1 = 2147483647`
   - `INT_MIN = −2³¹ = −2147483648`

2. These limits exist because integers are stored using **32-bit 2's complement representation**.

3. Range of 32-bit signed integer: **-2^31 to 2^31 - 1**

4. Key property of 2's complement:
- Only one representation of zero
- Negative range has one extra value
- Overflow occurs if value goes outside this range

5. Important insight:
- Overflow must be checked **before multiplying**, not after.

---

## First Principle Approach

### Idea

Reverse the number using modulo (`%`) and division (`/`), then check whether the final reversed number lies within the integer range.

### Algorithm

1. Extract last digit using `% 10`
2. Append digit using `rev = rev * 10 + digit`
3. Repeat until number becomes 0
4. Check if result lies between `INT_MIN` and `INT_MAX`

### Time and Space complexity

Time complexity:  For converting a number in reverse `O(log_10 n)` and for comparing `O(1)` so 
final tc = `O(logn)` 

Space complexity: `O(1)`

---

## Optimal Approach

### Idea

The naive approach may cause overflow during `rev = rev * 10 + digit` before checking the integer range.  
To prevent this, we check whether multiplying the current reversed number by 10 will exceed the 32-bit signed integer range \[-2³¹, 2³¹−1] before performing the operation.

We use safe boundary checks:

- If `rev > INT_MAX / 10` → overflow will occur  
- If `rev == INT_MAX / 10` and `digit > 7` → overflow will occur  
- If `rev < INT_MIN / 10` → overflow will occur  
- If `rev == INT_MIN / 10` and `digit < -8` → overflow will occur  

If any condition is true, return 0. Otherwise, safely update the reversed number.

### Algorithm

1. Initialize `rev = 0`
2. Extract last digit using `% 10`
3. Remove last digit using `/ 10`
4. Check overflow conditions before multiplying:
   - If `rev > INT_MAX / 10` → return 0  
   - If `rev == INT_MAX / 10` and `digit > 7` → return 0  
   - If `rev < INT_MIN / 10` → return 0  
   - If `rev == INT_MIN / 10` and `digit < -8` → return 0  
5. Append digit using `rev = rev * 10 + digit`
6. Repeat until number becomes 0
7. Return `rev`

### Time and Space complexity

Time complexity: For reversing the number we process each digit once, and number of digits in n is `O(log₁₀ n)`, so  
final tc = `O(logn)`

Space complexity: `O(1)`
