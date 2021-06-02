#include <stdio.h>
#define forever for (;;)
#define max(A, B) ((A) > (B) ? (A):(B))
main() {
    printf("%d", max(3,4));
    forever {
        printf("aa");
    }
}
