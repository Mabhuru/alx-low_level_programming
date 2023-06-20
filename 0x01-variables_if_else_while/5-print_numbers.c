#include <stdio.h>

/**
*main - entry of the program
*
*Description: prints single digit numbers
*of base 10 from 0 followed by a new line
*
*Return: 0 on successfull compilation
*/
int main(void)
{
int singleDigit = 0;

while (singleDigit < 10)
{
printf("%d \n", singleDigit);
singleDigit++;
}

return (0);

}
