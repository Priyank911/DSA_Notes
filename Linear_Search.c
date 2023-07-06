#include<stdio.h>
int search(int arr[],int N, int x)
{
	for(int i=0; i< N; i++)
	if(arr[i]==x)
	return i;
	return -1;
}
//Driver_Code

int main(void){
	int arr[]= {20,30,48,10,40};
	int x= 40;
	int N = sizeof(arr)/sizeof(arr[0]);
	
	//Finction Call
	int result = search(arr,N,x);
	(result==-1)
	? printf("Element is not present in array")
	: printf("Element is present at index %d",result);
	return 0;
}
