class Solution {
public:
    int fib(int n) {

        // first principle approach
        // if (n == 0 || n == 1) {
        //     return n;
        // }

        // return fib(n-1) + fib(n-2);


        // better approach

        int a = 0, b = 1;
        if (n <= 1) return n;

        for (int i = 2; i <= n; i++) {
            int temp = b;
            b = a + b;
            a = temp;
        }

        return b;

    }
};