#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a=n+1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j || i+j==a) printf("* ");
            else printf("  ");

        }       
        printf("\n");
    }
return 0;

}