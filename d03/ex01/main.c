#include <stdio.h>

void	ft_ultimate_ft (int *********a);

int		main(void)
{
	int a = 0;
	
	int* nbr = &a;
	int** nbr1 = &nbr;
	int*** nbr2 = &nbr1;
	int**** nbr3 = &nbr2;
	int***** nbr4 = &nbr3;
	int****** nbr5 = &nbr4;
	int******* nbr6 = &nbr5;
	int******** nbr7 = &nbr6;
	int********* nbr8 = &nbr7;
	ft_ultimate_ft(nbr8);
	printf("%d\n", ***nbr8);

	return (0);
}