/*
Programa que ordena cantidades de descendente a ascendente
*/
#include<stdio.h>

int main()
{
	printf(" Introducir los  Numeros \n");
	int n1,n2,n3,c1;
	printf ("n1 =");
	scanf ("%d",&n1);
	printf ("n2 =");
	scanf ("%d",&n2);
	printf ("n3 =");
	scanf ("%d",&n3);
	if (n1<n2)
	{
		c1 = n1;
		n1 = n2;
		n2 = c1;
	}
	if (n2<n3)
	{
		c1 = n2;
		n2 = n3;
		n3 = c1;				
	}
	if (n1<n2)
	{
		c1 = n1;
		n1 = n2;
		n2 = c1;
	}
	if (n2<c1)
	{
		c1 = n2;
		n2 = n3;
		n3 = c1;
	}
		printf(" Los numeros dados que quedan de mayor a menor son los siguientes: \n");
	printf ("%d\n",n1);
	printf ("%d\n",n2);
	printf ("%d\n",n3);
	
	return 0;
}

