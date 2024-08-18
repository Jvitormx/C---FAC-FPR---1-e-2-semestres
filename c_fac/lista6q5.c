#include <stdio.h>

int main(void)
{
    int n;
    float var, val, somaVal=0, varTotal=0, media;

    scanf("%d" &n);
    for(int i=0;i<n;i++)
    {
        scanf("%f" &var);
        scanf("%f", &val);
        somaVal+=val;
        varTotal+=(var*val);
    }
    media=varTotal/somaVal;
    printf("%f", media);
}