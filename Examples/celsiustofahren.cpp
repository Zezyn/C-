#include<iostream>

using namespace std;


double promptCelsius();
double calcFahrenheit(double);
void displayFahrenheit(double);

int main()
{
	char y_or_n = 'y';
	do{
		double celsius = promptCelsius();
		double fahrenheit = calcFahrenheit(celsius);
		displayFahrenheit(fahrenheit);
		cout << "Would you like to do this again? y/n";
		cin >> y_or_n;
	}while(y_or_n != 'n');

	return 0;
}

// This function prompts the user for the degrees in celsius
// and returns that value as a double.
double promptCelsius()
{
	double c;
	cout << "Enter the degrees in Celsius:";
	cin >> c;
	return c;
} 

double calcFahrenheit(double c)
{
	// F = c * 9/5 + 32;
	double f = c * (9.0/5.0) + 32;
	return f;
}

void displayFahrenheit(double f)
{
	cout  << "The temperature in fahrenheit is: " << f << endl;
}





