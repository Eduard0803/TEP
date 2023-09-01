#include <stdio.h>
#define MAX 10000
// link: https://vjudge.net/problem/HackerRank-playing-with-characters/origin
char str[MAX];
int main(){
    scanf(" %c", &str[0]);
    printf("%c\n", str[0]);

    scanf(" %s", str);
    printf("%s\n", str);

    scanf(" %[^\n]", str);
    printf("%s\n", str);
}
