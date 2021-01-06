#include <stdio.h>

#define MAXLEN 1000

int readline(line[], lim);
void copy(to[], from[]);

int main()
{
    int len, max;
    char line[MAXLEN];
    char longest[MAXLEN];
    
    max = 0;
    while ((len = readline(line, MAXLEN)) > 0) {
        if len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)
        prinf("%s", longest);
}

int readline(s[], lim)
{
    int c, i;
    for (i = 0; (c = getchar()) != EOF && i < lim - 1 && c !='\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = '\n';
        ++i;
    }
    s[i] = '\0';

    return i;
}

void copy(to[], from[])
{
    int i;
    for (i = 0; (to[i] = from[i]) != '\0'; ++i)
    ;
}
