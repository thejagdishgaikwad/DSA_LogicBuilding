#include<stdio.h>
int main(){
    int n, i, m, key, hi[10], h[10], rel_add, p;
    m=10;
    for(i=0; i<m; i++)
    hi[i]= -1;
    printf("\n Hash Table Size : %d", m);
    printf("\n No of keys : ");
    scanf("%d", &n);
    printf("Enter Keys : ");
        for(i=0; i<n; i++){
            printf("\n %d.", i+1);
            scanf("%d", &key);
            p=0;
            rel_add=key%m;
                if(hi[rel_add]==-1){
                    hi[rel_add]=1;
                    h[rel_add]=key;
                    printf("\t H(%d,%d) = %d", key, p, rel_add);
                }
                else{
                    printf("\t H(%d,%d) = %d (Collision Case!)", key, p, rel_add);
                    p=1;
                    while(p<m-1){
                        printf("\n");
                        rel_add=((key%m)+p)%m;
                            if(hi[rel_add]==-1){
                                hi[rel_add] = 1;
                                hi[rel_add] = key;
                                printf("\t H(%d, %d) = %d", key, p, rel_add);
                                break;
                            }
                            else{
                                p++;
                            }
                    }
                }
        }
    return 0;
}