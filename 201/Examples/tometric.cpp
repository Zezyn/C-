#include<iostream>

using namespace std;

const double METERS_PER_FOOT = 0.3048;

void getFeetandInches(double&,double&);
void toMetric(double,double,double&,double&);
void printMetersCentimeters(double,double);
int main()
{

    double feet,inches,meters,cm;
    getFeetandInches(feet,inches);    
    toMetric(feet,inches,meters,cm);
    printMetersCentimeters(meters,cm);
    return 0;
}
void getFeetandInches(double &feet,double& inches)
{
    cout << "Enter the feet and inches: ";
    cin >> feet >> inches;
}
void toMetric(double feet,double inches,double& meters,double& cm)
{
    // make feet and inches into one value by adding inches (converted
    // to feet) to the feet value
    // multiply feet by METERS_PER_FEET constant, this gives you the
    // meters value.  Strip off the decimal value for the meters.
    // get the decimal value and multiply it by 100 to get centimeters.
    // total_feet = feet + inches / 12;
	int meters  = static_cast<int>(feet*METERS_PER_FEET);
}
void printMetersCentimeters(double meters,double centimeters)
{
}