#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int n1 = 0, n2 = 1, n3, length;
    printf("Enter the length of the fibonacci sequence: ");
    scanf("%d", &length);

    printf("%d %d ", n1, n2);
    for(int i = 0; i < length; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;

        printf("%d ", n3);
    }

    return 0;
}

// 0 1 1 2 3 5 7 