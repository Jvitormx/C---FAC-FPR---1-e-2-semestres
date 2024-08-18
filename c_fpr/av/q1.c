#include <stdio.h>

int func(int a, int b);

int main(void)
{
    printf("%d\n", func(15,3));
}

/*15 3

15+ 14 4
14+ 13 5
13+ 12 6
12+ 11 7
11+ 10 8
10+ 9 9
9+ 10-8*/

int func(int a, int b)
{
    if(a>=b)
    {
        return a+func(a-1,b+1);
    }else{
        return b-a;
    }
}
