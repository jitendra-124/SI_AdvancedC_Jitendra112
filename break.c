//19. Calculate the Factorial of a Number
#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial = %lld", fact);

    return 0;
}
//20. Generate the Fibonacci Sequence up to N Terms
#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, c;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
//21. Check if a Number is a Prime Number
#include <stdio.h>

int main() {
    int n, i, prime = 1;

    scanf("%d", &n);

    if(n <= 1)
        prime = 0;

    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            prime = 0;
            break;
        }
    }

    if(prime)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
//22. Print All Prime Numbers Between 1 and N
#include <stdio.h>

int main() {
    int n, i, j, prime;

    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        prime = 1;

        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                prime = 0;
                break;
            }
        }

        if(prime)
            printf("%d ", i);
    }

    return 0;
}
//23. Check if a Number is a Palindrome
#include <stdio.h>

int main() {
    int n, temp, rev = 0, digit;

    scanf("%d", &n);

    temp = n;

    while(temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    if(rev == n)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
//24. Check if a Number is an Armstrong Number
#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0;

    scanf("%d", &n);

    temp = n;

    while(temp > 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if(sum == n)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}
//25. Check if a Number is a Strong Number
#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0, i, fact;

    scanf("%d", &n);

    temp = n;

    while(temp > 0) {
        digit = temp % 10;
        fact = 1;

        for(i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if(sum == n)
        printf("Strong Number");
    else
        printf("Not Strong Number");

    return 0;
}