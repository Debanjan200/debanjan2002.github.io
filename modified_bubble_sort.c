#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int arr[], int n){
 int j,count,temp,i;

 for(i=n-1;i>=0;i--){
  count=0;
  for(j=0;j<=i;j++){
   if(arr[j]>arr[j+1]){
    temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
    count++;
   }
  }
  if(count==0){
   break;
  }
 }
 printf("after bubble sort:\n");
 for(i=0;i<n;i++){
  printf("%d\n",arr[i]);
 }
}

int main(){
 int *arr,i,n;
 printf("enter the size of the array size:");
 scanf("%d",&n);

 arr=(int*)malloc(n*sizeof(int));
 printf("enter array element:\n");
 for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
 }
 bubble_sort(arr,n);
 free(arr);
 return 0;
}