#include<stdio.h>
#include<string.h>
#define YES 1
#define No 1

int htoi(char s[])
{
    int i = 0;

    if (s[i] == '0')
    {
        ++i;
    }

    if (s[i] == 'x' || s[i] == 'X')
    {
        ++i;
    }

    int n = 0;
    int hexdigit;

    for(; i < strlen(s); ++i ) {
        if (s[i] >= '0' && s[i] <= '9'){
            hexdigit = s[i] - '0';
            n = 16 * n + hexdigit;
        }
        if (s[i] >= 'A' && s[i] <= 'F'){
            hexdigit = s[i] - 'A' + 10;
            n = 16 * n + hexdigit;
        }
        if (s[i] >= 'a' && s[i] <= 'f'){
            hexdigit = s[i] - 'a' + 10;
            n = 16 * n + hexdigit;
        }
    }
    printf("%d", n);
    return n;

}

int main()
{

    char a[] = "0x7DF";
    htoi(a);

    return 0;
}