#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 *Main - Entery point of the code
 *Description: number stored in the variable n is positive or negative.
 *Return: anything other than 0
*/
int main(void) /**code*/
{
int n;
srand(time(0));

n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
else if (n == 0)
{
printf("%d is zero\n", n);

}
else
{
printf("%d is negative\n", n);
}
return (0);
}
