// WAP TO GET NBITS FROM GIVEN POS ?

#include <stdio.h>

int main()
{
    int num, n,pos;
    scanf("%d %d %d", &num, &n, &pos);
    
    //mask 
    int mask = (1<<n)-1;
    mask = mask << pos/2;
    int res = num & mask;
    res = res >> pos/2;
    printf("The nbits from the given pos is %d", res);
    return 0;
}
