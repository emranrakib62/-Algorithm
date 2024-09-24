
#include<stdio.h>
int main(void){
    int n,i,j,temp,A[5];
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter %d integers\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if (A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    printf("Sorted list in ascending order:\n");
    for(i=0;i<n;i++){
        printf("%d\n",A[i]);
    }
}
