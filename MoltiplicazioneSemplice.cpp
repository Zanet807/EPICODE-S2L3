#include<stdio.h>

int main()
{
	int a,b,mult;
	printf("-----------MOLTIPLICAZIONE DI DUE VALORI-----------");
	
	printf("\ninserisci il primo valore: ");
	scanf("%d",&a);
	
	printf("\ninserisci il secondo valore: ");
	scanf("%d",&b);
	
	mult=a*b;
	
	printf("\nla moltiplicazione di %d e %d e' %d",a,b,mult);
	
	return 0;
}
