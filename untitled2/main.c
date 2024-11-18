#include <stdio.h>
#include <stdbool.h>
#define N 2
#define M 2

bool isMatrixInc(int a[N][M])
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i - 1 >= 0) {
                if (a[i][j] <= a[i - 1][j])
                    return false;
            }
            if (j - 1 >= 0) {
                if (a[i][j] <= a[i][j - 1])
                    return false;
            }
        }
    }

    return true;
}
int main()
{

    int a[N][M] = { { 2, 10 },
                    { 11, 20 } };

    if (isMatrixInc(a))
        printf("Yes");
    else
        printf("No");

    return 0;
}