#include<iostream>
using namespace std;
int main()
{
	//problem 1
	cout<<"Problem 1 to print no fromm 101 to 200"<<endl;
	int i;
		for(i=101;i<=200;i++){        //to print no fromm 101 to 200
			cout<<i<<" ";            
		}
		cout<<endl;
		cout<<endl;
		
	//problem 2 to print a to z
	cout<<"Problem 2 to print to print a to z"<<endl;
	char j;
	for(j='a';j<='z';j=j+1){ //j++ or j=j+1 eg 'a'+1 ascii value of 'a'=98 so
		cout<<j<<" ";  }                //98+1=99='b' similarly 'a'+2='c'	                                 
    //1>j='a'
    //2>j<='z'
    //3>print j
    //4>j=j+1 go to step 2       
	cout<<endl;
	//problem 3 to print 10 to 1
	cout<<"Problem 3 to print to print 10 to 1"<<endl;
	int n;
	for(i=10;i>=1;i--){
		cout<<i<<" ";
	}
	/*
    1>i=10
    2>i<=1
    3>print i
    4>i=i-1 or i-- go to step 2                        
	*/     
	cout<<endl;
	cout<<endl;
	//problem 4 reverse numbers by taking input
	cout<<"Problem 4 to reverse numbers by taking input"<<endl;
	int inp;
	cout<<"Enter no. from where to reverse"<<endl;
	cin>>inp;
	for(int r=inp;r>=1;r--){
		cout<<r<<" ";
	}
	cout<<endl;
	cout<<endl;
	//problem 5 print 1 to 100 but with difference 3 =>1 4 7 10... i teen teen ki jump ma aage bdh rha aur rukn kb ha jb i=100 ,i<=100 tk chlta jana
    cout<<"Problem 5 to print 1 to 100 but with difference = 3"<<endl;
	int num;
	for(num=1;num<=100;num=num+3){
		cout<<num<<" ";
	}
	cout<<endl;
	cout<<endl;
	
	//problem 6 not to include n write in condition part i<n
    cout<<"Problem 6 not to include n write in condition part i<n"<<endl;
	int l;
	int m=9;
	for(l=1;l<m;l++){
		cout<<l<<" ";
	}
	cout<<endl;
	cout<<endl;
	//problem 7, 2 approaches for multiplication table making 6 ka table
	cout<<"problem 7, 2 approaches for multiplication table making"<<endl;
	
	//approach 1
	cout<<"approach 1"<<endl;
	for(int mul=6;mul<=60;mul=mul+6){
		cout<<mul<<" ";
	}
	cout<<endl;
	cout<<endl;
	//for any given no. table using observing upar wale lets make a formula
	int k;
	cout<<"enter no. for which to generate table using approach 1"<<endl;
	cin>>k;
	for(int i=k;i<=10*k;i=i+k){
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<endl;
	
	
	//approch 2
	cout<<"approach 2"<<endl;
	for(int i=1;i<=10;i++){
		cout<<"6"<<"*"<<i<<"="<<6*i<<" ";
	}
	cout<<endl;
	cout<<endl;
	//to print table of given input
	int input;
	cout<<"enter no. for which to generate table using approach 2"<<endl;
	cin>>input;
	for(int i=1;i<=10;i++){
		cout<<input<<"*"<<i<<"="<<input*i<<" ";
	}
	cout<<endl;
	cout<<endl;
	
	
	//problem 8,calculate raise to power answer of a number //seee//
	cout<<"problem 8,calculate raise to power answer of a number seee code"<<endl;
	int pow;
	int number;     // number=3 pow=4 3*3*3*3
	cout<<"enter number to calculate raise to power value"<<endl;
	cin>>n;
	cout<<"enter power"<<endl;
	cin>>pow;
	num=n;
	for(int i=1;i<pow;i++){
		num=num*n;
		}
		cout<<num;
	cout<<endl;
	cout<<endl;
	
	//problem 9,sum of first n natural numbers
	cout<<"problem 9,sum of first n natural numbers"<<endl;
	int sum;
	int nn;
	cout<<"enter first n natural numbers you want sum of my method"<<endl;
	cin>>nn;
	sum=nn;
	for(int i=1;i<nn;i++){ 
		sum=sum+i;
	}
	cout<<"sum is "<<sum<<endl;
	//or sirs method
	cout<<"Sirs Method"<<endl;
	int summ=0;
	int nno;
	cout<<"enter first n natural number you want sum of sir method"<<endl;
	cin>>nno;
	for(int i=1;i<=nno;i++){
		summ=summ+i;
	}
	cout<<summ;
	cout<<endl;
	cout<<endl;
	//fastest method
	cout<<"Fastest Method"<<endl;
	int natno;
	cout<<"enter first n natural number you want sum of fastest"<<endl;
	cin>>natno;
	cout<<(natno*(natno+1))/2;//n*n+1/2
	cout<<endl;
	cout<<endl;
	
	//problem 10,factorial 
	//  i
	//5=1*2*3*4*5
	cout<<"problem 10,factorial"<<endl;
	int facno;
	cout<<"enter number to find factorial"<<endl;
	cin>>facno;
	int fact=1;
	for(i=1;i<=facno;i++){ //1*2*3*4*5
		fact=fact*i;
	}
	cout<<fact;
	cout<<endl;
	cout<<endl;
	
	
	//check wether prime number or not eg 7 23456? divide kr rha
    cout<<"problem 10,check wether prime number or not see code"<<endl;
	int prime;
	cout<<"enter number to check prime or not"<<endl;
	cin>>prime;
	if(prime<2){
		cout<<prime<<"not prime";
		return 0;
	}
	else{
		for(int i=2;i<prime;i=i+1){
			if(prime%i==0){
			cout<<prime<<" Not Prime"<<endl; //baar baar thodi not prime print krvaunga jesa hi ek baar divisible hogya i sa toh not prime and exit or return
			return 0;
			}
		}
	}
	cout<<prime<<" is prime"<<endl;
    cout<<endl;
    cout<<endl;
    
    
    //problem 11,Fibnacco Series
    cout<<"problem 11,Fibnacco Series see code"<<endl;
    int last, previous, current;
    int nf;

    cout << "Enter the number of terms: ";
    cin >> nf;

    if (nf <= 0) {
        cout << "Enter a positive integer." << endl;
        return 0;
    }

    last = 0;
    previous = 1;

    if (nf >= 1) cout << "Fibonacci Series: " << last;
    if (nf >= 2) cout << ", " << previous;

    for(int i = 3; i <= nf; i++) {
        current = previous + last;
        cout << ", " << current;
        last = previous;
        previous = current;
    }

    cout << endl;
    cout<<"Made By Rishabh"<<endl;
    cout<<"Hare Krishna!"<<endl;
    return 0;
}
