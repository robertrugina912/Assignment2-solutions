//Name: Robert Rugina
#include <stdio.h>

int main(void)
{
  float initial, rate, contribution, interest, balance;
  int years;

  // Obtain the required input values from the user, perform input validation
  do 
  {
    printf("Enter initial investment amount: ");
    scanf("%f", &balance);
    if (balance < 0) printf("Initial investment cannot be negative.\n");
  } while (balance < 0);
  do 
  {
    printf("Enter total years: ");
    scanf("%d", &years);
    if (years <= 0) printf("Years must be greater than zero.\n");
  } while (years <= 0);

  do 
  {
    printf("Enter return rate: ");
    scanf("%f", &rate);  
    if (rate < 0) printf("Rate cannot be negative.\n");  
  } while (rate < 0);

  do 
  {
    printf("Enter additional contribution per year: ");
    scanf("%f", &contribution);  
    if (contribution < 0) printf("Contribution cannot be negative.\n");
  } while (contribution < 0);

  // Create the investment returns table
  printf("\n");
  printf("Year      Start Balance       Interest            End Balance\n");
  printf("**********************************************************************\n");
  for (int i = 1; i <= years; i++)
  {
    interest = balance * (rate / 100);
    printf("%-10d%-20.2f%-20.2f%-20.2f\n", i, balance, interest, (interest + balance) );
    balance += interest + contribution;
  }

  return 0;
}
