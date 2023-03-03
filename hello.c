#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	int x, y, z;
	x = a/100;
	z = a%10;
	y = a%100/10;
	printf("%d", x + y *10  + z * 100);
	return 0;
}
