#include <stdio.h>

typedef struct OLnode
{
    int i,j;
    int e;
    struct OLnode *down,*right;
}OLNode,*OLink;

typedef struct
{
    int mu,nu,tu;
    OLink *rhead,*chead;
}CrossList;



int main() {
    printf("Hello, World!\n");
    return 0;
}
