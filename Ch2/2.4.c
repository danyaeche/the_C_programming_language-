#include <stdio.h>
#include <string.h>

void squeeze(char s1[], char s2[]){

    int i, j, k;

    for( i = j = 0; s1[i] != '\0'; ++i) {
        if (s1[i] != s2[i]){
            s1[j++] = s1[i];
        }
        s1[j] = '\0';
    }

    printf("%s", s1);
}

int main()
{
    char s1[] = "Thisabc";

    char s2[] = "Thisxyz";

    squeeze(s1, s2);

    return 0;
}
