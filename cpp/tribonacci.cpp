class Solution {
public:
    // The Tribonacci sequence Tn is defined as follows:
    // T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.
    // Given n, return the value of Tn.
    int tribonacci(int n) {

        // initial values
        int F[38];
        F[0] = 0;
        F[1] = 1;
        F[2] = 1;

        // find tribonacci numbers up to n
        for (int i = 0; i <= n - 3; i++) {
            F[i + 3] = F[i] + F[i + 1] + F[i + 2];
        }
        return F[n];
    }
};
