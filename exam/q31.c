#include<stdio.h>

int mystery(int p, int q){
     
    int r;
    //printf("%d\n", p % q);
    if ((r = p % q) == 0)
        return q; 
    else return mystery(q, r);
}

int main(void)
{
    printf("result = %d\n", mystery(2,6));
}