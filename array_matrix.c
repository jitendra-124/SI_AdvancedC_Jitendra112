//36. Find the Sum and Average of Array Elements
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", (float)sum / n);

    return 0;
}
//37. Find the Largest and Smallest Element in an Array
#include <stdio.h>

int main() {
    int arr[] = {10, 5, 30, 2, 25};
    int n = 5;

    int largest = arr[0];
    int smallest = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest)
            largest = arr[i];

        if(arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d", smallest);

    return 0;
}
//38. Reverse an Array in Place
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    for(int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
//39. Insert an Element at a Specific Position
#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5, target = 2, value = 25;

    for(int i = n; i > target; i--) {
        arr[i] = arr[i - 1];
    }

    arr[target] = value;
    n++;

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
//40. Delete an Element from a Specific Position
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, target = 2;

    for(int i = target; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
//41. Remove Duplicate Elements from an Array
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = 7;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                for(int k = j; k < n - 1; k++)
                    arr[k] = arr[k + 1];

                n--;
                j--;
            }
        }
    }

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
//42. Merge Two Arrays
#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};

    int n1 = 3, n2 = 3;
    int arr3[6];

    for(int i = 0; i < n1; i++)
        arr3[i] = arr1[i];

    for(int i = 0; i < n2; i++)
        arr3[n1 + i] = arr2[i];

    for(int i = 0; i < n1 + n2; i++)
        printf("%d ", arr3[i]);

    return 0;
}
//43. Rotate an Array Left by N Positions
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5, pos = 2;

    for(int i = 0; i < pos; i++) {
        int temp = arr[0];

        for(int j = 0; j < n - 1; j++)
            arr[j] = arr[j + 1];

        arr[n - 1] = temp;
    }

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
//44. Linear Search
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, target = 30;
    int found = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            printf("Found at index %d", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Not Found");

    return 0;
}
//45. Binary Search
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, target = 40;

    int low = 0, high = n - 1;
    int found = 0;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == target) {
            printf("Found at index %d", mid);
            found = 1;
            break;
        }
        else if(arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(found == 0)
        printf("Not Found");

    return 0;
}
//46. Bubble Sort
#include <stdio.h>

int main() {
    int arr[] = {5, 2, 8, 1, 3};
    int n = 5;

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
//47. Selection Sort
#include <stdio.h>

int main() {
    int arr[] = {5, 2, 8, 1, 3};
    int n = 5;

    for(int i = 0; i < n - 1; i++) {
        int min = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min])
                min = j;
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}