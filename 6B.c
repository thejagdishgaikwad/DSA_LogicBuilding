
#include <stdio.h>

int main() {
    int n = 5, i, j, k;
    int w[5][5] = {{0, 7, 12, 9, 0}, {5, 0, 0, 11, 0}, {0, 9, 0, 0, 7}, {0, 0, 5, 0, 0}, {0, 8, 8, 0, 0}};
    int s[5][5] = {{0, 7, 12, 9, 1000}, {5, 0, 1000, 11, 1000}, {0, 9, 0, 0, 7}, {1000, 0, 5, 0, 0}, {1000, 8, 8, 1000, 0}};
    
    printf("\nW: ");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++) {
            printf("\t%d", w[i][j]);
        }
    }

    printf("\nS: ");
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++) {
            printf("\t%d", s[i][j]);
        }
    }

    // Floyd-Warshall algorithm for shortest path
    for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (s[i][j] > (s[i][k] + s[k][j])) {
                    s[i][j] = s[i][k] + s[k][j];
                }
            }
        }

        printf("\nS %d: ", k);
        for (i = 0; i < n; i++) {
            printf("\n");
            for (j = 0; j < n; j++) {
                printf("\t%d", s[i][j]);
            }
        }
    }

    return 0;
}
