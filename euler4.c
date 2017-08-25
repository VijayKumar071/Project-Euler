#include<stdio.h>
/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.*/
int palin(int n)
{
	 int rem=0,digit,no=n;
	 int rev;
	 while(n!=0)
	 {
	 	 digit=n%10;
	 	 rem=rem*10+digit;
	 	 n=n/10;
	 }
	 rev=rem;
	 if(no==rev)
	 return 1;
	 else return 2;
}
int main()
{
	int i,j;
	int max=100*100,yes;
	for(i=100;i<999;i++)
	{
		for(j=101;j<999;j++)
		{
			yes=palin(i*j);
			if(yes==1)
			{
				if(max<(i*j))
				max=i*j;
			}
		}
	}
	printf("Max=%d",max);
	return 0;
}
