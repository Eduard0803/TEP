#include <stdio.h>
#include <math.h>

int main()
{
    int raio;
    double lado, area;

    scanf("%d", &raio);

    area = 3.1415926*raio*raio;

    lado = sqrt(area);

    printf("%lf\n", lado);
}
