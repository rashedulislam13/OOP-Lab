#include<iostream>
using namespace std;

class areaReactSquare{
public:
float h,w;
void areaRS(){
float area1 = h*w;
float area2 = h*h;
cout<<"Area of Rectangale:"<<area1<<endl;
cout<<"Area of Square :"<<area2<<endl;
}
};
int main(){


areaReactSquare area;
area.h = 20;
area.w = 6;

area.areaRS();

}
