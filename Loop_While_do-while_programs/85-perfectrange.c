/* 85. Write a C program to find the 'Perfect' numbers within a given number of ranges.
        Test Data :
        Input the starting range or number : 1
        Input the ending range of number : 50
        Expected Output :
        The Perfect numbers within the given range : 6 28*/

#include <stdio.h>
void main()
{
    int i, n, r, sum, k, x, y, j;

    printf("Enter the number: ");
    scanf("%d \t %d", &x, &y);
    // k=1;
    for (j = x; j <= y; j++)
    {
        sum=0;

        for (i = 1; i < j; i++)
            if (j % i == 0)
            {
                //   printf("%d ", i);
                sum = sum + i;
            }
        
        if(sum==j)
        {
            printf("%d \n",j);
        }
    }
}


/*Output: 
Enter the number: 1 1000
6 
28 
496   */