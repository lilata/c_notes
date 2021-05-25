#include <stdio.h>
#include <string.h>
#define MAXLEN 15

void inplace_reverse(char s[]);

int
main()
{
    char s[MAXLEN], c;
    int i;
    for(i = 0; i < MAXLEN - 1; ++i) {
        s[i] = i + 'a';
    }
    s[MAXLEN - 1] = '\0';
    inplace_reverse(s);
    printf("%s", s);
}

void
inplace_reverse(char s[])
{
    int i, j, len;
    char c;
    len = strlen(s);
    for(i = 0, j = len - 1; i < j; ++i, --j) {
        c = s[i], s[i] = s[j], s[j] = c;
    }
}
