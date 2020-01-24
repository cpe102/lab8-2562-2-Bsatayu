#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;



int main(){	
double loan,interest,amount;
     cout << "Enter initial loan: " ;
	 cin >> loan; 
	 cout << "Enter interest rate per year (%): ";
	 cin >> interest;
	 cout << "Enter amount you can pay per year: ";
	 cin >> amount;

    cout <<"\n";
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	double year,inter,total,newbalance;
	while(loan!=0){
        
	    inter = loan*interest/100;
	    total = loan + inter;
		if(loan<amount){ 
             amount = total;
			 newbalance=0;
		}else{
			newbalance = total - amount;
		}
	 
	    year++;
	    
	
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << inter;
	cout << setw(13) << left << total;
	cout << setw(13) << left << amount;
	cout << setw(13) << left << newbalance;
	cout << "\n";	
	loan = newbalance;
	}
	return 0;
}
