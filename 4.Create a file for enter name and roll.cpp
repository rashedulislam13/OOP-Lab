#include<iostream>
#include<fstream>

using namespace std;
int main()
{

    string name;
    int age;
    cout<<"enter your name:"<<endl;
    cin>>name;

    cout<<"enter your Roll"<<endl;
    cin>>age;


    ofstream myFile("test.txt");

    myFile<<"name: "<<name<<"\n"<<"Roll: "<<age;
    myFile.close();



}
