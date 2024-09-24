// stock00.h -- Stock Class Interface
// version 00

#pragma once
#ifndef STOCK00_H_
#define STOCK00_H_
// above codes belong to Memory Models.

#include <string>
using namespace std;

class Stock {
private:
	string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot();     // definition kept separate

public:
	void acquire(const string& co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};