#include<stdio.h>

int main()
{
	int a,b;
	float avg;
	printf("-----------MEDIA DI DUE VALORI-----------");
	
	printf("\ninserisci il primo valore: ");
	scanf("%d",&a);
	
	printf("\ninserisci il secondo valore: ");
	scanf("%d",&b);
	
	avg=(float)(a+b)/2;
	
	printf("\nla media di %d e %d e' %f",a,b,avg);
	
	return 0;
}
