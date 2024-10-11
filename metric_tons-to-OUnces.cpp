/*
1. A metric ton is 35, 273.92 ounces.Write a program that will read the weight
of a package of breakfast cereal in ounces and output the weight in metric
tons as well as the number of boxes needed to yield 1 metric ton of cereal.
Your program should allow the user to repeat this calculation as often as
the user wishes.
*/
#include <iostream>
using namespace std;
int main()
{
	const double ounces_in_one_metric_ton = 35273.92; //ounces
	double weight_of_pakage = 0.0;
	cout << "Enter the weight of a package of breakfast cereal in ounces : ";
	cin >> weight_of_pakage;
	double weight_in_metric_tons = 0.0;
	/*
	Convert from metric ton to onces = > multiply by 35----
	Convert from onces to metric tons = > divide by 35----
	*/
	weight_in_metric_tons = weight_of_pakage / ounces_in_one_metric_ton;
	cout << "The weight in metric tons : " << weight_in_metric_tons << endl;
	system("pause");
	return 0;
}
