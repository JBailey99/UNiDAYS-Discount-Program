#include <iostream>
#include <vector>
#include "Header.h"

using namespace std;

void UnidaysDiscountChallenge::AddToBasket(double Item) //This function adds the parameter variable to the basket vector. It also adds to the item counts and totals 
{
	if (Item == 8.00)
	{
		itemA++;
		itemATotal += Item;
	}
	if (Item == 12.00)
	{
		itemB++;
		itemBTotal += Item;
	}
	if (Item == 4.00)
	{
		itemC++;
		itemCTotal += Item;
	}
	if (Item == 7.00)
	{
		itemD++;
		itemDTotal += Item;
	}
	if (Item == 5.00)
	{
		itemE++;
		itemETotal += Item;
	}
	Basket.push_back(Item);
}

void UnidaysDiscountChallenge::ViewBasket() //This function is used to output the baskets current contents to the console
{
	if (Basket.empty())
	{
		cout << "Your basket is empty" << endl;
	}
	else 
	{
		cout << "Your basket contains:" << endl; //View Basket
		if (itemA > 0) cout << itemA << " x Item A = \x9c" << itemATotal << endl;
		if (itemB > 0) cout << itemB << " x Item B = \x9c" << itemBTotal << endl;
		if (itemC > 0) cout << itemC << " x Item C = \x9c" << itemCTotal << endl;
		if (itemD > 0) cout << itemD << " x Item D = \x9c" << itemDTotal << endl;
		if (itemE > 0) cout << itemE << " x Item E = \x9c" << itemETotal << endl;
	}
}

double UnidaysDiscountChallenge::CalculateTotalPrice() //This function calculates the total order price with the various discounts and delivery charge. It also outputs these values to the console
{
	double Total;
	double DeliveryCharge;

	for (int i = 1; i <= itemB; i++) //Item B Pricing Rule (2 for £20)
	{
		if (i % 2 == 0)
		{
			Discount += 4.00;
		}
	}

	for (int i = 1; i <= itemC; i++) //Item C Pricing Rule (3 for £10)
	{
		if (i % 3 == 0)
		{
			Discount += 2.00;
		}
	}

	for (int i = 1; i <= itemD; i++) //Item D Pricing Rule (Buy 1 get 1 free)
	{
		if (i % 2 == 0)
		{
			Discount += 7.00;
		}
	}

	for (int i = 1; i <= itemE; i++) //Item E Pricing Rule (3 for 2)
	{
		if (i % 3 == 0)
		{
			Discount += 5.00;
		}
	}

	ViewBasket();

	Total = itemATotal + itemBTotal + itemCTotal + itemDTotal + itemETotal;
	cout << endl << "Basket Total = " << "\x9c" << Total << endl;
	cout << "Discounts Applied = -" << "\x9c" << Discount << endl << endl;

	if (Total < 50.00)
	{
		DeliveryCharge = 7.00;
		cout << "Delivery Charge = " << "\x9c" << DeliveryCharge;
	}
	else
	{
		DeliveryCharge = 0.00;
		cout << "Delivery Charge = " << "\x9c" << DeliveryCharge;
	}
	return Total + DeliveryCharge - Discount;
}
