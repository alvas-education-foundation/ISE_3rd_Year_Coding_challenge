A pointer in C is a way to share a memory address among different contexts (primarily functions). They are primarily used whenever a function needs to modify the content of a variable, of which it doesn't have ownership.

#include <stdio.h>

void update(int *a,int *b) {
    if(*a>*b){
    *b = *a-*b;
    *a = *a -*b +*a;
}
else {
    *b = *b-*a;
    *a = *a + *b + *a;
}
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}