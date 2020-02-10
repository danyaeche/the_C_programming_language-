#include <stdio.h>


int any(char s1[], char s2[])
{
    int i, j;

    int pos = -1;

    for (i = 0; s1[i] != '\0'; ++i) {

        if (pos != -1) {
            break;
        }

        for (j = 0; s2[j] != '\0'; ++j){

            if (s2[j] == s1[i]) {
                pos = i;
                break;
            }
        }
    }

    return pos;

}

int main()
{
    char s1[] = "ajwepwpoej";
    char s2[] = "scksdmccsdp";
    printf("%d", any(s1, s2));
    return 0;
}


