#include<iostream>
using namespace std;
void swap(int *a, int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
}
int main(){
	int arr[10];
	int n, i, j;
	cout<<"Enter the size of array : ";
	cin>>n;
	cout<<"Enter the elements : ";
	for(int c=0; c<n; c++)
		cin>>arr[c];
		
	i=0; j=n-1;
	while(i<j){
		swap(&arr[i],&arr[j]);
		i++;
		j--;
	}
	cout<<"Reversed array : ";
	for(int k=0; k<n; k++)
		cout<<" "<<arr[k];
}
