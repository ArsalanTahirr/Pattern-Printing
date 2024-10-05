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
        int y=i+64;
        for(int j=1; j<=ncp; j++){
            if(j<=i) printf("%c ",j+64);
            else printf("%c ",--y);
        }
        ncp+=2;
        printf("\n");
    }
    return 0;
}