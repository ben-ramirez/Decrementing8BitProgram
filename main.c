#include <stdio.h>


int binNum[8];

int main()
{
    printf("Enter 8 bit binary number: ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &binNum[i]);
    }
    for (int p = 0; p < 8; p++)
    {
        printf("%d", binNum[p]);
    }
    printf("\n");

    int count;
    for (count = 0; count < 10; count++)
    {
        int pos = 7;
        while (pos >= 0 && binNum[pos] == 0)
        {
            binNum[pos] = 1;
            pos--;
        }
        if (pos != -1)
        {
            binNum[pos] = 0;
        }
        for (int j = 0; j < 8; j++)
        {
            printf("%d", binNum[j]);
        }
        printf("\n");
    }




    

    return 0;
}
