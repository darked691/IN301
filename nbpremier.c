#include <stdio.h>

int main(int argc, char **argv)
{int n,i,a;
	
	scanf("%d",&n);
	for(i=2;i<10;i++)
	{a=n%i;
			if(a==0)
			{printf("non premier");
				printf("\n");}
			else
			{printf("premier");
				printf("\n");}
}
	return 0;
}

