#include <stdio.h>

void tamC(int a[], int b[], int tamA, int tamB, int *tamC);

int main(void)
{
    int i, size, sizeA, sizeB, sizeC, vetA[]={10,20,3,2,70}, vetB[]={1,2,3,5,80}, vetC[0];

    sizeA=sizeof(vetA)/sizeof(vetA[0]);
    sizeB=sizeof(vetB)/sizeof(vetB[0]);

    tamC(vetA, vetB, sizeA, sizeB, &sizeC);
}

void tamC(int a[], int b[], int tamA, int tamB, int *tamC)
{
    int i, j, sum=0, maior;
    if(tamA>tamB){
        maior=tamA;
    }else{
        maior=tamB;
    }

    for(i=0;i<maior;i++){
        for(j=0;j<maior;j++){
            if(a[i]==b[j]){
                sum++;
            }
        }
    }

    int c[sum];

    for(i=0;i<maior;i++){
        for(j=0;j<maior;j++){
            if(a[i]==b[j]){
                c[i]=a[i];
            }
        }
    }
}
