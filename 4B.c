#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[7]={73, 18, 10, 5, 21, 32, 74}, n=7, i, data, found=0;
    printf(" Array A : ",a);
        for(i=0; i<n; i++)
            printf(" %d", a[i]);
            printf("\n Enter the element to be searched : ");
            scanf("%d", &data);
            for(i=0; i<n; i++){
                if(a[i]==data){
                    printf(" The Element Is Present At %d Position!", i);
                    found=1;

                }
            }
            if(!found){
                printf("The Element Is Not Present In Array!");
            }
        return 0;
}