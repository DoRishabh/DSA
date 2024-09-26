// finding minimum and maximum element in array 2 approaches for each
#include<iostream>
using namespace std;
int main(){
	int arr[]={5,1,11,0,65,31,2};
	int answer=INT_MIN; //can be thought of like minus infinity
	for(int i=0;i<7;i++){
		if(arr[i]>answer){
			answer=arr[i];
		}
	}
	cout<<"Maximum element in array is "<<answer<<endl;
	// could also do
	int answer1=arr[0];
		for(int i=1;i<7;i++){
		if(arr[i]>answer1){
			answer1=arr[i];
		}
	}
	cout<<"Maximum element in array is "<<answer1<<endl;
	int answer2=INT_MAX; //can be thought as +infinity
	for(int i=0;i<7;i++){
		if(arr[i]<answer2){
			answer2=arr[i];
		}
	}
	cout<<"Minimum element in array is "<<answer2<<endl;
	// could also do
	int answer3=arr[0];
	for(int i=1;i<7;i++){
		if(arr[i]<answer3){
			answer3=arr[i];
		}
	}
	cout<<"Minimum element in array is "<<answer3<<endl;
	//taking input and doing above
	int a[100];
	int size;
	cout<<"size enter"<<endl;
	cin>>size;
	cout<<"enter elements"<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int minans=INT_MAX;
	int maxans=INT_MIN;
	for(int i=0;i<size;i++){
		if(minans>arr[i]){
			minans=arr[i];
		}
	}
	cout<<"min element "<<minans<<endl;
	for(int i=0;i<size;i++){
		if(maxans<arr[i]){
			maxans=arr[i];
		}
	}
	cout<<"max element "<<maxans<<endl;
	cout<<"display all elements"<<endl;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"size of arrays is "<<sizeof(a)<<endl;//size of arrays is 1 int=4 100*4=400
	cout<<"elements in arrays "<<sizeof(a)/sizeof(a[0])<<endl;//400/4=100 elements
}
