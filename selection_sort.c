#include<stdio.h>
#include<stdlib.h>

void selection_sort(int arr[],int n){
 int i,j,temp,min;
 for(i=0;i<n-1;i++){
  min=i;
  for(j=i+1;j<n;j++){
   if(arr[j]<arr[min]){
    min=j;
   }
  }
  temp=arr[min];
  arr[min]=arr[i];
  arr[i]=temp;
 }

 printf("after selection sort:\n");
 for(i=0;i<n;i++){
  printf("%d\n",arr[i]);
 }
}

int main(){
 int n,*arr,i;

 printf("enter the size of the array:");
 scanf("%d",&n);

 arr=(int*)malloc(n*sizeof(int));
 printf("enter the array element:\n");
 for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
 }
 selection_sort(arr,n);
 free(arr);
 return 0;
}