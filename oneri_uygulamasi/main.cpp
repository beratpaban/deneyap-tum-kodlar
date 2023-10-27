#include <iostream>

using namespace std;
//Hava Sıcaklığına Göre Etkinlik Önerme (if-else, karşılaştırma ve mantıksal operatörleri kullanın)
//Koşullar :

//Sıcaklık 5'dan küçük ise "Kayak" yapmayı öner.
//Sıcaklık 5 ve 15 arasında ise "Sinema" etkinliğini öner.
//Sıcaklık 15 ve 25 arasında ise "Piknik" etkinliğini öner.
//Sıcaklık 25'ten büyük ise "Yüzme" etkinliğini öner.
int main()
{
    double havaSicakligi;
    cout << "Hava sicakligini giriniz: ";
    cin>>havaSicakligi;
    if(havaSicakligi<=5){
        cout<<"Kayak yapmaya gidebilirsiniz";
    }
    else if(havaSicakligi>5&&havaSicakligi<=15){
        cout<<"Sinemaya gidebilirsiniz.";
    }
    else if(havaSicakligi>15&&havaSicakligi<=25){
        cout<<"Piknige gidebilirsiniz.";
    }
    else{
        cout<<"Yuzmeye gidebilirsiniz.";
    }
    return 0;
}
