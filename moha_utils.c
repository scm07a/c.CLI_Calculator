#include <stdio.h>

void wait_usr(){
    printf("\nPress Enter To Continue...\n\n");
    getchar();
}

void flush_buff(){
    int c;
    while ((c=getchar())!='\n'&& c!=EOF);
}

int mem_lim(int n)
{
    if (n > 999)
    {
        n = 999;
        printf("\nMaximum Capacity Reached!\n");
    }
    return n;
}
