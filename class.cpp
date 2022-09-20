#include<bits/stdc++.h>

using namespace std;
class Bike
{
	public:
		
		string bikename;
		string type;
		string price;
		
		void printname() {
			cout << "Bike name is " << bikename << "." << endl;
		}
		
		void printtype() {
			cout << "Bike type is " << type << "." << endl;
		}
		
		void printprice() {
			cout << "Bike price is " << price << "." << endl;
		}
};

int main() {
	
	Bike KTM;
	Bike Bajaj;
	Bike Kawasaki;
	
	KTM.bikename = "KTM 250";
	KTM.type = "Sports";
	KTM.price = "1,00,000";
	
	Bajaj.bikename = "Pulsar";
	Bajaj.type = "Regular";
	Bajaj.price = "90,000";
	
	Kawasaki.bikename = "Ninja";
	Kawasaki.type = "Hyper";
	Kawasaki.price = "2,00,000";
	
	KTM.printname();
	KTM.printprice();
	KTM.printtype();
	
	Bajaj.printname();
	Bajaj.printprice();
	Bajaj.printtype();
	
	Kawasaki.printname();
	Kawasaki.printprice();
	Kawasaki.printtype();
	
	return 0;
}
