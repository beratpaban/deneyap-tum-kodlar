#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cout<<"1. sayiyi giriniz: ";
    cin>> x;
    cout<<"2. sayiyi giriniz: ";
    cin>>y;
    cout<<"3. sayiyi giriniz: ";
    cin>>z;
    if(x>y&&x>z){
        if(y>z){
            cout<<x <<">"<< y<< ">" << z;
        }
        else{
            cout<<x <<">"<< z<< ">" << y;
        }
    }
    else if(y>x&&y>z){
        if(x>z){
            cout<<y<< ">" <<x<< ">"<< z;
        }
        else{
            cout<<y<< ">"<< z <<">" << x;
        }
    }
    else{
        if(y>x){
            cout<<z<< ">" <<y<< ">"<< x;
        }
        else{
            cout<<z<< ">"<< x<< ">"<< y;
        }
    }
    return 0;
}
