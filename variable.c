// with temporay swaping
#include <stdio.h>

int main() {
    int a = 10, b = 20, temp;

    temp = a;
    a = b;
    b = temp;

    printf("a = %d, b = %d", a, b);

    return 0;
}

//without temporary variable swapping

#include <stdio.h>

int main() {
    int a = 10, b = 20;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d, b = %d", a, b);

    return 0;
}

//Convert Celsius to Fahrenheit

#include <stdio.h>

int main() {
    float c, f;

    scanf("%f", &c);

    f = (c * 9 / 5) + 32;

    printf("Fahrenheit = %.2f", f);

    return 0;
}
//Fahrenheit to Celsius

#include <stdio.h>

int main() {
    float f, c;

    scanf("%f", &f);

    c = (f - 32) * 5 / 9;

    printf("Celsius = %.2f", c);

    return 0;
}

//. Calculate Simple Interest and Compound Interest

#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, si, ci;

    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;
    ci = p * pow((1 + r / 100), t) - p;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f", ci);

    return 0;
}

//. Calculate area and circumference of a circle

#include <stdio.h>

int main() {
    float r, area, circumference;

    scanf("%f", &r);

    area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f", circumference);

    return 0;
}

//8. Check if a number is even or odd (using modulus operator)
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n % 2 == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}
//9. Check if a number is even or odd (using bitwise operator)
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n & 1)
        printf("Odd");
    else
        printf("Even");

    return 0;
}
//10. Find size of different data types
#include <stdio.h>

int main() {
    printf("int = %zu bytes\n", sizeof(int));
    printf("char = %zu bytes\n", sizeof(char));
    printf("float = %zu bytes\n", sizeof(float));
    printf("double = %zu bytes\n", sizeof(double));

    return 0;
}
//11. Convert days into years, weeks, and days
#include <stdio.h>

int main() {
    int days, years, weeks, rem;

    scanf("%d", &days);

    years = days / 365;
    rem = days % 365;

    weeks = rem / 7;
    rem = rem % 7;

    printf("Years = %d\n", years);
    printf("Weeks = %d\n", weeks);
    printf("Days = %d", rem);

    return 0;
}
//12. Calculate ASCII value of a character
#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);

    printf("ASCII Value = %d", ch);

    return 0;
}
//13. Find the Largest of Three Numbers
#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Largest = %d", a);
    else if (b >= a && b >= c)
        printf("Largest = %d", b);
    else
        printf("Largest = %d", c);

    return 0;
}
//14. Check if a Year is a Leap Year
#include <stdio.h>

int main() {
    int year;

    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("Leap Year");
    else
        printf("Not a Leap Year");

    return 0;
}
//15. Check if a Character is a Vowel or Consonant
#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);

    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
        ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        printf("Vowel");
    else
        printf("Consonant");

    return 0;
}
//16. Find the Roots of a Quadratic Equation
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2;

    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots = %.2f and %.2f", r1, r2);
    }
    else if (d == 0) {
        r1 = -b / (2 * a);
        printf("Roots = %.2f and %.2f", r1, r1);
    }
    else {
        printf("Imaginary Roots");
    }

    return 0;
}


//17. Simple Calculator Using Switch Case
#include <stdio.h>

int main() {
    float a, b;
    char op;

    scanf("%f %c %f", &a, &op, &b);

    switch(op) {
        case '+':
            printf("%.2f", a + b);
            break;
        case '-':
            printf("%.2f", a - b);
            break;
        case '*':
            printf("%.2f", a * b);
            break;
        case '/':
            printf("%.2f", a / b);
            break;
        default:
            printf("Invalid Operator");
    }

    return 0;
}
//18. Check if a Character is an Alphabet, Digit, or Special Character
#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        printf("Alphabet");
    else if (ch >= '0' && ch <= '9')
        printf("Digit");
    else
        printf("Special Character");

    return 0;
}