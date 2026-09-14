#include<stdio.h>
int main()
        int arr[25];
        int i,positive=0,negative=0,even=0,odd=0
        printf("Enter 25 numbers:\n");
        for(i=0;i<25;i++){
                scanf("%d",&arr[i]);
                if(arr[i]>=0){
                positive++;}
                else{
               negative++;}
               if(arr[i]%2==0){
                even++;}
                else{
                odd++;}
        }
    printf("Total Positive Numbers:%d\n",positive);
    printf("Total Negative Numbers:%d\n",negative);
    printf("Total Even Numbers:%d\n",even);
    printf("Total Even Numbers:%d\n",odd0;)
    return 0;
 }

