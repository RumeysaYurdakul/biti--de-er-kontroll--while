#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL, "Turkish");
kodlar 4
cout << "sınıf ortalamasını bitiş değer kontrollü while döngüsüyle hesaplayan program"<<endl;
double toplam,
notu,
notsayaci,
ortalama;
toplam = 0;
notsayaci = 0;
cout << "notu gir yada -1 yazarak programdan ayrıl";
cin >> notu;
while (notu!=-1)
{
toplam = toplam + notu;
notsayaci = notsayaci + 1;
cout << "notu gir yada -1 yazarak programdan ayrıl";
cin >> notu;
}
ortalama = toplam / notsayaci;
cout << "sınıf ortalamanız" << ortalama << endl;
return 0;
}