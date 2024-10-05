#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[8] = {10, 20, 25, 51, 75, 100, 250, 500}, n = 8, data, i, lower_bound, upper_bound, mid;
    int found = 0; 
    printf("\nArray A: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d", &data);
    lower_bound = 0;
    upper_bound = n - 1;
    while (lower_bound <= upper_bound) {
        mid = (lower_bound + upper_bound) / 2;
        printf("\n\nStart = %d, End = %d, Mid = %d", lower_bound + 1, upper_bound + 1, mid + 1);
        if (data == a[mid]) {
            printf("\n\t%d = %d", data, a[mid]);
            printf("\nElement is present at position: %d", mid + 1);
            found = 1;  // Mark as found
            break;      // Break the loop once the element is found
        }
        else if (data > a[mid]) {
            lower_bound = mid + 1;
            printf("\n\t%d > %d, so move to RHS", data, a[mid]);
        }
        else {
            upper_bound = mid - 1;
            printf("\n\t%d < %d, so move to LHS", data, a[mid]);
        }
    }
    if (!found) {
        printf("\nThe element is not present in the array!");
    }
    return 0;
}
