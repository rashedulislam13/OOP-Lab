#include<iostream>
using namespace std;

class areaReactSquare{
public:
float a,b,c;
void areaRS(){
float area1 = a*b;
float area2 = c*c;
cout<<"Area of Rectangale:"<<area1<<endl;
cout<<"Area of Square :"<<area2<<endl;
}
};
int main(){


areaReactSquare area;
area.a = 10;
area.b = 20;
area.c = 30;
area.areaRS();


}
