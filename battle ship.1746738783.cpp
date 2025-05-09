#include<iostream>
using namespace std;
int main(){
	int arr[4][4]={
	{1,0,0,0},
	{0,1,0,0},
	{0,0,1,0},
	{0,0,0,1}
	};
	int hit=0;
	int score=0;
	int ships=4;
	cout<<"Battle Ship Game"<<endl;
	while(hit<ships){
	int row, col;
	cout<<"Enter row and column:"<<endl;
	cin>>row>>col;
	if(arr[row][col]==1){
		hit++;
		score++;
	arr[row][col]=0;
	cout<<"You Hit! Now "<<ships-hit<<" ships left!"<<endl;
	}
	else	
	cout<<"You Missed"<<endl;
}
if(hit==ships){
	cout<<"Game Over! You won."<<endl;
	cout<<"Victory! You Won with "<<score<<" turns."<<endl;
}
return 0;
}