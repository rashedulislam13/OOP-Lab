#include<iostream>
#include<fstream>

using namespace std;
int main()
{

    string name;
    int age;
    cout<<"enter your name:"<<endl;
    cin>>name;

    cout<<"enter your age"<<endl;
    cin>>age;


    ofstream myFile("myInfo.txt");

    myFile<<"name"<<name<<"\n"<<"age:"<<age;
    myFile.close();



}
