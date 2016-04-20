#include<iostream>

using namespace std;

int main()
{

   double lethal_dose,mouse_weight,dieter_weight,desired_sweetener,concentration;

	concentration=0.001;

   cout << "lethal dose,mouse weight,dieter_weight,desired_sweetener:";
	cin >> lethal_dose >> mouse_weight >> dieter_weight;
	cout << ((lethal_dose/mouse_weight * dieter_weight)/concentration) << endl;
	return 0;
}
