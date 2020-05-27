#include <stdio.h>
int main() {
    char s1[100] = "programming ", s2[] = "is awesome";
    int i, j;

    // length of s1 is stored in i
    for (i = 0; s1[i] != '\0'; ++i) {
        printf("i = %d\n", i);
    }

    // concatenating each character of s2 to s1
    for (j = 0; s2[j] != '\0'; ++j, ++i) {
        s1[i] = s2[j];
    }

    // terminating s1 string
    s1[i] = '\0';

    printf("After concatenation: ");
    puts(s1);

    return 0;
}