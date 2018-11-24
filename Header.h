#pragma once
#include <iostream>
#include <vector>

using namespace std;

class UnidaysDiscountChallenge //Here is the UnidaysDiscountChallenge class that was mentioned in the brief
{
public:
	void AddToBasket(double); //I have protoyped these functions in the header file 
	void ViewBasket();
	double CalculateTotalPrice();
	UnidaysDiscountChallenge() //This is the constructor, it contains code that outputs to the console. This is for troubleshooting
	{
		//cout << "Constructor invoked" << endl;
	}
private:
	vector<double> Basket; //These are all the private variables used within this class
	int itemA = 0;
	int itemB = 0;
	int itemC = 0;
	int itemD = 0;
	int itemE = 0;
	double itemATotal = 0.00;
	double itemBTotal = 0.00;
	double itemCTotal = 0.00;
	double itemDTotal = 0.00;
	double itemETotal = 0.00;
	double Discount = 0.00;
};