#include <stdio.h>

#define MAXLEN 1000
#define LONGLINE 80


int readline(char line[], int lim);

int main()
{
    int len, i;
    char line[MAXLEN];
    
    for (i = 0; i < MAXLEN; ++i)
    line[i] = 0;
    
    while ((len = readline(line, MAXLEN)) != EOF)
        if (len > LONGLINE)
            printf("%s\n", line);
        
}

int readline(char s[], int lim)
{
    int c, i, j;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i - 1;
}
