#include <iostream>
#include <vector>
#include "Header.h"

using namespace std;

int main()
{
	UnidaysDiscountChallenge *udc = new UnidaysDiscountChallenge(); //Here the UnidaysDiscountChallenge class is initialised
	int count = 0; //This ints purpose is to stop users from going to checkout whilst the basket it empty
	char itemChoice;
	cout << "Welcome to the Unidays Shop, ";
	while (true) //A while loop is used so users can input multiple chars before being taken to the checkout
	{
		cout << "To add an item to the basket input it's corresponding character (e.g. \"a\" for Item A)" << endl << endl;
		cout << "When finished, input \"x\" to continute to Checkout" << endl << endl;

		cout << "Item      Price           Discount" << endl;
		cout << " A        \x9C" << "8.00             None" << endl;
		cout << " B        \x9C" << "12.00        2 for \x9C" << "20.00" << endl;
		cout << " C        \x9C" << "4.00         3 for \x9C" << "10.00" << endl;
		cout << " D        \x9C" << "7.00       Buy 1 get 1 free" << endl;
		cout << " E        \x9C" << "5.00      3 for the price of 2" << endl;
		cout << endl << "Delivery charge is " << "\x9c" << "7 but is free on orders over " << "\x9c" << "50" << endl << endl;

		cin >> itemChoice; //A user inputted char is used to determine which item is added to the basket

		if (itemChoice == 'a' || itemChoice == 'A') //Both upper and lower case can be used 
		{
			udc->AddToBasket(8.00); //The AddToBasket function is used to add doubles to the basket vector
			system("CLS");
			count++;
		}
		else if (itemChoice == 'b' || itemChoice == 'B')
		{
			udc->AddToBasket(12.00);
			system("CLS");
			count++;
		}
		else if (itemChoice == 'c' || itemChoice == 'C')
		{
			udc->AddToBasket(4.00);
			system("CLS");
			count++;
		}
		else if (itemChoice == 'd' || itemChoice == 'D')
		{
			udc->AddToBasket(7.00);
			system("CLS");
			count++;
		}
		else if (itemChoice == 'e' || itemChoice == 'E')
		{
			udc->AddToBasket(5.00);
			system("CLS");
			count++;
		}
		else if (itemChoice == 'x' || itemChoice == 'X') //If x is inputted into the console, the while loop is broken and the user is taken to the checkout (unless the basket is empty)
		{
			if (count == 0)
			{
				system("CLS");
				cout << "Basket is empty, please add items to your basket before going to checkout" << endl << endl;
				system("pause");
				system("CLS");
			}
			else
			{
				break;
			}
		}
		else //If an invalid char is inputted, an error message is displayed
		{
			system("CLS");
			cout << "ERROR Please input a valid option" << endl;
			system("pause");
			system("CLS");
		}
		udc->ViewBasket(); //After each input the basket is displayed at the top of the console
		cout << endl;
	}


	system("CLS");
	double Total = udc->CalculateTotalPrice(); //Here the CalculateTotatlPrice function is called and assigned to a double
	cout << endl << "Order Total = \x9C" << Total << endl << endl; //The double "Total" is outputted to the console as the total order price

	system("pause");
	return 0;
}