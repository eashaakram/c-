#include<iostream>
using namespace std;
class Patient{
	public:
		string name;
		int age;
		string disease;
	
		static int totalPatients;
	Patient(string n){
		name = n;
		totalPatients++;
		cout<<"Patient: "<<name<<" admitted.\nTotal Patients: "<<totalPatients<<endl;
	}
	~Patient(){
		totalPatients--;
		cout<<"Patient: "<<name<<" discharge.\nRemaining Patients: "<<totalPatients<<endl;
	}
	static void showTotalPatients(){
		cout<<"Current Total Patients: "<<totalPatients<<endl;
	}
};
int Patient::totalPatients=0;
int main(){
	cout<<">>>Hospital Tracking System<<<\n";

Patient p1("esha");
Patient p2("sadia");
Patient :: showTotalPatients();

    }