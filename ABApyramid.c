#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }
        int ch='A';
        for(int j=1; j<=i; j++){
            printf("%c ",ch);
            ch++;
        }
        ch=ch-2;
        for(int j=1; j<=i-1; j++){
            printf("%c ",ch--);
        }
        printf("\n");
    }
    return 0;
}