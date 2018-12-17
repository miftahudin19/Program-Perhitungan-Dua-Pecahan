 #include <iostream>
using namespace std;
int main() 
{
                float nilai1, nilai2;
                int tambah,kurang,bagi,kali;
                cout<<" Operasi "<<endl;
                cout<<"Masukan nilai pertama:";
                cin>>nilai1;
                cout<<"Masukan nilai kedua:";
                cin>>nilai2;
                                tambah=nilai1+nilai2;
                                kurang=nilai1-nilai2;
                                bagi=nilai1/nilai2;
                                kali=nilai1*nilai2;
                cout<<"Hasil dari penjumlahan = "<<tambah<<endl;
                cout<<"Hasil dari pengurangan = "<<kurang<<endl;
                cout<<"Hasil dari Pembagian = "<<bagi<<endl;
                cout<<"Hasil dari perkalian = "<<kali;
return 0;
}
