#include<stdio.h>
int sum_of_arrays(int a1[],int m,int a2[],int n){
	int i,totalsum=0;
	for(i=0;i<m;i++){
		totalsum+=a1[i];
	}
	for(i=0;i<n;i++)
{
	totalsum+=a2[i];
}
return totalsum;
}
int main(){
	int a1[]={1,2,3,4,5};
	int a2[]={6,7,8,9,10};
	int m=sizeof(a1)/sizeof(a1[0]);
	int n=sizeof(a2)/sizeof(a2[0]);
	int result=sum_of_arrays(a1,m,a2,n);
	printf("Sum of two arrays:%d",result);
	return 0;
}