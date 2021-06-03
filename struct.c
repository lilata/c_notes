#include<stdio.h>
struct point {
    int x;
    int y;
}


main(){

    struct point maxpt = {320, 200};
    printf("max point: %d, %d\n", maxpt.x, maxpt.y);
}
