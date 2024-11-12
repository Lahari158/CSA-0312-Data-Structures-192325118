#include<stdio.h>
int binary_search(int a[],int n,int key){
	int l=0,u=n-1;
	while(l<u){
		int mid=(l+u)/2;
		if(a[mid]==key){
			return mid;
		}
		else if(key>a[mid])
		{
			l=mid+1;
		}
		else
		u=mid-1;
	}
	return -1;
}
int main(){
	int a[]={2,5,8,12,16,23,38,56,72,91};
	int n=sizeof(a)/sizeof(a[0]);
	int key=23;
	int res=binary_search(a,n,key);
	if(res!=-1){
		printf("Element is found in index:%d",res);
	}
	else{
		printf("element not found");
	}
	return 0;
	
}
