/*
TITLE: Chapter 5 Exercise 17 - Sales Bar Chart
FILE NMAE: Chapter5Ex17_DAngeloFrancis.cpp
DATE: November 2024
PROGRAMMER: D'Angelo Francis
REQUIREMENTS: Write a program that ask the user to enter today's sales for 5 stores.
Display a bar graph comparing sales.
Use asterisks to display each bar. 
Each asterisk represents $100 in sales.
*/

#include <iostream>
using namespace std;

int const STORE_COUNT = 5;

double GetSales();
int GetStars(double sales);
void DisplayBarChart(int stars, char symb);

int main()
{
	double sales;
	int stars;
	for (int count = 0; count < STORE_COUNT; count++)
	{
		sales = GetSales();
		stars = GetStars(sales);
		DisplayBarChart(stars, '*');
	}
	cout << "Heck yeah, the sales are finished!";
}
double GetSales()
{
	int static storeNumber=0;
	double sales;
	storeNumber++;
	cout << "Enter sales for store " << storeNumber << ": ";
	cin >> sales;
	return sales;
}
int GetStars(double sales)
{
	int stars = sales / 100;
	return stars;
}
void DisplayBarChart(int stars, char symb)
{
	for (int count = 0; count < stars; count++)
	{
		cout << symb;
	}
	cout << endl;
}