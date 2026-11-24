#include <stdio.h>
#include <stdlib.h>
int main(void) { const unsigned char *f=(const unsigned char*)getenv("FLAG"); if(!f) return 0; fputs("FLAG_HEX=", stdout); for(;*f;f++)printf("%02x",*f); putchar('\n'); return 0; }
