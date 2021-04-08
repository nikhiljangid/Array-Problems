#include<iostream>
using namespace std;
int main(){
	int A[] = {4,8,9,10,15}; //sorted array first
	int B[] = {9,11,12,15}; //sorted arrat second
	int n = sizeof(A)/sizeof(A[0]);
	int m = sizeof(B)/sizeof(B[0]);
	int i=0,j=0, intersec[1], c=0;
	
	cout<<"Union : ";
	while(i<n && j<m){
		if(A[i] < B[j]){
			cout<<A[i]<<" ";
			i++;
		}
		else if(A[i] > B[j]){
			cout<<B[j]<<" ";
			j++;
		}
		else{
			intersec[c]= A[i];
			cout<<A[i]<<" ";
			i++;
			j++;
			c++;
		}
	}
	
	while (i<n) {
		cout<<A[i]<<" ";
        i++;
    }
    
    while (j<m) {
        cout<<B[j]<<" ";
        j++;
    }
    
    cout<<endl<<"Intersection : ";
    for(c=0; c<=(sizeof(intersec)/sizeof(intersec[0])); c++)
    	cout<<intersec[c]<<" ";
	
	return 0;
}
