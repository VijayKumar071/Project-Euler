#include<stdio.h>
#include<conio.h>
#include<Math.h>
int main()
{

double n = 600851475143;

double nn=sqrt(n);
int i;
for (i=2;i<nn;i++)
    while((int)n%i == 0)
       {
		 n = n/i;
        
    print("%d",i);
}
return 0;
}
