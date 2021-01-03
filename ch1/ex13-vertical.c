#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXHIST 15
#define MAXWORD 11


int main()
{
    int c, i, j, nc, state, maxvalue, overflow;
    int wl[MAXWORD];
    nc = maxvalue = overflow = 0;
    state = OUT;
    
    for (i = 0; i < MAXWORD; ++i)
        wl[i] = 0;
    
    
    while ((c = getchar() ) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
            if (nc > 0)
                if (nc < MAXWORD)
                    ++wl[nc];
                else
                    ++overflow;
            nc = 0;
        } else if (state == OUT) {
            state = IN;
            nc = 1;
        } else
            ++nc;
    }
    
    for (i = 1; i < MAXWORD; ++i) {
        if (wl[i] > maxvalue)
            maxvalue = wl[i];
    }
    
    
    for (i = MAXHIST; i > 0; --i) {
        for (j = 1; j < MAXWORD; ++j) {
            if (wl[i] * MAXHIST / maxvalue >= i)
                printf(" * ");
            else
                printf("   ");
        }
        putchar('\n');
    }
    
    for (i = 1; i < MAXWORD; ++i)
        printf("%4d ", i);
    putchar('\n');
    for (i = 1; i < MAXWORD; ++i)
        printf("%4d ", wl[i]);
    putchar('\n');
    if (overflow > 0)
        printf("There are %d words >= %d\n", overflow, MAXWORD);
}
