#include <iostream>
using namespace std;

class shape{
	public:
		void setwidth(int w){
			width= w;
		}
		void setheight(int h){
			height = h;
		}
	protected:
		int height;
		int width;
};

class Rectangle : public shape{
	public:
		int getArea(){
			return (height*width);
		}
}; 

int main(void){
	Rectangle r;
	r.setheight(7);
	r.setwidth(5);
	cout<<"Area = "<<r.getArea();
	return 0;
}
