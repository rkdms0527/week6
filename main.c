#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b)
{
	return (a+b);
}

int get_max(int a, int b)
{
	if (a>b)
	else
		return b;
}

int square(int a)
{
	return (a*a);
}



int main(int argc, char*argv[]) {
	
	printf("sumTwo : %i\n", sumTwo(1,2));
	printf("get_max : %i\n", get_max(4,6));
	printf("square : %i\n", square(7));	
	return 0 ;
}
