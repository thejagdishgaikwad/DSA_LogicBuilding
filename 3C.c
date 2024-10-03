#include<stdio.h>
int  main(){
    int a[7]={15,11,18,5,3,7,21}, i,n,temp,k,j;
    n=7;
    printf("\n A : \t");
        for(i=0; i<n; i++){
            printf("%d \t", a[i]);
        }
        for(i=1; i<n; i++){
            printf("\n Pass! %d", i);
            temp=a[i];
            k=i-1;
            while(temp<a[k] && k>=0){
                a[k+1]=a[k];
                k=k-1;
            }
            a[k+1]=temp;
            printf("\n A : \t");
                for(j=0; j<n; j++){
                    printf("%d \t", a[j]);
                }
        }
        return 0;
}