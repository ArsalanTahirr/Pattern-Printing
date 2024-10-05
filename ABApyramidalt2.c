#include<stdio.h>
int main(){
    int n,ch1;
    printf("Enter a number: ");
    scanf("%d",&n);
    int ncp=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
        int ch='A';
        for(int j=1; j<=ncp; j++){
            if(j<=i) printf("%c ",ch++);
            if(j==i) ch1=ch-2;
            if(j>i) printf("%c ",ch1--);
        }
        ncp+=2;
        printf("\n");
    }
    return 0;
}