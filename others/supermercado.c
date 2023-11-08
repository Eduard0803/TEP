#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d", &n);

    float price[n], buffer_price;
    int peso[n];

    scanf("%f %d", &price[0], &peso[0]);

    float low_price = 1.0*price[0]/peso[0];

    for(int i=1; i<n; i++){
        scanf("%f %d", &price[i], &peso[i]);
        buffer_price = 1.0*price[i]/peso[i];
        if(low_price > buffer_price)
            low_price = buffer_price;
    }
    printf("%.2f\n", low_price*1000);
}
