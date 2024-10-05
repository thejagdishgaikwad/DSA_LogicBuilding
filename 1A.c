#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int b[], int n);
void reverse(int b[], int n);
void search(int b[], int n);
void main(){
    int a[7] = {10, 45, 51, 20, 75, 30, 35};
    int i, ch = 1, n;    
    n = 7;
    printf("\n A : ");
    for (i = 0; i < n; i++)
        printf("\t %d", a[i]);
    while (ch != 4) {
        printf("\n 1.Sort \n 2.Reverse \n 3.Searching \n 4.Exit \n Select the option : ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                bubble_sort(a, n);
                break;
            case 2:
                reverse(a, n);
                break;
            case 3:
                search(a, n);
                break;
            case 4:
                exit(0);
        }
    }
}
void bubble_sort(int b[], int n) {
    int p, i, temp;
    for (p = 0; p < n - 1; p++) {
        for (i = 0; i < n - 1; i++) {
            if (b[i] > b[i + 1]) {
                temp = b[i];
                b[i] = b[i + 1];
                b[i + 1] = temp;
            }
        }
    }
    printf("\n Array : ");
    for (i = 0; i < n; i++)
        printf("\n %d", b[i]);

    printf("\n \n Sorted Array : ");
    for (i = 0; i < n; i++) {
        printf("\t %d", b[i]);
    }
}
void reverse(int b[], int n) {
    int i;
    printf("\n Array : ");
    for (i = 0; i < n; i++)
        printf("\t %d", b[i]);

    printf("\n \n Reversed Array : ");
    for (i = n - 1; i >= 0; i--)
        printf("\t %d", b[i]);
}
void search(int b[], int n) {
    int data, i, flag = 0;
    printf("\n Array : ");
    for (i = 0; i < n; i++)
        printf("\t %d", b[i]);
    printf("\nEnter element to search: ");
    scanf("%d", &data);
    for (i = 0; i < n; i++) {
        if (b[i] == data) {
            printf("\n The element is present at position %d", i + 1);
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("\n The element is not present in the array!!");
    }
}