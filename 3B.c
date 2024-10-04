#include<stdio.h>
int selection_sort();
int a[30], n;
int main(){
    int i;
    printf("Enter the Size of Array! : ");
    scanf("%d", &n);
            for(i=0; i<n; i++){
                printf("Enter the elements of an array : ");
                scanf("%d", &a[i]);
            }
                selection_sort();
            printf("\n \n Elements after Sorting : ");
                for(i=0; i<n; i++)
                printf("%d ", a[i]);
            return 0;
}
int selection_sort(){
    int i, j, min, temp;
    for(i=0; i<n; i++){
        min = i;
            for(j=i+1; j<n; j++){
                if(a[j]<a[min])
                min=j;
            }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}