//Create a class Circle with two constructors: one with no parameters and another with a radius parameter. Demonstrate constructor overloading.
#include <iostream>
#include <string>  
using namespace std;
class circle{
	private:
		int diameter,radius;
		public:
			circle(){
			  diameter=0;
			 };
			 circle(int x){
			 	diameter=x;
			 };
			 
			 void display(){
			 	radius=diameter/2;
			 	cout<<"radius of the circle :"<<radius<<endl;

			 }
};
int main(){
	circle c1;
	circle c2(24);
	c1.display();
	c2.display();
	return 0;
};
