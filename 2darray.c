//48. Add Two Matrices
#include <stdio.h>

int main() {
    int a[2][2] = {{1,2},{3,4}};
    int b[2][2] = {{5,6},{7,8}};
    int c[2][2];

    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
//49. Multiply Two Matrices
#include <stdio.h>

int main() {
    int a[2][2] = {{1,2},{3,4}};
    int b[2][2] = {{5,6},{7,8}};
    int c[2][2] = {0};

    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            for(int k=0;k<2;k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
//50. Find the Transpose of a Matrix
#include <stdio.h>

int main() {
    int a[2][3] = {{1,2,3},{4,5,6}};

    for(int i=0;i<3;i++) {
        for(int j=0;j<2;j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}
//51. Check if a Matrix is Symmetric
#include <stdio.h>

int main() {
    int a[3][3] = {
        {1,2,3},
        {2,4,5},
        {3,5,6}
    };

    int symmetric = 1;

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if(a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric)
        printf("Symmetric Matrix");
    else
        printf("Not Symmetric");

    return 0;
}
//52. Calculate the Sum of Diagonal Elements
#include <stdio.h>

int main() {
    int a[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int sum = 0;

    for(int i=0;i<3;i++) {
        sum += a[i][i];
    }

    printf("Sum = %d", sum);

    return 0;
}
//53. Check if Two Matrices are Equal
#include <stdio.h>

int main() {
    int a[2][2] = {{1,2},{3,4}};
    int b[2][2] = {{1,2},{3,4}};

    int equal = 1;

    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            if(a[i][j] != b[i][j]) {
                equal = 0;
                break;
            }
        }
    }

    if(equal)
        printf("Matrices are Equal");
    else
        printf("Matrices are Not Equal");

    return 0;
}