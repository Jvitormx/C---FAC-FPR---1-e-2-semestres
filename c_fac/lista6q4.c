#include <stdio.h>
#include <limits.h>

int main(void)
{
    int sal, numF, maiorSal=INT_MIN, contNumF=0, contSal=0, contPerc=0;
    float mediaSal, mediaNumF, pessoasPerc;
    for(int i=0;i<5;i++)
    {
        scanf("%d", &sal);
        if(sal>maiorSal){
            maiorSal=sal;
        }
        contSal+=sal;

        if(sal<=1000){
            contPerc++;
        }

        scanf("%d", &numF);
        contNumF+=numF;
    }
    mediaSal=contSal/(float)5;
    mediaNumF=contNumF/(float)5;
    pessoasPerc=(contPerc/(float)100)*100;

    printf("%d\n", maiorSal);

    printf("%.2f\n", mediaSal);

    printf("%.2f\n", mediaNumF);

    printf("%.2f\n", pessoasPerc);

}