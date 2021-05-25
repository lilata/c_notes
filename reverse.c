#define _GNU_SOURCE
#include <stdio.h>
#define MAXLEN 1000

//
// a program that reverses it's input
//
void reverse(char s[], int length);
int my_getline(char to[], int limit);

int
main()
{
    char line[MAXLEN];
    int len;
    while((len = my_getline(line, MAXLEN)) > 0) {
        reverse(line, len);
        printf("%s", line);
    }
    return 0;
}

void
reverse(char s[], int len)
{
    if(len <= 1)
        return;
    int i;
    char reversed[len];
    for(i = len; i > 0; --i) {
        reversed[len-i] = s[i - 1];
    }
    reversed[len] = '\0';
    for(i = 0; i < len; ++i) {
        s[i] = reversed[i];
    }
}

int
my_getline(char to[], int limit)
{
    int i;
    char c;
    for(i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        to[i] = c;
    }
    /*
    if (c == '\n') {
        to[i] = c;
        ++i;
    }
    */
    to[i] = '\0';
    return i;
}
