#include<stdio.h>

int multiplicationofnumber(int a);

int main()
{

int number;
int multiply=1;

printf("ENTER ANY NUMBER: ");
scanf("\n%d" ,&number);
multiply=multiplicationofnumber(number);

printf("%d", multiply);

    return 0; 

}
int multiplicationofnumber(int a)

{
int multiply=1;
for(int i=1; i<a; i++)
{

multiply *=1;
}


return multiply;
}