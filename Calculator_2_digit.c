#include<stdio.h>
#include<stdlib.h>

int main()
{
int first_digit,second_digit;
char operation;
printf(" first_digit");
scanf("%d",&first_digit);
printf("\n operation:");
scanf(" %c",&operation);
printf("\n second_digit");
scanf("%d",&second_digit);
int result ;
if (operation == "+")
result = first_digit + second_digit;
else if (operation == '-')
result = first_digit - second_digit;
else if (operation == '*')
result = first_digit * second_digit;
else if (operation == '/')
result = first_digit / second_digit;
else { 
printf( "invail operation\n" ) ;
return 0;
}

printf( "Anser is :\n %d",result);
 
}