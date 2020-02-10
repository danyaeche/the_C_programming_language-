/*
 * Write a function invert(x,p,n) that returns x with the n bits that begin at position p inverted
 * (i.e., 1 changed into 0 and vice versa),leaving the others unchanged.
 */

#include <stdio.h>

unsigned invert(unsigned x, int p, int n)
{
    unsigned a  =  ~((x >> (p + 1 - n)  &  ~(~0 << n)) << (p + 1 - n) );
    printf("%u\n", a);
    unsigned b = (x >> (p + 1)) << (p + 1);
    printf("%u\n", b);
    unsigned c = x & ((1 << n - 1) - 1);
    printf("%u\n", c);
    unsigned d = ((~0 << (n -1)) & a);
    printf("%u\n", d);
    unsigned e = ( ((d | c) << (32 - p - 1 )) >> (32 - p - 1 ));
    printf("%u\n", e);
    printf("%u\n", (e | b));
    return ((a & b) | c );

}

int main()
{
    unsigned x = 85;
    int p = 4;
    int n = 3;
    invert(x, p, n);

    return 0;
}