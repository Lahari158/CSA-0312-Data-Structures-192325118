#include<stdio.h>
void bubblesort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
  }
}
void print(int a[],int n){
	for(int i=0;i<n;i++){
		printf(" %d ",a[i]);
	}
	printf("\n");
}
int main(){
	int a[]={68,3,90,32,1,23,556,8};
	int n=sizeof(a)/sizeof(a[0]);
	printf("Unsorted Array:\n");
	print(a,n);
	bubblesort(a,n);
	printf("Sorted Array:\n");
	print(a,n);
	return 0;
}
