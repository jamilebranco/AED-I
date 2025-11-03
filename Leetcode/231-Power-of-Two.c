/*
====================
231. Power of Two

Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2^x.
====================
*/

bool isPowerOfTwo(int n) {

    if ( n <= 0 )
        return false;

    int i = 1;

    while ( i <= n ) {
        if ( i == n )
            return true;
        
        // evita overflow antes de multiplicar
        if ( i > n / 2 )
            break;
            
            i = i * 2;
        
    }

    return false;
}