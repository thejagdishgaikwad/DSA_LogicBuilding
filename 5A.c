#include<stdio.h>
int main(){
    int n, i, m, key, hi[10], h[10], rel_add;
    m=10;
    for(i=0; i<m; i++)
    hi[i]=-1;
    printf("\n Hash Table Size : %d", m);
    printf("\n No Of Keys : ");
    scanf("%d", &n);
    printf("\n Enter The Keys : ");
    for(i=0; i<n; i++){
        printf("\n %d.", i+1);
        scanf("%d", &key);
        rel_add=key%m;
        if(hi[rel_add]==-1){
            hi[rel_add]=1;
            h[rel_add]=key;
            printf("\t H(%d) = %d mod %d = %d", key, key, m, rel_add);

        }
        else{
            printf("\t H(%d) = %d mod %d = %d (Collision Case)", key, key, m, rel_add);
        }
    }
    return 0;
}