/*4. Write a program in C to print individual characters of a string in reverse order.

    Test Data :
    Input the string : w3resource.com

    Expected Output :

    The characters of the string in reverse are :
    m  o  c  .  e  c  r  u  o  s  e  r  3  w        */

#include <stdio.h>
#include <string.h>
void main()
{
  int i, length;
  char string[100];
  printf("Enter the string: ");
  scanf("%s", &string);
  length = strlen(string);
  for (i = length-1; i >= 0; i--)
  {
    printf("%c ", string[i]);
  }
}

/*Output:

Enter the string: LordMurugan
n a g u r u M d r o L               */