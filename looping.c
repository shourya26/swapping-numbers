#include <stdio.h>

int main()
{
    int i, j, k, N;

    printf("Enter N: ");
    scanf("%d", &N);

    // k represents the current integer
    k = 0;

    for(i=0; i<=N; i++)
    {
        for(j=0; j<=i; j++)
        {
            // Print 1 if current integer k is odd
            if(k % 2 == 0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }

            k++;
        }

        printf("\n");
    }

    return 0;
}
