#include <stdio.h>
int main()
{
    int billamt,amtgiven;
    int Remainder,Quotient;
    scanf("%d",&amtgiven);
    scanf("%d",&billamt);
    Quotient = amtgiven/billamt;
    Remainder =amtgiven%billamt;
    printf("Quotient:%d",Quotient);
    printf("\nRemainder:%d",Remainder);
 
	return 0;
}
