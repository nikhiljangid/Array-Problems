//move all negative elements to one side of array
#include<iostream>
using namespace std;
int main(){
	int arr[]={1,0,5,-9,-10,5,-15,20,-3,0}, i, j=-1, temp, n;
	n=sizeof(arr)/sizeof(arr[0]);
	for(i=0; i<n; i++){
		if(arr[i]<0){
			j++;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	cout<<"Negative elements on left : ";
	for(i=0; i<n; i++)
		cout<<" "<<arr[i];
}
