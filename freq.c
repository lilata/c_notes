#include <stdio.h>
#define MAX_CNT 10000

//
// a program that counts the character frequency of its ascii input
//

main()
{
    int cl[128];
    char c;
    int v;
    for(int i = 0; i < 128; ++i) {
        cl[i] = 0;
    }
    while((c = getchar()) != EOF) {
        cl[c] += 1;
    }
    for(int i = 0; i < 128; ++i) {
        v = cl[i];
        if(v > 0) {
            printf("%c: ", i);
            for(int j = 0; j < v; ++j)
                printf("|");
            printf("\n");
        }
    }
}
