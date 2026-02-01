#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=5;
    int num,pos;
    int*arr;
    arr=(int*)malloc(n*sizeof(int));
    if(arr == NULL){
        return 1;
    }
    for(int i=0;i<n;i++){
        printf("Enter %d element of array:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("ARRAY: ");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("Enter number to insert:");
    scanf("%d",&num);
    printf("Enter position to insert:");
    scanf("%d",&pos);

    n++;
    arr=(int*)realloc(arr,n*sizeof(int));

    for(int i=n-1; i<pos ; i++){
        arr[i]=arr[i-1];
    }
    arr[pos]=num;
   printf("ARRAY AFTER INSERTION:");
   for(int i=0;i<n;i++){
     printf("%d\t",arr[i]);
   }
   free(arr);
   
   return 0;

}


