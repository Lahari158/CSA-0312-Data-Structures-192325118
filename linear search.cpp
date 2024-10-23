#include<stdio.h>
int main(){
	int a[]={2,52,6,8,99,31,87,898};
	int n=sizeof(a)/sizeof(a[0]);
	int key=99;
	for(int i=0;i<n;i++){
		if(a[i]==key){
			printf("Element found in index:%d",i);
			break;
		}
		if(i==n){
			printf("Element not found");
		}
	}
	return 0;
}
