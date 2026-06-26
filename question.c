//26. Reverse a Given Integer
#include <stdio.h>

int main() {
    int n, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    printf("Reversed number = %d", rev);

    return 0;
}
//27. Calculate the Sum of Digits of a Number
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
//28. Find the GCD (HCF) and LCM of Two Numbers
#include <stdio.h>

int main() {
    int a, b, x, y, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    x = a;
    y = b;

    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    gcd = x;
    lcm = (a * b) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d", lcm);

    return 0;
}


//29. Print a Half-Pyramid of Stars (*)
#include <stdio.h>

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
//30. Print an Inverted Half-Pyramid
#include <stdio.h>

int main() {
    int n = 5;

    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
//31. Print a Full Pyramid (Triangle)
#include <stdio.h>

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for(int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
//32. Print a Diamond Shape
#include <stdio.h>

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++)
            printf(" ");

        for(int j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    for(int i = n - 1; i >= 1; i--) {
        for(int j = 1; j <= n - i; j++)
            printf(" ");

        for(int j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
//33. Print Pascal’s Triangle
#include <stdio.h>

int main() {
    int n = 5, coef;

    for(int i = 0; i < n; i++) {
        coef = 1;

        for(int j = 0; j <= i; j++) {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
//34. Print Floyd’s Triangle
#include <stdio.h>

int main() {
    int n = 5, num = 1;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}
//35. Print a Number Pyramid (1, 12, 123, etc.)
#include <stdio.h>

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}