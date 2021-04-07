// given an array which consists of only 0, 1 and 2. Sort the array
#include<iostream>
using namespace std;
int main(){
	int arr[3], temp;
	cout<<"Enter 0, 1 and 2 randomly : ";
	
	cin>>arr[0]>>arr[1]>>arr[2];
	
	if(arr[0]==0 && arr[1]==1 && arr[2] == 2){
		cout<<"Sorted : "<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
	}	
	
	else if(arr[0]==0 && arr[1]==2 && arr[2]==1){
		temp=arr[1];
		arr[1]=arr[2];
		arr[2]=temp;
		cout<<"Sorted : "<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
	}
	
	else if(arr[0]==1 && arr[1]==0 && arr[2]==2){
		temp=arr[0];
		arr[0]=arr[1];
		arr[1]=temp;
		cout<<"Sorted : "<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
	}
	
	else if(arr[0]==1 && arr[1]==2 && arr[2]==0){
		temp=arr[0];
		arr[0]=arr[2];
		arr[2]=arr[1];
		arr[1]=temp;
		cout<<"Sorted : "<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
	}
	
	else if(arr[0]==2 && arr[1]==1 && arr[2]==0){
		temp=arr[0];
		arr[0]=arr[2];
		arr[2]=temp;
		cout<<"Sorted : "<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
	}
	
	else{//arr[0]==2 && arr[1]==0 && arr[2]==1
		temp=arr[0];
		arr[0]=arr[1];
		arr[1]=arr[2];
		arr[2]=temp;
		cout<<"Sorted : "<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
	}
}
