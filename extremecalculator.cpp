
# include <iostream>
using namespace std;

int main() {
    float a,b,c;
    char oper;
    cout<<"Enter your desire number : "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<" which one you want to do :"<<endl;
    cout<<"+[addition]"<<endl;
    cout<<"-[subtraction]"<<endl;
    cout<<"+[addition]-[subtraction]"<<endl;
    cout<<"*[multiplication]"<<endl;
    cout<<"*[multiplication]/[division] "<<endl;
    cout<<"/[division] "<<endl;
    cin>>oper;
    switch(oper){
case'+' :
    cout<<a+b<<endl;
    break;
case'-' :
    cout<<a-b<<endl;
    break;
case'+ -' :
    cout<<(a+b)-c<<endl;
    break;
case'*' :
    cout<<a*b<<endl;
    break;
case'/' :
    cout<<a/b<<endl;
    break;
case'* /' :
    cout<<(a*b)/c<<endl;
    break;
default:
    cout<<" sorry!!!!!you are not given right value "<<endl;
    }
    return 0;
}
