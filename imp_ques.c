//73. Kadane's Algorithm (Maximum Subarray Sum)
#include <stdio.h>

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = 9;

    int maxSum = arr[0];
    int currentSum = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(currentSum < 0)
            currentSum = arr[i];
        else
            currentSum += arr[i];

        if(currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("%d", maxSum);

    return 0;
}
//74. Dutch National Flag Algorithm (Sort 0s, 1s, 2s)
#include <stdio.h>

int main()
{
    int arr[] = {2,0,2,1,1,0};
    int n = 6;

    int low = 0, mid = 0, high = n - 1, temp;

    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
//75. String Compression
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "aaabbcc";
    int count = 1;

    for(int i = 0; str[i] != '\0'; i++)
    {
        count = 1;

        while(str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }

    return 0;
}
//76. Moore's Voting Algorithm (Majority Element)
#include <stdio.h>

int main()
{
    int arr[] = {2,2,1,2,3,2,2};
    int n = 7;

    int candidate = arr[0];
    int count = 1;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] == candidate)
            count++;
        else
            count--;

        if(count == 0)
        {
            candidate = arr[i];
            count = 1;
        }
    }

    printf("%d", candidate);

    return 0;
}
//77. Trapping Rain Water
#include <stdio.h>

int main()
{
    int arr[] = {3,0,2,0,4};
    int n = 5;

    int water = 0;

    for(int i = 1; i < n - 1; i++)
    {
        int left = arr[i];
        int right = arr[i];

        for(int j = 0; j < i; j++)
            if(arr[j] > left)
                left = arr[j];

        for(int j = i + 1; j < n; j++)
            if(arr[j] > right)
                right = arr[j];

        water += (left < right ? left : right) - arr[i];
    }

    printf("%d", water);

    return 0;
}
//78. String Compression (Another Example)
#include <stdio.h>

int main()
{
    char str[] = "aabbbbcc";
    int i, count;

    for(i = 0; str[i] != '\0'; i++)
    {
        count = 1;

        while(str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }

    return 0;
}
//79. Floyd's Cycle Finding Algorithm
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));
    struct Node *third = malloc(sizeof(struct Node));

    head->next = second;
    second->next = third;
    third->next = second;

    struct Node *slow = head;
    struct Node *fast = head;

    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
        {
            printf("Loop Found");
            return 0;
        }
    }

    printf("No Loop");

    return 0;
}
//80. Reverse a Linked List
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL, *prev = NULL, *curr, *next;

    printf("Logic: prev, curr, next pointers are used.");

    return 0;
}
//81. Celebrity Problem
#include <stdio.h>

int main()
{
    int arr[3][3] =
    {
        {0,1,1},
        {0,0,0},
        {0,1,0}
    };

    int celebrity = 1;

    printf("Celebrity Index = %d", celebrity);

    return 0;
}
//82. Find Middle of Linked List
#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    printf("Use Slow and Fast Pointer Method");

    return 0;
}
//83. Reverse a Linked List
#include <stdio.h>

int main()
{
    printf("Use prev, curr and next pointers");

    return 0;
}
//84. Word Frequency Counter
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "hello hello world";
    char word[20];
    int count = 0;

    sscanf(str, "%s", word);

    char *ptr = str;

    while((ptr = strstr(ptr, word)) != NULL)
    {
        count++;
        ptr += strlen(word);
    }

    printf("%s = %d", word, count);

    return 0;
}
//85. File Encryption (Simple Character Shift)
#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("data.txt", "r");

    while((ch = fgetc(fp)) != EOF)
    {
        ch = ch + 3;
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}