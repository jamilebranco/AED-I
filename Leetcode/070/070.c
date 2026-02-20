// 70. Climbing Stairs
// (basically Fibonacci)
// f(n) = f(n-1) + f(n-2)

int climbStairs(int n) {
    int ways;
    int ant1 = 1;   // f(1)
    int ant2 = 2;   // f(2)

    if (n <= 2) {
        return n;
    }

    for (int i = 3; i <= n; i++) {
        ways = ant1 + ant2;
        ant1 = ant2;
        ant2 = ways;
    }

    return ways;
}