#include<stdio.h>

int main(){
    int a[6] = {8, 7, 5, 11, 15, 2}; // Array initialization
    int p, n, j, i, temp;
    
    n = 6;  // Length of the array
    
    // Display the original array
    printf("\n A : \t");
    for(i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }

    // Bubble Sort algorithm
    for(p = 1; p <= n - 1; p++){
        printf("\n Pass : %d", p);
        for(i = 0; i < n - p; i++){
            if(a[i] > a[i + 1]){
                // Swap elements
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        
        // Display the array after each pass
        printf("\n A : \t");
        for(j = 0; j < n; j++){
            printf("%d\t", a[j]);
        }
    }
    
    return 0;
}
