#include<iostream>
#include<fstream>

using namespace std;
int main()
{

string inform;

    ifstream myFile("test.txt");
      while(getline(myFile,inform))
        {

      cout<<inform<<endl;
      }


    myFile.close();}
