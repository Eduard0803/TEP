#include <stdio.h>
#include <stdlib.h>
#define key(a) a
#define less(a, b) (key(a) < key(b))
#define exch(a, b) {Item t=a; a=b; b=t;}
typedef int Item;
// link: https://vjudge.net/problem/AtCoder-abc066_a/origin
void merge(Item *v, int l, int pivo, int r)
{
    Item *s = malloc(sizeof(Item)*(r-l+1));
    int ia=l, ib=pivo+1, iaux=0;

    while(ia <= pivo && ib <= r)
    {
        if(less(v[ia], v[ib]))
            s[iaux++] = v[ia++];
        else
            s[iaux++] = v[ib++];
    }
    while(ia <= pivo)
        s[iaux++] = v[ia++];
    while(ib <= r)
        s[iaux++] = v[ib++];
    iaux=0;
    for(ia=l; ia<=r; ia++)
        v[ia] = s[iaux++];
    free(s);
}

void merge_sort(Item *v, int l, int r)
{
    if(l >= r)
        return;
    int m = l+(r-l)/2;
    merge_sort(v, l, m);
    merge_sort(v, m+1, r);
    merge(v, l, m, r);
}

int main()
{
    Item v[3];
    scanf("%d %d %d", &v[0], &v[1], &v[2]);
    merge_sort(v, 0, 2);
    printf("%d\n", v[0]+v[1]);
}
