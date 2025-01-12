#include <stdio.h>
int main(void)
{
    int n;
    for (n = 0; n < 10; n++)
            printf("%d %d\n", n, 2 * n + 1);
    return 0;
}