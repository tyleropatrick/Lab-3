/*
Author: Tyler Patrick
Section: 402
Assignment: Lab 3 - Hot Dog Stand
*/
#include<IOStream>
#include<string>
#include<iomanip>

using namespace std;
//Initalize The Variables
const float taxrate = .06, hotdog = 2.5,  delux = 3.5,  smalldrink = 1.5,  largedrink = 2.25;


int main()
{
	// Initalize Floats 
	cout << fixed << setprecision(2);
	string order;
	char option;
	float total;
	float subtotal = 0;
	float cash;
	float change;
	float tax;
	bool Continue = true;
	// Logo
	cout << "----Tyler's Hot Dogs & Drinks----" << endl;
	// Allows for Input and Outputs for The "Hot dog and drink store"
	while (Continue)
	{
		cout << "H - Hot Dog	  $2.50	D -  Deluxe Hot Dog  $3.50" << endl;
		cout << "S - Small Drink   $1.50 L - Large Drink      $2.25" << endl;
		cout << "F - Finish Order        X - Exit System" << endl;
		cout << "Enter Option ====>";
		cin >> order;
		option = toupper(order[0]);
		
		swit?ch (option)
		{
		case 'H':
			subtotal = hotdog + subtotal;
			cout << "Current Subtotal: $" << subtotal << endl;
			break;
		case 'D':
			subtotal = delux + subtotal;
			cout << "Current Subtotal: $" << subtotal << endl;
			break;
		case 'S':
			subtotal = smalldrink + subtotal;
			cout << "Current Subtotal: $" << subtotal << endl;
			break;
		case 'L':
			subtotal = largedrink + subtotal;
			cout << "Current Subtotal: $" << subtotal << endl;
			break;
		case 'F':
			cout << "Sub Total:   $  " << subtotal << endl;
			 tax = taxrate * subtotal;
			 total = tax + subtotal;
			cout << "Tax:         $  " << tax  << endl;
			cout << "Total:       $  " << total << endl;
			cout << "Enter Cash:  $  ";
			cin >> cash;			
			change = cash - total;
			cout << "Change:      $  " << change << endl;
			system("pause");
			total = 0;
			subtotal = 0;
			change = 0;
			cash = 0;
			tax = 0;
			break;
		case 'X':
			Continue = false;
			system("pause");
			break;
			


				
		}
	}

	


}





