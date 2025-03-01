#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int adj_matrix[5000][5000];

int main() {
    srand(time(0));
    int n, i, j, in_deg = 0, out_deg = 0;
    printf("Enter vertices: ");
    scanf("%d", &n);
    
    double t, start = clock();

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            int ran = rand() % 2;
                adj_matrix[i][j] = ran;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ",adj_matrix[i][j]);
        }
        printf("\n");
    }


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (adj_matrix[i][j] == 1) {
                out_deg++;
            }
            if (adj_matrix[j][i] == 1) {
                in_deg++;
            }
        }
    }

    t = (clock() - start);
    printf("\n\nSum of In Degree is = %d\nand Sum of Out Degree is = %d\n", in_deg, out_deg);
    printf("\n\nComputational time of this function: %.2f milliseconds\n", (t/CLOCKS_PER_SEC)*1000);

    return 0;
}
