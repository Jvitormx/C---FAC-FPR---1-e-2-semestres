#include <stdio.h>

void func(int a[], int b[], int c[], int tamA, int tamB, int tamC);

int main(void)
{
    int i, size, sizeA, sizeB, sizeC, vetA[]={1,2,3,4,5,88}, vetB[]={6,7,8,9,20};

    sizeA=sizeof(vetA)/sizeof(vetA[0]);
    sizeB=sizeof(vetB)/sizeof(vetB[0]);
    sizeC=sizeA+sizeB;

    int vetC[sizeC];

    func(vetA, vetB, vetC, sizeA, sizeB, sizeC);

    for(i=0;i<sizeC;i++){
        printf("%d ", vetC[i]);
    }

}

void func(int a[], int b[], int c[], int tamA, int tamB, int tamC)
{
    int i, j, aux;
    for(i=0;i<tamA;i++){
        c[i]=a[i];
    }

    printf("\n\n");

    for(j=i, aux=0;j<tamB*2;j++, aux++){
        c[j]=b[aux];
    }
}
