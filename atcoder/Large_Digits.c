#include <stdio.h>
// link: https://vjudge.net/problem/AtCoder-abc187_a/origin
int main(){
    char n1[5], n2[5];
    int s1=0, s2=0;
    
    scanf(" %s %s", n1, n2);
    
    for(int i=0; i<3; ++i){
        s1 += n1[i] - 48;
        s2 += n2[i] - 48;
    }
    printf("%d\n", (s1 > s2 ? s1 : s2));
}
