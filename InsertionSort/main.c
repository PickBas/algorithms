#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int *data = malloc(sizeof(int) * n);

    for (int i = 0; i < n; ++i)
        scanf("%d", &data[i]);

    // Insertion-Sort

    for (int i = 1; i < n; ++i) {
        int key = data[i];
        int j = i - 1;
        while (j > -1 && data[j] > key) {
            data[j + 1] = data[j];
            --j;
        }
        data[j + 1] = key;
    }

    for (int i = 0; i < n; ++i) printf("%d ", data[i]);

    free(data);
    return 0;
}
