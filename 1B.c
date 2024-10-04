#include<stdio.h>
#include<conio.h>
    void main(){
        int n1, n2, n3, i, j; //array size declaration!
        int a[10], b[10], c[20];
        clrscr();

    printf("Enter size of the first array! : \n");
    scanf("%d",&n1);

        printf("\nEnter the elements of array : ");
        for(i=0;i<n1;i++){
            scanf("%d",&a[i]);
        }
        printf("\n Enter the size of second array : ");
            scanf("%d", &n2);

                printf("\n Enter the elements in second array! : ");
                    for(i=0; i<n2; i++){
                        scanf("%d", &b[i]);
                    }
                    n3=n1+n2;
                for(i=0; i<n1; i++){
                    c[i]=a[i];
                }
                for(i=0; i<n2; i++){
                    c[i]=a[i];
                }
            for(i=0; i<n2; i++){
                c[i+n1]=b[i];
            }
            printf("\n Final arrray after sorting : ");
            for(i=0; i<n3; i++){
                int temp;
                for(j=i+1; j<n3; j++){
                    if(c[i]>c[j]){
                        temp=c[i];
                        c[i]=c[j];
                        c[j]=temp;
                    }
                }
            }
            for(i=0; i<n3; i++){
                printf("%d ",c[i]);
                getch ();
            }
    }