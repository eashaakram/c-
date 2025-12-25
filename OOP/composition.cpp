//#include<iostream>
//using namespace std;
//class Engine{
//	public:
//		Engine(){
//			cout<<"Engine is created!"<<endl;
//		}
//		~Engine(){
//			cout<<"Engine is destroyed!"<<endl;
//		}
//};
//class car{
//	Engine e1;
//	public:
//		//constructor
//		car(Engine e){
//			e1 = e;
//			cout<<"Car started"<<endl;
//		}
//		~car(){
//			cout<<"Car stopped"<<endl;
//		}
//		void startcar(){
//			cout<<"Car is running"<<endl;
//		}
//};
//int main(){
//	Engine e;
//	car c(e);
//	c.startcar();
//}




#include<iostream>
using namespace std;
class Engine{
	public:
		Engine(){
			cout<<"Engine is created!"<<endl;
		}
		~Engine(){
			cout<<"Engine is destroyed!"<<endl;
		}
};
class car{
	
	public:
		//constructor
		car(){
			Engine e1;
		
			cout<<"Car started"<<endl;
		}
		~car(){
			cout<<"Car stopped"<<endl;
		}
		void startcar(){
			cout<<"Car is running"<<endl;
		}
};
int main(){
	car c;
	c.startcar();
}