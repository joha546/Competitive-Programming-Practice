#include <iostream>
#include "stock00.h"
using namespace std;

inline void Stock::set_tot()    // inline in definition
{
	total_val = shares * share_val;
}

//The special rules for inline functions require that they be defined in each file in which
//they are used.

void Stock::acquire(const string& co, long n, double pr)
{
	company = co;
	if (n < 0) {
		cout << "Number of shares can not be negative. "
			<< company << " shares set to 0." << endl;
		shares = 0;
	}
	else {
		shares = n;
	}
	share_val = pr;
	set_tot();
}

void Stock::buy(long num, double price)
{
	if (num < 0) {
		cout << "Number of shares purchased can't be negative. "
			<< "Transaction is aborted." << endl;
	}
	else {
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	cout;
	if (num < 0) {
		cout << "Number of shares sold can’t be negative. "
			<< "Transaction is aborted." << endl;
	}
	else if (num > shares) {
		cout << "You can’t sell more than you have! "
			<< "Transaction is aborted." << endl;
	}
	else {
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)  // qualified name for the function.
{
	share_val = price;
	set_tot();
}

void Stock::show()
{
	cout << "Company: " << company << endl;
	cout << "Shares: " << shares << endl;
	cout << "Share Price: $" << share_val << endl;
	cout << "Total Price: $" << total_val << endl;
}
