#include<iostream>
using namespace std;
struct student{
	string name;
	
};
struct course{
	int total_marks;
	int marks;
	float average;
};
int main(){
	int size;
	student s[3];
	
	
		cout<<"Enter Number of courses: ";
		cin>>size;
		course subjects[3][size];
		for(int i=0; i<3; i++){
		cout<<"Enter ur name student "<<i+1<<": ";
		cin>>s[i].name;
	}
			
		for(int k=0; k<size; k++){
		cout<<"---Marks of Course "<<k+1<<" of each Student---"<<endl;
		cout<<"Enter total marks of Course "<<k+1<<" :";
		cin>>subjects[0][k].total_marks;
		//to make total marks equal for other students
		for(int i=0; i<3; i++){
			if(i>0){
				subjects[i][k].total_marks=subjects[0][k].total_marks;
			}
				cout<<"Enter marks of student "<<s[i].name;
				cin>>subjects[i][k].marks;
				
				//calculate percentage
				subjects[i][k].average = (float)subjects[i][k].marks/subjects[i][k].total_marks*100;
				
				}	
		}
		cout<<endl;
		
		cout<<"========RESULTS========"<<endl;
		for(int i=0; i<3; i++){
		cout<<"__Reselt of student "<<s[i].name<<endl;
		for(int k=0; k<size; k++){
			cout<<"Course "<<k+1<<endl;
			cout<<"Marks: "<<subjects[i][k].marks<<"/"<<subjects[i][k].total_marks<<"___Percentage: "<<subjects[i][k].average<<endl;
		}
			
		
}
					}

