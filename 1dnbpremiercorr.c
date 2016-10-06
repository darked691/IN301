#include <stdio.h>

int main(int argc, char **argv)
{int a,i;
	scanf("%d",&a);
	i=2;
	while(i*i<a)
	{i++;
		if(a%i==0)
		{printf("faux");
			return 0;}
	}
	printf("Vrai");
	return 0;
}

