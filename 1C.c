#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void add_mat();
void mul_mat();
void trans_mat();
void print_mat(int x[3][3]);
void main()
{
    int ch=0;
    clrscr();
    while (ch!=4)
    {
        printf("\n1. addition\n2.multiplication\n3.trenspose\n4.exit");
        printf("\n select the operation:");
        scanf("%d,&ch");
        switch(ch)
        {
            case 1:
            add_mat();
            break;
            case 2:
            mul_mat();
            break;
            case 3:
            trans_mat();
            break;
            case 4:
            exit(0);
        
        }
        getch();
    
    }
}
void add_mat()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("\n enter the matrix A(3x3): \n");
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++);{
             scanf("%d",&a[i][j]);

     }
    }
    printf("\n enter the matrix B(3x3): \n");
        for(i=0; i<3; i++){
            for(j=0; j<3; i++){
                scanf("%d", &b[i][j]);
            }
        }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\n A : ");
    print_mat(a);
    printf("\n B : ");
    print_mat(b);
    printf("\n C: ");
    print_mat(c);

}
void mul_mat(){
    int i, j, k, sum;
    int a[3][3], b[3][3], c[3][3];
    printf("\n enter the matrix A(3x3): \n");
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("\n enter the matrix B(3x3): \n");
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                scanf("%d",&b[i][j]);
            }
        }
    sum = 0;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            for(k=0; k<3; k++){
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }
    printf("\n A : ");
    print_mat(a);
        printf("\n B : ");
        print_mat(b);
            printf("\n A*B : ");
            print_mat(c);
}
    void trans_mat(){
        int i, j;
        int a[3][3],at[3][3];
            printf("\n Enter matrix A(3x3): \n");
                for(i=0; i<3; i++){
                    for(j=0; j<3; j++){
                        scanf("%d", &a[i][j]);
                        at[j][i]=a[i][j];
                    }
                }
            printf("\n A : ");
            print_mat(a);
                printf("\n B : ");
                print_mat(at);
    }
void print_mat(int x[3][3]){
    int i, j;
        printf("\n");
            for(i=0; i<3; i++){
                printf("\n");
                for(j=0; j<3; j++){
                    printf("\t %d", x[i][j]);
                }
            }
}