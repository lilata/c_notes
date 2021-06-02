#include<stdio.h>
#define swap(t, x, y) {t temp = x; x = y; y = temp;}
int
main()
{
    int x = 1;
    int y = 2;
    swap(int, x, y);
    printf("%d, %d\n", x, y);
}
