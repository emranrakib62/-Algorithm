#include<stdio.h>
void main(){
    int n,i,search,found=0,a[5];
    printf("Enter number of elements a\n");
    scanf("%d",&n);
    printf("Enter %d integer(s)\n",n);

    for(i=0;i<n;i++)
            scanf("%d",&a[i]);
   printf("Enter number to search\n");
    scanf("%d",&search);

    for(i=0;i<n;i++){
        if(a[i]==search){
            printf("Data found",i);
            found++;
            break;
        }
    }
    if(found==0){
        printf("Data not found");
    }
}
