#include<stdio.h>
void find_even_or_odd(int a[],int n){
	printf("Even Numbers:\n");
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			printf(" %d ",a[i]);
		}
	}
	printf("\n Odd Numbers::\n");
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			printf(" %d ",a[i]);
		}
	}
	printf("\n");
}
int main(){
	int a[]={1,8,6,9,3,4,6,7,5};
	int n=sizeof(a)/sizeof(a[0]);
	find_even_or_odd(a,n);
	return 0;
}