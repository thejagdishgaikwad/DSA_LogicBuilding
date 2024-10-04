#include<stdio.h>
#include<stdlib.h>
int merge(int a[], int temp[], int l_pos, int r_pos, int r_end) {
    int i, l_end, n, tmp_pos;
    l_end = r_pos - 1;
    tmp_pos = l_pos;
    n = r_end - l_pos + 1;
    while (l_pos <= l_end && r_pos <= r_end) {
        if (a[l_pos] <= a[r_pos]) {
            temp[tmp_pos++] = a[l_pos++];
        } else {
            temp[tmp_pos++] = a[r_pos++];
        }
    }
        while (l_pos <= l_end) {
            temp[tmp_pos++] = a[l_pos++];
        }
            while (r_pos <= r_end) {
                temp[tmp_pos++] = a[r_pos++];
            }
    // Copy the sorted temp array back to the original array
    for (i = 0; i < n; i++, r_end--) {
        a[r_end] = temp[r_end];
    }
}
int Msort(int a[], int temp[], int left, int right) {
    int center;
    if (left < right) {
        center = (left + right) / 2;
        Msort(a, temp, left, center);
        Msort(a, temp, center + 1, right);
        merge(a, temp, left, center + 1, right);
    }
}
int mergeSort(int a[], int n) {
    int *temparray;
    temparray = (int *)malloc(sizeof(int) * n);
    if (temparray != NULL) {
        Msort(a, temparray, 0, n - 1);
        free(temparray);
    }
}
int main() {
    int i, n, a[10];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter the elements: ");
        scanf("%d", &a[i]);
    }
    mergeSort(a, n);
    printf("\nThe Sorted Elements Are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
