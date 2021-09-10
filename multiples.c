#include<stdio.h>

void main(){
    int i,flag;    
    for(i=1;i<=100;i++){
       flag=0;
        if (i%2==0)
        {
            printf("Bish");
            flag=1;
        }
        if (i%3==0)
        {
            printf("Bash");
            flag=1;
        }
        if (i%5==0)
        {
            printf("Bosh");
            flag=1;
        }
        if(flag==0){
            printf("%d",i);
        }
        printf("\n");  
    }
}