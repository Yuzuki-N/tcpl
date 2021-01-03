#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXWORD 11
#define MAXHIST 15

int main()
{
    int c, i, nc, state, overflow;
    int wl[MAXWORD];
    nc = overflow = 0;
    state = OUT;
    
    for (i = 0; i < MAXWORD; ++i) {
        wl[i] = 0;
    }
    
    while ((c = getchar() ) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
            if (nc > 0) {
                ++wl[nc];
            } else {
                ++overflow;
            }
        } else if (state == OUT) {
            state = IN;
            nc = 1;
        } else {
            ++nc;
        }
    }
    
    int maxvalue = 0;
    
    for (i = 1; i < MAXWORD; ++i) {
        if (wl[i] > maxvalue)
            maxvalue = wl[i];
    }
    
    for (i = 1; i < MAXWORD; i++) {
        printf("%5d - %5d: ", i, wl[i]);
        int len = 0;
        if (wl[i] > 0)
            if ((len = wl[i] * MAXHIST / maxvalue) <= 0)
                len = 1;
            
        
        while (len > 0) {
            --len;
            putchar('*');
        }
        putchar('\n');
    }
    if (overflow > 0)
        printf("%d number word larger than MAXWORD", overflow);
}
