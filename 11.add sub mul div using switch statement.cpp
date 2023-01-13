#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    double a,b;
    printf("Arithmetic operator : \n");
    cin>>ch;
    printf("Enter two value : \n");
    cin>>a>>b;
    switch(ch){
     case '+' :
        cout<<a<<" + "<<b<<" = "<<a+b<<"\n";
        break;
     case '-' :
        cout<<a<<" - "<<b<<" = "<<abs(a-b)<<"\n";
        break;
     case '*' :
        cout<<a<<" * "<<b<<" = "<<a*b<<"\n";
        break;
     case '/':
        cout<<a<<" / "<<b<<" = "<<a/b<<"\n";
        break;
     default:
        printf("Error\n");
    }
    return 0;
}
