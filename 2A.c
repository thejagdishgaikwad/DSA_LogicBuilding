#include<stdio.h>
#include<conio.h>
    int main(){
        int a[20], i, j, t_no, pos, n;
        clrscr();
        printf("Enter the number of elements in the array: ");
        scanf("%d", &t_no);
            for(j=1; j<=t_no; j++){
                printf("\n Enter New element : ");
                scanf("%d", &n);
                pos=j;
                    while((a[pos/2]<=n)&&(pos/2)>=1){
                        a[pos]=a[pos/2];
                        pos=pos/2;
                    }
                    a[pos]=n;
                    printf("\n Heap : \n");
                        for(i=1; i<=j; i++){
                            printf("%d ", a[i]);
                        }
            }
            getch();
    }