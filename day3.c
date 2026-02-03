#include <stdio.h>
#include <stdlib.h>

int main(){
int n;
int index=-1;
int tarnm;
int comp=0;

printf("Enter size of array:");
scanf("%d",&n);


int *arr;
arr=(int*)malloc(n*sizeof(int));

for(int i=0;i<n;i++){
    printf("Enter %d element of array:",i);
    scanf("%d",&arr[i]);
}
printf("Enter target number:");
scanf("%d",&tarnm);

for(int i=0;i<n;i++){

     comp++;
    if(arr[i]==tarnm){
        index=i;
        break;
    }

}

if(index>0){
    printf("Number found at index: %d\n",index);
}
else{
    printf("Not found in array \n");
}
printf("Number of comparisons: %d\n",comp);

free(arr);

    return 0;
}