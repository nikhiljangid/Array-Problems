#include<iostream>
using namespace std;
int main(){
	int arr[10], n, i, k, max, min;
	cout<<"Enter size of list : ";
	cin>>n;
	cout<<"Enter elements in the list"<<endl;
	for(k=0; k<n; k++)
		cin>>arr[k];
		
	min=arr[0], max=arr[0];
	for(i=1; i<n; i++){
		if(min>arr[i])
			min=arr[i];
		
		if(max<arr[i])
			max=arr[i];
	}
	
	cout<<endl<<"Min = "<<min<<endl;
	cout<<"Max = "<<max;
	
}
