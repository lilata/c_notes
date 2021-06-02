#include<stdio.h>
void my_strcpy(char *s, char *t)
{
    while(*s++ = *t++)
    ;
}


main()
{
    char a[] = "yes";
    char b[3];
    my_strcpy(b, a);
    printf("%s\n", b);
}
