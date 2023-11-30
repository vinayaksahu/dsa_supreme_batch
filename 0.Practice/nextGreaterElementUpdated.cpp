#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a =*b;
    *b =temp;
}

void findNext(char number[], int n)
{
    int i, j;

    for (i=n-1;i>0;i--)
    {
        if (number[i]>number[i - 1])
        {
            break;
        }
    }

    if (i==0)
    {
        printf("Next number is not possible");
        return;
    }

    int x = number[i - 1], smallest = i;
    for (j= i + 1;j<n;j++)
    {
        if (number[j]>x && number[j]<number[smallest])
        {
            smallest = j;
        }
    }

    swap(&number[smallest], &number[i-1]);

    for (j=i;j<n;j++)
    {
        for (int k=j+1;k<n;k++)
        {
            if (number[j]>number[k])
            {
                swap(&number[j], &number[k]);
            }
        }
    }

    printf("Next number with same set of digits is %s", number);
    return;
}

int main()
{
    char digits[] = "12321";
    int n = strlen(digits);
    findNext(digits, n);
    return 0;
}