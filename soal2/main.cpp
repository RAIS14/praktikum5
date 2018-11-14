#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f,g;
    cout<<"masukan bilangan 1 : " ;
    cin>>a;
    cout<<"masukan bilangan 2 : " ;
    cin>>b;
    cout<<"masukan bilangan 3 : " ;
    cin>>c;

    d = (a+b==c) ;
    e = (a+c==b) ;
    f = (b+c==a) ;
    g = d || e || f ;

    cout<<"\n======program operator OR=====";
    cout<<"\nhasil dari d = a+b==c adalah :"<<d;
    cout<<"\nhasil dari e = a+c==b adalah :"<<e;
    cout<<"\nhasil dari f = b+c==a adalah :"<<f;
    cout<<"\nhasil akhir dari g = d || e || f adalah :"<<g;

    return 0 ;

}

