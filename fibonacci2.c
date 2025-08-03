//seudo code for fibonacci seris
#include<stdio.h>
int main() {
    int i, n = 8, t1 = 0, t2 = 1, t3, temp;

    printf("%d\t%d\t", t1, t2);

    for(i = 3; i <= n; i++)
    {
        t3 = t1 + t2;
        
        printf("%d\t", t3);
        t1 = t2;
        t2 = t3;
    }
    return 0;
}

