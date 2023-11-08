#include <stdio.h>
#include <stdlib.h>
// link: https://codeforces.com/group/rzjPIoqixu/contest/427860/problem/E
#define key(a) a
#define less(a, b) (key(a) < key(b))

typedef int Item;

void merge(Item *v, int l, int m, int r)
{
    Item *p = malloc(sizeof(Item)*(r-l+1));
    int ia=l, ib=m+1, iaux=0;

    while(ia <= m && ib <= r)
        if(less(v[ia], v[ib]))
            p[iaux++] = v[ia++];
        else
            p[iaux++] = v[ib++];
    while(ia <= m)
        p[iaux++] = v[ia++];
    while(ib <= r)
        p[iaux++] = v[ib++];
    iaux=0;
    for(ia=l; ia <= r; ia++)
        v[ia] = p[iaux++];
    free(p);
}

void merge_sort(Item *v, int l, int r)
{
    if(r <= l)
        return;
    int m = l+(r-l)/2;
    merge_sort(v, l, m);
    merge_sort(v, m+1, r);
    merge(v, l, m, r);
}

int main()
{
    int n, m, buffer;

    scanf("%d %d", &n, &m);

    int *v = calloc(sizeof(int), m);
    
    for(int i=0; i<n; i++){
        for(int k=0; k<m; k++){
            scanf("%d", &buffer);
            v[k] += buffer;
        }
    }
    merge_sort(v, 0, m-1);
    printf("%d\n", v[0]);
    free(v);
}
