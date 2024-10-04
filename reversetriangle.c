#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(int i=1; i<=a; i++){
        if(i%2!=0){
            for(int j=1; j<=i; j++){
                printf("%d ",j);
             }    
        }
        else{
            char ch='A';
            for(int j=1; j<=i; j++){
                printf("%c ",ch);
                ch++;
             }    

        }
        printf("\n");
    }
    return 0;
}