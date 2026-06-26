//54. Find the Length of a String without using strlen()
#include <stdio.h>

int main() {
    char str[] = "Hello";
    int len = 0;

    while(str[len] != '\0') {
        len++;
    }

    printf("Length = %d", len);

    return 0;
}
//55. Copy One String to Another without strcpy()
#include <stdio.h>

int main() {
    char str1[] = "Hello";
    char str2[20];
    int i = 0;

    while(str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }

    str2[i] = '\0';

    printf("%s", str2);

    return 0;
}
//56. Concatenate Two Strings without strcat()
#include <stdio.h>

int main() {
    char str1[20] = "Hello";
    char str2[] = "World";

    int i = 0, j = 0;

    while(str1[i] != '\0')
        i++;

    while(str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';

    printf("%s", str1);

    return 0;
}
//57. Compare Two Strings without strcmp()
#include <stdio.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";

    int i = 0, equal = 1;

    while(str1[i] != '\0' || str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            equal = 0;
            break;
        }
        i++;
    }

    if(equal)
        printf("Strings are Equal");
    else
        printf("Strings are Not Equal");

    return 0;
}
//58. Reverse a String
#include <stdio.h>

int main() {
    char str[] = "Hello";
    int len = 0;

    while(str[len] != '\0')
        len++;

    for(int i = len - 1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}
//59. Check if a String is a Palindrome
#include <stdio.h>

int main() {
    char str[] = "madam";
    int len = 0, palindrome = 1;

    while(str[len] != '\0')
        len++;

    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if(palindrome)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
//60. Count Vowels, Consonants, Digits, and Spaces
#include <stdio.h>

int main() {
    char str[] = "Hello 123 World";
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z')) {

            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
               str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                vowels++;
            else
                consonants++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
            digits++;
        else if(str[i] == ' ')
            spaces++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    printf("Spaces = %d", spaces);

    return 0;
}
//61. Convert a String to Lowercase
#include <stdio.h>

int main() {
    char str[] = "HELLO";

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }

    printf("%s", str);

    return 0;
}
//Convert a String to Uppercase
#include <stdio.h>

int main() {
    char str[] = "hello";

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }

    printf("%s", str);

    return 0;
}
//62. Sort a Set of Strings in Alphabetical Order
#include <stdio.h>
#include <string.h>

int main() {
    char str[3][20] = {"Banana", "Apple", "Mango"};
    char temp[20];

    for(int i = 0; i < 3; i++) {
        for(int j = i + 1; j < 3; j++) {
            if(strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    for(int i = 0; i < 3; i++)
        printf("%s\n", str[i]);

    return 0;
}
//63. Remove All Characters Except Alphabets
#include <stdio.h>

int main() {
    char str[] = "He11o@123";
    
    for(int i = 0; str[i] != '\0'; i++) {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z'))
            printf("%c", str[i]);
    }

    return 0;
}
//64. Find the Frequency of Characters in a String
#include <stdio.h>

int main() {
    char str[] = "hello";

    for(int i = 0; str[i] != '\0'; i++) {
        int count = 1;

        if(str[i] == '\0')
            continue;

        for(int j = i + 1; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                count++;
                str[j] = '\0';
            }
        }

        printf("%c = %d\n", str[i], count);
    }

    return 0;
}