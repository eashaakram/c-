#include<iostream>
using namespace std;
class TempUnitConverter{
	private:
		double currentTemp;
		public:
			TempUnitConverter(double temp){
				currentTemp = temp;
			}
			void setTemperature(double temp){
				currentTemp = temp;
			}
			double getCelsiusTemp(){
				return currentTemp-273.15;
			}
			double getFahrenheitTemp(){
				double tempInCelsius = getCelsiusTemp();
				return ((9*tempInCelsius)/5)+32;
			}
};
int main(){
TempUnitConverter t1(315.5);
cout<<"Temperature in kelvin is "<<315.5<<endl;	
cout<<"Temperature in celsius is "<<t1.getCelsiusTemp()<<endl;	

TempUnitConverter t2(272.4);
cout<<"Temperature in kelvin is "<<272.4<<endl;	
cout<<"Temperature in celsius is "<<t2.getFahrenheitTemp()<<endl;	
}