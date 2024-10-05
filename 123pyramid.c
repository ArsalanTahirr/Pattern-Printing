#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int ncp=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
        for(int j=1; j<=ncp; j++){
            printf("%d ",j);
        }
        ncp+=2;
        printf("\n");
    }
    return 0;
}