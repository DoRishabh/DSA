#include<iostream>
using namespace std;
int main()
{
	// problem 1
	cout<<"// problem 1"<<endl;
	cout<<endl;
for(int row=1;row<=5;row=row+1){
	for(int column=1;column<=(5-row);column=column+1){
		cout<<" ";
	}
	for(int column=1;column<=row;column=column+1){
		cout<<"*";//try case increase 1 space here"* " and one in above "  " // solved in below problem + added n as input for...
		          // try case for triangle type or pyramid pattern increase 1 space star only //solved below the below problem
	}
	cout<<endl;
}
cout<<endl;
   // for n inputs
   int n;
   cout<<"// for n inputs"<<endl;
   cin>>n;
   cout<<endl;
   for(int row=1;row<=n;row=row+1){
   	for(int column=1;column<=(n-row);column=column+1){
   		cout<<"  ";
	   }
	for(int column=1;column<=row;column=column+1){
		cout<<"* ";
	}
	cout<<endl;
   }
   	cout<<endl;
   //similarly for triangle type patter just increase one space after star
   int n1;
   cout<<"//similarly for triangle type patter just increase one space after star"<<endl;
   cin>>n1;
   for(int row=1;row<=n1;row=row+1){
   	for(int column=1;column<=(n1-row);column=column+1){
   		cout<<" ";
	   }
	for(int column=1;column<=row;column=column+1){
		cout<<"* ";
	}
	cout<<endl;
   }
   cout<<endl;
   //problem 2
   cout<<"//problem 2"<<endl;
   for(int row=1;row<=4;row=row+1){
   	for(int column=1;column<=(4-row);column=column+1){
   		cout<<"  ";
	   }
    for(int column=1;column<=row;column=column+1){
    	cout<<row<<" ";
	}
	cout<<endl;
   }
   	cout<<endl;
   	// for n input by observation of above problem
   	int n2;
   	cout<<"// for n input"<<endl;
   	cin>>n2;
   	for(int row=1;row<=n;row=row+1){
   	for(int column=1;column<=(n-row);column=column+1){
   		cout<<"  ";
	   }
    for(int column=1;column<=row;column=column+1){
    	cout<<row<<" ";
	}
	cout<<endl;
   }
   cout<<endl;
    // problem 3
   cout<<"problem 3"<<endl;
   cout<<endl;
   for(int row=1;row<=5;row=row+1){
   	for(int column=1;column<=(5-row);column=column+1){
   		cout<<"  ";
	   }
	for(int column=1;column<=row;column=column+1){
		cout<<column<<" ";
	}
	cout<<endl;
   }
   cout<<endl;
   //for n inputs
   int n3;
   cout<<"for n inputs"<<endl;
   cin>>n3;
   cout<<endl;
     for(int row=1;row<=n3;row=row+1){
   	for(int column=1;column<=(n3-row);column=column+1){
   		cout<<"  ";
	   }
	for(int column=1;column<=row;column=column+1){
		cout<<column<<" ";
	}
	cout<<endl;
   }
   cout<<endl;
   // problem 4
   for(int row=1;row<=5;row=row+1){
   	for(int column=1;column<=(5-row);column=column+1){
   		cout<<"  ";
	   }
	for(char ch='A';ch<='A'+(row-1);ch=ch+1){
		cout<<ch<<" ";
	}
	cout<<endl;
   }
   cout<<endl;
   // for n inputs
    int n5;
    cout<<"for n inputs enter n where n can be thouht of as row as usual"<<endl;
    cin>>n5;
    cout<<endl;
   for(int row=1;row<=n5;row=row+1){
   	for(int column=1;column<=(n5-row);column=column+1){
   		cout<<"  ";
	   }
	for(char ch='A';ch<='A'+(row-1);ch=ch+1){
		cout<<ch<<" ";
	}
	cout<<endl;
   }
   cout<<endl;
   //problem 5
   cout<<"problem 5"<<endl;
   for(int row=1;row<=5;row=row+1){
   	for(int column=1;column<=(5-row);column=column+1){
   		cout<<"  ";
	   }
	for(int column=row;column>=1;column=column-1){
		cout<<column<<" ";
	}
	cout<<endl;
   }
   cout<<endl;
   //hard hw ques n=5 pyramid self solved
    int hrd=1;
     for(int row=1;row<=5;row=row+1){
   	for(int column=1;column<=(5-row);column=column+1){
   		cout<<"  ";
	   }
	for(int column=1;column<=hrd;column=column+1){
		cout<<"* "<<" ";
	}
	cout<<endl;
	hrd=hrd+2;
   }
   cout<<endl;
   //for n inputs
   int nh;
   cout<<"enter n value"<<endl;
   cin>>nh;
    int hard=1;
     for(int row=1;row<=nh;row=row+1){
   	for(int column=1;column<=(nh-row);column=column+1){
   		cout<<"  ";
	   }
	for(int column=1;column<=hard;column=column+1){
		cout<<"* "<<" ";
	}
	cout<<endl;
	hard=hard+2;
   }
   cout<<endl;
   return 0;
}
