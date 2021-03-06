// Objective-CProgrammingFinalProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream> 
#include <string>
#include <ostream>
#include <istream>
#include "math.h"

using namespace std;

void display_menu()
{
	cout << "_________________________________________________________________________________________________________________\n";
	cout << "--------------------------------------------- Taximeter Application -------------------------------------------- \n";
	cout << "_________________________________________________________________________________________________________________\n";
	cout << endl;
	cout << "=================================================================================================================\n";
	cout << endl;
}

int main()
{
	int choice, s_time, e_time, v_speed, v_fuel, v_km;
	int account_bal = 100, v_cost = 0, v_numbertrips = 0;
	double v_transaction, random_price;
	double price_1 = 1.15, price_2 = 1.45;;
	char ans, start;
	display_menu();
	cout << "\t\tWELCOME TO Taximeter Applicacion \n\n";
	cout << "Please enter what is the level in liters of fuel of your car: ";
	while (!(cin >> v_fuel))
	{
		cout << endl;
		cout << "\n\t ********** WARNING ********** \n";
		cout << "Enter a valid number for the fuel level: ";
		cin.clear();
		cin.ignore(10, '\n');
	}
	cout << endl;
	cout << "Please enter what is the mileage of your car: ";
	while (!(cin >> v_km))
	{
		cout << endl;
		cout << "\n\t ********** WARNING ********** \n";
		cout << "Enter a valid number for the mileage: ";
		cin.clear();
		cin.ignore(10, '\n');
	}
	cout << endl;
	cout << "Thank you, you will proceed to the menu of the Taximeter App\n\n";
	system("pause");
	system("cls");
	do
	{
		display_menu();
		cout << " 1. Pick up passengers \n";
		cout << " 2. Fill up the gas tank \n";
		cout << " 3. Net Income \n";
		cout << " 4. Car's fuel level \n";
		cout << " 5. Car's mileage \n";
		cout << " 6. Total number of trips \n";
		cout << " 7. Exit the application \n";
		cout << "=================================================================================================================\n";
		cout << endl;
		cout << "Please select your option: ";
		cout << endl;
		cin >> choice;
		system("cls");
		switch (choice)
		{
		case 1:
		{
			do
			{
			display_menu();
			cout << " Please select the time frame for the trip: \n";
			cout << "=================================================================================================================\n";
			cout << " 1. From 00h to 8h00: $30 for every hour  \n";
			cout << " 2. From 8h00 to 14h00: $20 for every hour  \n";
			cout << " 3. From 14h00 to 00h: $25 for every hour \n";
			cout << "Please select your option: ";
			cout << endl;
			cin >> choice;
			cout << endl;
			switch (choice)
			{
			case 1:
			{
				cout << "Please enter the start time of your trip. \n";
				cin >> s_time;
				while (s_time > 8) {
					cout << "Invalid start time, please try again. \n";
					cin >> s_time;
				}
				cout << "Please enter the ending time of your trip. \n";
				cin >> e_time;
				while (e_time > 8 || e_time < s_time) {
						cout << "Invalid end time, please try again. \n";
						cin >> e_time;
				}			
				cout << "Please enter the initial speed of your trip. \n";
				cin >> v_speed;
				v_cost = (e_time - s_time) * 30;
				cout << "============================================================\n";
				cout << "Your start time for your trip is: " << s_time << "\n";
				cout << "Your end time for your trip is: " << e_time << "\n";
				cout << "Your initial speed for your trip is: " << v_speed << "Km\h\n";
				cout << "The total of your trip is: " << v_cost << "$\n";	
				account_bal = account_bal + v_cost;
				v_fuel = v_fuel - ((e_time - s_time) * abs(tan(v_speed * (e_time - s_time))) + abs(cos(v_speed)));
				v_km = (v_km + (v_speed * (2*(e_time - s_time))) - v_speed * (e_time - s_time));
				v_numbertrips = v_numbertrips + 1;
			} break;
			case 2:
			{
				cout << "Please enter the start time of your trip. \n";
				cin >> s_time;
				while (s_time < 8 || s_time > 14) {
					cout << "Invalid start time, please try again. \n";
					cin >> s_time;
				}
				cout << "Please enter the ending time of your trip. \n";
				cin >> e_time;
				while (e_time < 8 || e_time > 14 || e_time < s_time) {
					cout << "Invalid end time, please try again. \n";
					cin >> e_time;
				}
				cout << "Please enter the initial speed of your trip. \n";
				cin >> v_speed;
				v_cost = (e_time - s_time) * 20;
				cout << "============================================================\n";
				cout << "Your start time for your trip is: " << s_time << "\n";
				cout << "Your end time for your trip is: " << e_time << "\n";
				cout << "Your initial speed for your trip is: " << v_speed << "Km\h\n";
				cout << "The total of your trip is: " << v_cost << "$\n";
				account_bal = account_bal + v_cost;
				v_fuel = v_fuel - ((e_time - s_time) * abs(tan(v_speed * (e_time - s_time))) + abs(cos(v_speed)));
				v_km = (v_km + (v_speed * ((e_time - s_time)*(e_time - s_time))) - v_speed * (e_time - s_time));
				v_numbertrips = v_numbertrips + 1;
			} break;
			case 3:
			{
				cout << "Please enter the start time of your trip. \n";
				cin >> s_time;
				while (s_time < 14 || s_time > 0) {
					cout << "Invalid start time, please try again. \n";
					cin >> s_time;
				}
				cout << "Please enter the ending time of your trip. \n";
				cin >> e_time;
				while (e_time < 14 || e_time > 0 || e_time < s_time) {
					cout << "Invalid end time, please try again. \n";
					cin >> e_time;
				}
				cout << "Please enter the initial speed of your trip. \n";
				cin >> v_speed;
				v_cost = (e_time - s_time) * 25;
				cout << "============================================================\n";
				cout << "Your start time for your trip is: " << s_time << "\n";
				cout << "Your end time for your trip is: " << e_time << "\n";
				cout << "Your initial speed for your trip is: " << v_speed << "Km\h\n";
				cout << "The total of your trip is: " << v_cost << "$\n";
				account_bal = account_bal + v_cost;
				v_fuel = v_fuel - ((e_time - s_time) * abs(tan(v_speed * (e_time - s_time))) + abs(cos(v_speed)));
				v_km = (v_km + (v_speed * ((e_time - s_time)*(e_time - s_time))) - v_speed * (e_time - s_time));
				v_numbertrips = v_numbertrips + 1;
			} break;
			
			default:
				cout << "Wrong Selection, try again please..." << endl;
			}
			cout << endl;
			cout << " If you want to return to menu, please enter Y \n";
			cin >> start;
			system("cls");
		} while (start == 'y' || start == 'Y');
		system("pause");
		break;

		case 2:
		{
			display_menu();
			cout << " Please enter how much gas you want in litres: \n";
			cin >> v_fuel;
			random_price = (price_2 - price_1) * ((double)rand() / (double)RAND_MAX) + price_1;
			v_transaction = v_fuel * random_price;
			if (v_transaction > account_bal)
			{
				cout << " Impossible to process the transaction, you don't have enough balance in your account to proceed. \n";
				cout << " Your account balance is: $ " << account_bal << " \n";
			}
			else {
				cout << " The transaction has been processed, the total of the transaction is $ " << v_transaction << "\n";
				cout << " The amout of the transaction has been debited from your account balance. \n";
				account_bal = account_bal - v_transaction;
				cout << " Your account balance now is: $ " << account_bal << " \n";
			}
			system("pause");

		} break;
		case 3:
		{	display_menu();
			cout << " Your account balance now is: $ " << account_bal << " \n";
		} break;
		case 4:
		{
			display_menu();
			cout << " Your fuel level now is:" << v_fuel << " \n";
		} break;
		case 5:
		{
			display_menu();
			cout << " Your mileage now is:" << v_km << " \n";
		} break;
		case 6:
		{
			display_menu();
			cout << " The total number of trips today is: " << v_numbertrips << " \n";

		} break;

		case 7:
		{
			display_menu();
			cout << "Thanks for using Taximeter App, see you next time..." << endl;
			return 0;
		} while (choice != 7);

		break;
		}

		default:
			cout << "Wrong Selection, try again please..." << endl;
		}
		cout << endl;
		cout << " If you want to return to menu, please enter Y \n";
		cin >> start;
		system("cls");
	} while (start == 'y' || start == 'Y');
	system("pause");
	return 0;
}