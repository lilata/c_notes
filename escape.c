#include <stdio.h>
#define MAXLEN 1000
#define ECPLEN 2000
int escape(char to[], char from[]);

int
main()
{
    char in[MAXLEN];
    char out[ECPLEN];
    char input;
    int i;
    for(i = 0; (input = getchar()) != EOF && i < MAXLEN - 1; ++i) {
        in[i] = input;
    }

    escape(out, in);
    printf("%s", out);
}

int
escape(char to[], char from[])
{

    int i;
    char c;
    for(i = 0; from[i] != '\0'; ++i) {
        c = from[i];
        switch(c) {
            case '\n':
                to[i++] = '\\';
                to[i] = 'n';
                break;
            default:
                to[i] = c;
                break;
        }
    }
}
