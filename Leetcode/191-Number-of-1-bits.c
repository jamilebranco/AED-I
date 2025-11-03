/*
====================
191. Number of 1 bits
Given a positive integer n, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight)
====================
*/

int hammingWeight(int n) {
    int i = 0;

    while ( n != 0 ) {
        i = i + ( n & 1 );
        n = n >> 1;
    }

    return i;
}