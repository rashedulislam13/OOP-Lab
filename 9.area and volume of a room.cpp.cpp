#include<iostream>
using namespace std;
class AreaVolume{
public:

void Result(int l, int w){//using Method Overloading


int area;
area = l*w;
cout<< "Area of a Room:"<<area<<endl;
}

void Result(int l,int w,int h){

    int Volume = l * w * h;
cout<< "Volume of a Room:"<<Volume <<endl;

}





};

int main(){

AreaVolume A;
A.Result(50,7);
A.Result(50,7,15);
}
