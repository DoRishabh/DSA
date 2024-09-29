/* problems covered or cases covered

1> to search an element in array and return its index if found otherwise return -1
2> to search in array with n inputs
3> to reverse an array
4> to find second max in array
5> to find missing number array
6> to find nth element in fibonacci series or whole fibonacci series till n using array
7> to rotate array by 1 or cyclic rotate

*/
#include<iostream>
using namespace std;

void searchinarr(){
int arr[]={7,8,4,2,9,3};
int x=3; // 6 present in array or not if present retu.its index else return -1
int index=-1;
for(int i=0;i<6;i++){
	if(arr[i]==x){
		index=i;
		break;
	}
}
cout<<"index is "<<index<<endl;
}

void nsearchinarr(){
int size;
cout<<"enter size of array"<<endl;
cin>>size;
int arr[size];
cout<<"enter elements"<<endl;
for(int i=0;i<size;i++){
	cin>>arr[i];
}
cout<<"elements are"<<endl;
for(int i=0;i<size;i++){
	cout<<arr[i]<<" ";
}
int index=-1;
int x;
cout<<endl;
cout<<"enter element to search and return its index"<<endl;
cin>>x;
for(int i=0;i<size;i++){
	if(arr[i]==x){
		index=i;
		break;
	}
}
cout<<"Element "<<x<<" found at index "<<index<<endl; // -1 means not found
}

void reversearr(){
cout<<"problem 2 reverse an array"<<endl;
int arr[]={5,7,2,4,11};
int i=0;
int j=4; //size-1
while(i<j){
	int temp=arr[i]; //swap
	arr[i]=arr[j];
	arr[j]=temp;
	i++;
	j--;
}
for(int i=0;i<5;i++){
	cout<<arr[i]<<" ";
}
cout<<endl;
}
void secondmax(){
	int arr[]={3,6,7,2,4,1};
	int first=INT_MIN;
	for(int i=0;i<6;i++){
		if(arr[i]>first){
			first=arr[i];
		}
	}
	cout<<"highest element is "<<first<<endl;
	int secmax=INT_MIN;
	for(int i=0;i<6;i++){
		if(arr[i]!=first){
			if(arr[i]>secmax){
				secmax=arr[i];
			}
		}
	}
	cout<<"second max element is "<<secmax<<endl;
	
}
void missingnumber(){
	int arr[]={1,2,3,4,5,7};
	int n=7;
	int total=n*(n+1)/2;
	int sum=0;
	for(int i=0;i<6;i++){
		sum=sum+arr[i];
	}
	cout<<"missing number is "<<total-sum<<endl;
}

void fibonacciseries(){
	int n;
	cout<<"enter number at which you want to know fibnacco series element"<<endl;
	cin>>n;
	int arr[n];
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<n;i++){        
		arr[i]=arr[i-1]+arr[i-2];
	}
	cout<<"element at "<<n<<"th position in series is "<<arr[n-1];
	cout<<endl;
	cout<<"full series till n is"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}


void rotatearray(){
	int arr[1000];
	int size;
	cout<<"enter size of array"<<endl;
	cin>>size;
	cout<<"enter elements"<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"array is "<<endl;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	int temp=arr[size-1];
	for(int i=size-2;i>=0;i--){
		arr[i+1]=arr[i];
	}
	arr[0]=temp;
	cout<<endl;
	cout<<"rotated array by 1 is"<<endl;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
int select;
cout<<"enter 1 to search in array"<<endl;
cout<<"enter 2 to search in array with n inputs"<<endl;
cout<<"enter 3 to reverse an array"<<endl;
cout<<"enter 4 to find second max in array"<<endl;
cout<<"enter 5 to find missing number array"<<endl;
cout<<"enter 6 to find nth element in fibonacci series or whole fibonacci series till n using array"<<endl;
cout<<"enter 7 to rotate array by 1 or cyclic rotate"<<endl;
cin>>select;
switch(select){
	case 1:
    searchinarr();
    break;
    
    case 2:
    // now for n inputs
    nsearchinarr();
    break;
    
    case 3:
    // problem 2 reverse an array
    reversearr();
    break;
    
    case 4:
    // problem 3 second max in array
    secondmax();
    break;
    
    case 5:
    // problem 4 
    missingnumber();
    break;
    
    case 6:
    // problem 5 fibonacci series 
    fibonacciseries();
    break;
    
    case 7:
    // problem 5 rotate array by 1 or cyclic rotate 
    rotatearray();
    break;
    
}
return 0;
}
