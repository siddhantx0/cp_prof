#include <stdio.h>

void update(int *a, int *b)
{
    // * --> value OR make pointer.
    // & --> address.
    int tempA = *a; // Store original value of a
    *a = *a + *b;   // Update a to be the sum of a and b
    *b = tempA - *b;
    if (*b < 0)
        *b = (*b * -1);
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    update(pa, pb);
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
