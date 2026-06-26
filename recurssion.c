#include <stdio.h>

void prime(int n)
{
    int i, flag = 1;

    if (n <= 1)
        flag = 0;

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Prime Number");
    else
        printf("Not Prime Number");
}

void armstrong(int n)
{
    int temp = n, sum = 0, rem;

    while (temp > 0)
    {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    if (sum == n)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
}

void perfect(int n)
{
    int i, sum = 0;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        printf("Perfect Number");
    else
        printf("Not Perfect Number");
}

int main()
{
    int n;
    scanf("%d", &n);

    prime(n);
    printf("\n");
    armstrong(n);
    printf("\n");
    perfect(n);

    return 0;
}
//66. Call by Value vs Call by Reference
#include <stdio.h>

void value(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    printf("After Call by Value: %d %d\n", a, b);
}

void reference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10, b = 20;

    value(a, b);
    printf("Original Values: %d %d\n", a, b);

    reference(&a, &b);
    printf("After Call by Reference: %d %d\n", a, b);

    return 0;
}
//67. Factorial Using Recursion
#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d", factorial(n));

    return 0;
}
//68. GCD of Two Numbers Using Recursion
#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    printf("%d", gcd(a, b));

    return 0;
}
//69. Tower of Hanoi
#include <stdio.h>

void hanoi(int n, char source, char helper, char destination)
{
    if (n == 1)
    {
        printf("Move Disk 1 from %c to %c\n", source, destination);
        return;
    }

    hanoi(n - 1, source, destination, helper);

    printf("Move Disk %d from %c to %c\n", n, source, destination);

    hanoi(n - 1, helper, source, destination);
}

int main()
{
    int n;
    scanf("%d", &n);

    hanoi(n, 'A', 'B', 'C');

    return 0;
}
//70. Reverse a Sentence Using Recursion
#include <stdio.h>

void reverse()
{
    char ch;
    scanf("%c", &ch);

    if (ch != '\n')
    {
        reverse();
        printf("%c", ch);
    }
}

int main()
{
    reverse();
    return 0;
}
//71. Power of a Number Using Recursion
#include <stdio.h>

int power(int base, int exp)
{
    if (exp == 0)
        return 1;

    return base * power(base, exp - 1);
}

int main()
{
    int base, exp;

    scanf("%d%d", &base, &exp);

    printf("%d", power(base, exp));

    return 0;
}
//72. Sum of Natural Numbers Using Recursion
#include <stdio.h>

int sum(int n)
{
    if (n == 1)
        return 1;

    return n + sum(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d", sum(n));

    return 0;
}