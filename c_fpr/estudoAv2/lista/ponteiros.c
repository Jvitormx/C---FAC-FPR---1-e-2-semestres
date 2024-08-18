#include <stdio.h>


int main(void)
{
	//declaração de variáveis
	int v[5] = {1,2,3,4,5};
	int *y;
	int i;

	y = v;

	for (i=0;i<5;i++)
	{
		printf ("%p %d\n", y, *y);
		y++;
	}
}
