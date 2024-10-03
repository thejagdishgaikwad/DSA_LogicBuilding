#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[7]={73, 18, 10, 5, 21, 32, 74}, n=7, i, data;
    printf(" Array A : ",a);
        for(i=0; i<n; i++)
            printf("\t %d", a[i]);
            printf("\n Enter the element to be searched : ");
            scanf("%d", &data);
            for(i=0; i<n; i++){
                if(a[i]==data){
                    printf("\n The Element Is Present At Position No : %d", i);

                }
            }
        printf("The Element Is Not Present In Array!");
        return 0;
}