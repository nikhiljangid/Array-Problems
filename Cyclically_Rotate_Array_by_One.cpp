#include<iostream>
using namespace std;
int main(){
	int arr[] = {10,20,30,40,50}, temp, i;
	int n=sizeof(arr)/sizeof(arr[0]);
	
	temp = arr[n-1];
	
	for(i=n-1; i>=0; i--){
		arr[i]=arr[i-1];
	}
	
	arr[0] = temp;
	cout<<"Rotated : ";
	for(i=0; i<n; i++)
		cout<<arr[i]<<" ";
}
