/******************
Name: Or Levinson
ID: levinso2
Assignment: 1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main()
{

  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  int number,position;
  printf("Please enter a number:");
  scanf(" %d", &number);
  printf("Please enter a position:");
  scanf(" %d", &position);
  // shift left to make the desired bit the LSB
  int answer = number >> position;
  // make a mask that will zero everything but the bit we want
  int mask = 1;
  answer = answer & mask;
  printf("The bit in position %d of number %d is: %d\n", position, number, answer);

  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  printf("Please enter a number:");
  scanf(" %d", &number);
  printf("Please enter a position:");
  scanf(" %d", &position);
  mask = 1 << position;
  int bitOn = mask | number;
  // we will first xor the mask with the number to make the value of the desired position change
  //  after that we will use and with the original number to make the bit in the desired position 0
  int bitOff = (mask ^ number) & number;
  printf("Number with bit %d set to 1: %d\n", position, bitOn);
  printf("Number with bit %d set to 0: %d\n", position, bitOff);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  printf("Please enter a number:");
  scanf(" %d", &number);
  printf("Please enter a position:");
  scanf(" %d", &position);
  mask = 1 << position;
  int toggledAnswer = mask ^ number;
  printf("Number with bit %d toggled: %d\n", position, toggledAnswer);

  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  printf("Please enter a number:");
  scanf(" %d", &number);
  mask = 1;
  int evenOrOdd = (number & mask) ^ 1;
  printf("%d\n",evenOrOdd);

  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int octal1,octal2;
  printf("Please enter the first number (octal):");
  scanf(" %o", &octal1);
  printf("Please enter the second number (octal):");
  scanf(" %o", &octal2);
  int sum = octal1+octal2;
  printf("The sum in hexadecimal: %X\n",sum);
  int bit3 = (sum >> 3) & 1;
  int bit5 = (sum >> 5) & 1;
  int bit7 = (sum >> 7) & 1;
  int bit11 = (sum >> 11) & 1;
  printf("The 3,5,7,11 bits are: %d%d%d%d\n",bit3,bit5,bit7,bit11);
  printf("Bye!\n");

  return 0;
}
