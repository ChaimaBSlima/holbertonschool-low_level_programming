#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int lastdight(int n){
    while (n>10){
        n=n%10;
    }
    return (n);
}

int main(void)
{
	int n;
    int a;
    /*
	* A random value stored on the variable n
	*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
    a= lastdight(abs(n));
    if (a>5)
    {
        printf("Last digit of %d is %d and is greater than 5\n",n,a);
    }
    else if((a<6) && (a>0))
    {
        printf("Last digit of %d is %d and is less than 6 and not 0\n",n,a);
    }
    else if(a<0)
    {
        printf("Last digit of %d is -%d and is less than 6 and not 0\n",n,a);
    }
    else{
        printf("Last digit of %d is 0 and is 0\n",n);
    }
    return(0);
}
