//Write a program to create a Rectangle class with a parameterized constructor to initialize length and breadth. Calculate and display the area //
#include <iostream>
#include <string>  
using namespace std;
class rectangler{
	private:
		int length, breadth;
		public:
			rectangler(int l,int b){
				length=l;
				breadth=b;
				
			}
			void display(){
				cout<<length <<endl;
				cout<<breadth<<endl;
			     
			    
				cout<<"area of the length :"<<length*breadth;
				
				
			}
};
int main(){
	rectangler r(5,8);
	r.display();
	return 0;
}
