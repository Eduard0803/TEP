#include <stdio.h>
#include <math.h>
link: https://codeforces.com/group/JDDLXp8GNX/contest/460398/problem/C
int main() {
    int L, BS_HP, IV_HP, EV_HP, BS_AT, IV_AT, EV_AT, BS_DF, IV_DF, EV_DF, BS_SP, IV_SP, EV_SP;
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d", &L, &BS_HP, &IV_HP, &EV_HP, &BS_AT, &IV_AT, &EV_AT, &BS_DF, &IV_DF, &EV_DF, &BS_SP, &IV_SP, &EV_SP);
 
    int HP = ((IV_HP + BS_HP + sqrt(EV_HP) / 8 + 50) * L) / 50 + 10;
    int AT = ((IV_AT + BS_AT + sqrt(EV_AT) / 8) * L) / 50 + 5;
    int DF = ((IV_DF + BS_DF + sqrt(EV_DF) / 8) * L) / 50 + 5;
    int SP = ((IV_SP + BS_SP + sqrt(EV_SP) / 8) * L) / 50 + 5;
 
    printf("%d %d %d %d\n", HP, AT, DF, SP);
 
    return 0;
}