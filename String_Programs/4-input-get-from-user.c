
#include<stdio.h>
void main()
{
char str_name[15],str2[100];
printf("Enter the string: ");
scanf("%s",&str_name);
// printf("Enter the string: ");
// scanf("%s",&str2);

printf("The given string is: %s\n",str_name);
printf("The particular index char value is: %c\n",str_name[5]);
}

/*Output:
Enter the string: LearningString
The given string is: LearningString
The particular index char value is: i    */