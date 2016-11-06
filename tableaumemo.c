#include <stdio.h>
#include <time.h>
struct tab
 {int t[100];
	 int p;
 };
 typedef struct tab tableau;
int alea_int(int n)
{
	int i=rand()%n;
	return i;
}

tableau init_tab()
{ tableau t;
	int i;
t.p=10;
t.t[8]=alea_int(20);
	for(i=0;i<10;i++)
		{t.t[i]=alea_int(20);}
	return t;
		
}
tableau affiche()
{tableau t;
	int i;
	for(i=0;i<10;i++)
{printf("%d ",t.t[i]);
}
return t;
}
int produit(tableau t)
{
	int i,prod;
	prod=1;
	t.p=10;
	for(i=0;i<10;i++)
		{prod=prod*t.t[i];}
	return prod;

}
int minimum(tableau t)
{int s,i;
	s=0;
	for(i=1;i<10;i++)
	{
		if(t.t[s]>t.t[i])
		{s=i;}
    }
	return t.t[s];
    
}
tableau decal(tableau t)
{int i,n,s;
	n=9;
	
	for(i=9;i>1;i--)
    {   s=0;
		s=t.t[i-1];
		if(i%2==1)
		t.t[i-1]=t.t[i];
		if(i%2==0)
		s=t.t[i];
	}
	n=n+1;
	t.t[n]=0;

	return t;
}
 tableau tri (tableau t)
 {int i,s;
	s=0;
	i=0;
	 while(i<t.p)
	{ 
		s=minimum(t);
		t.t[i]=s;
		i++;
	}
		return t;
	}
tableau dec(tableau t)
{
	int i;
	int m=t.t[0];
	if(t.p+1>100) return t;
	for(i=t.p;i>=0;i--)
		t.t[i+1]=t.t[i];
		t.t[0]=0;
		t.p++;
		printf("\n");
 for(i=0;i<10;i++)
 {printf(" %d ",t.t[i]);}
 return t;
}
tableau alea1(tableau t){
	int i,j;
	j = alea_int(t.p);
	for (i=j; i < t.p; i++){
		t.t[i] = t.t[i + 1];
	}
	t.p --;
	t.t[t.p]=0;
			printf("\n");
 for(i=0;i<10;i++)
 {printf(" %d ",t.t[i]);}
	return t;
}
tableau doublons(tableau t){
	int TC,i,temp,p;
	for(TC = 0; TC < t.p; TC++){
		for(p = TC + 1; p < t.p; p++)
			if (t.t[p] == t.t[TC]){
				for (i=p; i < t.p; i++)
					t.t[i] = t.t[i + 1];	
				t.p--; p--;}
	}
		printf("\n");
 for(i=0;i<10;i++)
 {printf(" %d ",t.t[i]);}

	return t;	
	
}
	
tableau insertri(tableau t, int e){
	int TC,i,k;
	TC=t.t[t.p-1];
	if(t.p == 0){
		t.p = 1;
		t.t[0] = e;}
		
	else {
		i = 0;
		while(i < t.p && t.t[i] < e) i++;
		if(i == t.p && t.t[i] < e) k = t.p + 1;
		else k = i;
		
		for(i =t.p; i >= k; i--)
			t.t[i] = t.t[i-1];
		t.t[k] = e;
		t.p++;		
	}
	
	printf("\n");
 for(i=0;i<10;i++)
 {printf(" %d ",t.t[i]);}
	return t;
}
int main(int argc, char **argv)
{int prod,min,i;
	prod=1;
	min=0;
	srand(time(NULL));
tableau t;
t=init_tab();
//~ t=affiche();
//~ printf("%d",t.t[0]);
 //~ prod=produit(t);
 //~ min=minimum(t);
 //~ printf("%d\n",min);
 for(i=0;i<10;i++)
 {printf(" %d ",t.t[i]);}
  t=doublons(t);
 
 
	//~ printf("%d\n",alea_int(60));
	//~ printf("%d\n",alea_int(60));
	//~ printf("%d\n",alea_int(60));
	//~ printf("%d\n",alea_int(60));
	return 0;
}



