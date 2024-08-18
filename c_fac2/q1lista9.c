#include <stdio.h>

void func(int c, int d, int num);

int main(void)
{
    int a, b, n;
    printf("a: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d", &b);
    printf("n: ");
    scanf("%d", &n);

    func(a, b, n);

}


void func(int c, int d, int num)
{
    int i;
    for(i=c;i<=d;i++){
        if(i%num==0){
            printf("%d ", i);
        }
    }
}
