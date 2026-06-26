//65. Swap Two Numbers Using Pointers
#include <stdio.h>

int main()
{
    int a, b, temp;
    int *p1 = &a, *p2 = &b;

    scanf("%d%d", &a, &b);

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("%d %d", a, b);

    return 0;
}
//66. Add Two Numbers Using Pointers
#include <stdio.h>

int main()
{
    int a, b;
    int *p1 = &a, *p2 = &b;

    scanf("%d%d", &a, &b);

    printf("%d", *p1 + *p2);

    return 0;
}
//67. Input and Print Array Elements Using Pointers
#include <stdio.h>

int main()
{
    int arr[5];
    int *ptr = arr;
    int i;

    for(i = 0; i < 5; i++)
        scanf("%d", ptr + i);

    for(i = 0; i < 5; i++)
        printf("%d ", *(ptr + i));

    return 0;
}
//68. Copy One Array to Another Using Pointers
#include <stdio.h>

int main()
{
    int arr1[5] = {1,2,3,4,5};
    int arr2[5];
    int *p1 = arr1, *p2 = arr2;
    int i;

    for(i = 0; i < 5; i++)
        *(p2 + i) = *(p1 + i);

    for(i = 0; i < 5; i++)
        printf("%d ", arr2[i]);

    return 0;
}
//69. Swap Two Arrays Using Pointers
#include <stdio.h>

int main()
{
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {6,7,8,9,10};
    int *p1 = arr1, *p2 = arr2;
    int i, temp;

    for(i = 0; i < 5; i++)
    {
        temp = *(p1 + i);
        *(p1 + i) = *(p2 + i);
        *(p2 + i) = temp;
    }

    printf("Array1: ");
    for(i = 0; i < 5; i++)
        printf("%d ", arr1[i]);

    printf("\nArray2: ");
    for(i = 0; i < 5; i++)
        printf("%d ", arr2[i]);

    return 0;
}
//70. Reverse an Array Using Pointers
#include <stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    int *start = arr;
    int *end = arr + 4;
    int temp;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}
//71. Search for an Element in an Array Using Pointers
#include <stdio.h>

int main()
{
    int arr[5] = {10,20,30,40,50};
    int *ptr = arr;
    int target, found = 0;

    scanf("%d", &target);

    for(int i = 0; i < 5; i++)
    {
        if(*(ptr + i) == target)
        {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Element Found");
    else
        printf("Element Not Found");

    return 0;
}
//72. Add Two Matrices Using Pointers
#include <stdio.h>

int main()
{
    int a[2][2] = {{1,2},{3,4}};
    int b[2][2] = {{5,6},{7,8}};
    int c[2][2];

    int *p1 = &a[0][0];
    int *p2 = &b[0][0];
    int *p3 = &c[0][0];

    for(int i = 0; i < 4; i++)
        *(p3 + i) = *(p1 + i) + *(p2 + i);

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}