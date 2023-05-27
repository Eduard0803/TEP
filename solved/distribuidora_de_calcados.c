#include <stdio.h>
#include <stdlib.h>
// link: https://codeforces.com/group/JDDLXp8GNX/contest/428079/problem/C
#define key(a) a.id
#define less(a, b) (key(a) < key(b))

typedef struct{
    int id, q;
}Item;

void merge(Item *v, int l, int m, int r)
{
    Item *s = malloc(sizeof(Item)*(r-l+1));
    int ia=l, ib=m+1, iaux=0;

    while(ia <= m && ib <= r)
    {
        if(less(v[ia], v[ib]))
            s[iaux++] = v[ia++];
        else
            s[iaux++] = v[ib++];
    }
    while(ia <= m)
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
    if(r <= l)
        return;
    int m = l+(r-l)/2;
    merge_sort(v, l, m);
    merge_sort(v, m+1, r);
    merge(v, l, m, r);
}

int binary_search(Item *v, int x, int l, int r)
{
    if(r < l)
        return -1;
    int m = l+(r-l)/2;
    if(x < key(v[m]))
        return binary_search(v, x, l, m-1);
    if(x > key(v[m]))
        return binary_search(v, x, m+1, r);
    return m;
}

int main()
{
    int n_models, n_pedidos, control=0, bs;

    scanf("%d", &n_models);
    Item models[n_models];

    for(int i=0; i<n_models; i++)
        scanf("%d %d", &models[i].id, &models[i].q);
    
    scanf("%d", &n_pedidos);
    Item buffer;

    for(int i=0; i<n_pedidos; i++){
        scanf("%d %d", &buffer.id, &buffer.q);
        bs = binary_search(models, buffer.id, 0, n_models-1);
        if(bs == -1 || buffer.q > models[bs].q)
            control++;
        else
            models[bs].q -= buffer.q;
    }
    if(control)
        printf("Nao\n");
    else
        printf("Sim\n");
    return 0;
}
