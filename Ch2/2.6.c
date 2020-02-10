/*
 * Write a function setbits(x,p,n,y) that returns x with the n bits that begin at position p
 * set to the rightmost n bits of y, leaving the other bits unchanged.
 */

#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    unsigned a = x >> (p + 1 - n) & ~(~0 << n); //101
    printf("%d\n", a);
    unsigned b = (x >> (p + 1)) << (p + 1); //1010000
    printf("%d\n", b);
    unsigned c =  x & (1 << ((p - n) - 1));//01
    printf("%d\n", c);
    unsigned d = (y & ((1 << n) - 1)) << (p + 1 - n);
    printf("%d\n", d);
    printf("%d\n", ((b | c) | d));
    return ((b | c) | d);

}

int main()
{
    int p = 5;
    int n = 4;
    unsigned x = 85;
    unsigned y = 63;

    setbits(x, p, n, y);

    return 0;

}