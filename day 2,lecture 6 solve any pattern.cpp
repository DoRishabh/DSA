#include<iostream>
using namespace std;
int main(){
	/*Problem 1 printing star pattern in manner *****
	                                            *****
	                                            *****
	                                            *****
	                                            *****
    */
    
    // Building concept observing patterns
    cout<<"Building concept observing patterns"<<endl;
    for(int i=1;i<=5;i=i+1){
    	cout<<"*"<<" ";
	}
	cout<<endl;
	 for(int i=1;i<=5;i=i+1){
    	cout<<"*"<<" ";
	}
	cout<<endl;
	 for(int i=1;i<=5;i=i+1){
    	cout<<"*"<<" ";
	}
	cout<<endl;
	 for(int i=1;i<=5;i=i+1){
    	cout<<"*"<<" ";
	}
	cout<<endl; 
	for(int i=1;i<=5;i=i+1){
    cout<<"*"<<" ";
	}
	cout<<endl;
	//instead of running same loop 5 baar alag alag cant i take single instance and run it 5 times
    cout<<endl;
	cout<<"Correct Approach"<<endl;
	for(int i=1;i<=5;i=i+1){
	for(int i=1;i<=5;i=i+1){
		cout<<"*"<<" ";
	}
	cout<<endl;
		
	}
	
	cout<<endl;
	
	
	//problem 2, 10 pattern
	cout<<"problem 2, 10 pattern"<<endl;
	for(int row=1;row<=4;row=row+1){
		//print 10 hr baar kri jao 5 tk
		for(int column=1;column<=5;column=column+1){
			cout<<"10"<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	
	//problem 3,11111222223..4..5 pattern
	cout<<"problem 3,12345 pattern"<<endl;
	for(int row=1;row<=5;row=row+1){
		for(int column=1;column<=5;column=column+1){
			cout<<row<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	
	//problem 4 12345 pattern
	cout<<"problem 4"<<endl;
	for(int row=1;row<=5;row=row+1){
		for(int column=0;column<5;column=column+1){
			cout<<column+1<<" ";
		}
		cout<<endl;
	}
	
	//sir method
	cout<<endl;
	cout<<"sir method"<<endl;
	for(int row=1;row<=5;row=row+1){
		for(int column=1;column<=5;column=column+1){
			cout<<column<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	
	// problem 5
	cout<<"problem 5 to print 54321"<<endl;
	for(int row=1;row<=5;row=row+1){
		for(int column=5;column>=1;column=column-1){
			cout<<column<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	
	// problem 6
	cout<<"problem 6 to print 1 4 9 16 25"<<endl;
	for(int row=1;row<=5;row=row+1){
		for(int column=1;column<=5;column=column+1){
			cout<<column*column<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	
	//problem 7 //2 other ways alsoo
	cout<<"problem 7 //2 other ways alsoo"<<endl;
	cout<<"print abcde pattern 2 other ways alsoo explore from sirs video but our own method is also easy and optimal"<<endl;
	for(char row='a';row<='e';row=row+1){
		for(char column='a';column<='e';column=column+1){
			cout<<row<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	
	//problem 8 viip see code
	cout<<"problem 8 viip see code"<<endl;
	int count=1;
	for(int row=1;row<=5;row=row+1){
		for(int column=1;column<=5;column=column+1){
			cout<<count<<" ";
			count=count+1;
		}
		cout<<endl;
	}	
	cout<<endl;
	
	//sirs method2 
	cout<<"Sirs method2 "<<endl;
	for(int row=1;row<=5;row=row+1){
		for(int column=1;column<=5;column=column+1){
			cout<<(row-1)*5+column<<" ";
		}
		cout<<endl;
	}
	return 0;
}
