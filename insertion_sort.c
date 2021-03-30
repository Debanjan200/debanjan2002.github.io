#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int arr[],int n){
 int temp,j,cur,i;

 for(i=1;i<n;i++){
  j=i;
  cur=arr[i];

  while(j>0 && arr[j-1]>cur){
   temp=arr[j-1];
   arr[j-1]=arr[j];
   arr[j]=temp;
   j--;
  }
 }

 printf("after insertion sort:\n");
 for(j=0;j<n;j++){
  printf("%d\n",arr[j]);
 }
}

int main(){
 int *arr,n,i;

 printf("enter the size of the array:");
 scanf("%d",&n);

 arr=(int*)malloc(n*sizeof(int));

 printf("please enter array element:\n");
 for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
 }

 insertion_sort(arr,n);
 return 0;
}