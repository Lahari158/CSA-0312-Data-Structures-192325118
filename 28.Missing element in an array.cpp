#include<stdio.h>
int find_missing_element(int a[],int n){
	int totalsum=n*(n+1)/2;
	int arraysum=0;
	for(int i=0;i<n-1;i++){
		arraysum+=a[i];
	}
	return totalsum-arraysum;
}
int main(){
	int a[]={1,2,3,5,6};
	int n=6;
	int res=find_missing_element(a,n);
	printf("Missing element:%d",res);
	return 0;
}
