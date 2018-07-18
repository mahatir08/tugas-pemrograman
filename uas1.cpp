#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;


class Mobil
{
private :
      int roda, pintu;
      char warna [10];
public :
      void data(int jum_roda, int jum_pintu, char warna_mobil [10]);
      void info();
};

int main()
{
      //mendeklarasikan objek
      Mobil lamborghini;
      Mobil bmw;

      cout<<"Mobil Lamborghini :"<<endl;
      cout<<"-------------------"<<endl;
      lamborghini.data(4,2,"Merah"); //memanggil fungsi data()
      lamborghini.info(); //memanggil fungsi info();

      cout<<endl;
      cout<<"Mobil BMW :"<<endl;
      cout<<"-----------"<<endl;
      bmw.data(4,4,"Hitam"); //memanggil fungsi data()
      bmw.info(); //memanggil fungsi info();

      _getche();
      return 0;
}

void Mobil::data(int jum_roda, int jum_pintu, char warna_mobil [10])
{
      roda  = jum_roda;
      pintu = jum_pintu;
      strcpy(warna, warna_mobil);
} 

void Mobil::info()
{
      cout<<"Jumlah Roda  : "<<roda<<endl;
      cout<<"Jumlah Pintu : "<<pintu<<endl;
      cout<<"Warna        : "<<warna<<endl;
}
