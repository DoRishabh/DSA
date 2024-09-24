#include<iostream>
using namespace std;
int main(){
	for(int row=5;row>=1;row=row-1){
		for(int column=1;column<=row;column=column+1){ //row times star ko print lkrna ka lia
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	//or for above we can do
	for(int row=1;row<=5;row=row+1){
		for(int column=1;column<=5-(row-1);column=column+1){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int row=5;row>=1;row=row-1){
		for(int column=1;column<=row;column=column+1){
			cout<<column<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	//or for above sir code
	for(int row=1;row<=5;row=row+1){
		for(int column=1;column<=5-(row-1);column=column+1){
			cout<<column<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
		for(int row=1;row<=5;row=row+1){
		for(int column=1;column<=5-(row-1);column=column+1){
			cout<<column<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int row=1;row<=5;row=row+1){
		for(int column=5;column>=5-(row-1);column=column-1){ //see video viip for patttern 5 to 5-(row-1)
			cout<<column<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int row=1;row<=5;row=row+1){
		for(int column=1;column<=row;column=column+1){
			cout<<column<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int row=1;row<=5;row=row+1){
		for(int column=1;column<=row;column=column+1){
			cout<<row<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int row=1;row<=5;row=row+1){
		for(int column=row;column>=1;column=column-1){
			cout<<column<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(char row='a';row<='e';row=row+1){
		for(char column='a';column<=row;column=column+1){
			cout<<row<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}
