#include <iostream>

using namespace std;

int main()
{

    int matematikNotu,fizikNotu,kimyaNotu,turkceNotu,tarihNotu,muzikNotu;
    int matematikDersSaati=6;
    int fizikDersSaati=2;
    int kimyaDersSaati=2;
    int turkceDersSaati=5;
    int tarihDersSaati=2;
    int muzikDersSaati=2;
    cout<<"Matematik Ders notunu giriniz: ";
    cin>>matematikNotu;
    cout<<"Fizik Ders notunu giriniz: ";
    cin>>fizikNotu;
    cout<<"Kimya Ders notunu giriniz: ";
    cin>>kimyaNotu;
    cout<<"Turkce Ders notunu giriniz: ";
    cin>>turkceNotu;
    cout<<"Tarih Ders notunu giriniz: ";
    cin>>tarihNotu;
    cout<<"Muzik Ders notunu giriniz: ";
    cin>>muzikNotu;
    double toplamNotOrtalama;
    double toplamDersSaati=matematikDersSaati+fizikDersSaati+kimyaDersSaati+turkceDersSaati+tarihDersSaati+muzikDersSaati;
    toplamNotOrtalama=((matematikDersSaati*matematikNotu)+(fizikNotu*fizikDersSaati)
                       +(kimyaDersSaati*kimyaNotu)+(turkceNotu*turkceDersSaati)+
                       (tarihDersSaati*tarihNotu)+(muzikDersSaati*muzikNotu))/toplamDersSaati;
cout<<toplamNotOrtalama;

    return 0;
}
