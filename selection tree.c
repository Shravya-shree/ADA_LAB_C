#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void selectionSort(int arr[],int n){
int i,j;
for(i=0;i<n;++i){
int minindex=i;
for(j=i+1;j<n;++j){
if(arr[j]<arr[minindex]){
minindex=j;
}
}
if(minindex!=i){
int temp=arr[i];
arr[i]=arr[minindex];
arr[minindex]=temp;
}
}
}int main(){
int n,i;
printf("enter the number of elements:");
scanf("%d",&n);
int arr[n];
srand(time(NULL));
for(i=0;i<n;++i){
arr[i]=rand()%10000;
}
clock_t start=clock();
selectionSort(arr,n);
clock_t end=clock();
printf("sorted array is:");
for(i=0;i<10;i++)
printf("%d\t",arr[i]);
double time_taken=((double)(end-start))/CLOCKS_PER_SEC;
printf("\ntime taken for sorting:%f seconds\n",time_taken);
return 0;
}