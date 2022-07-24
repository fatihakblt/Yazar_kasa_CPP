
// Fatih Akbulut 
//-Elektronik yazar kasa konsol uygulaması.

#include <iostream>
using namespace std;

void menu();
void kasaDurumu(int,int,int,int,int);

int main()
{	
	int bakiye = 3700;
	int i=1, secim=0, tutar=0, islem=0;
	int banknot100, banknot50, banknot20, banknot10, banknot5;
	banknot100 = 20;
	banknot50 = 20;
	banknot20 = 20;
	banknot10 = 20;
	banknot5 = 20;

	menu(); 
	
	while (islem != 4) {
		cout << "Yapmak istediginiz islemi giriniz:";
		cin >> islem;
		if (islem < 1 || islem > 4) {
			cout << "Hatali secim,tekrar deneyiniz!" << endl;
			}
	

	switch (islem) {

	case 1:
		cout << "Mevcut bakiye : " << bakiye << endl;
		cout << "Kasanin durumu: " << endl;
		kasaDurumu(banknot100, banknot50, banknot20, banknot10, banknot5);
		menu();
		i = 1;
		break;

	case 2:
		cout << "Mevcut bakiye:" << bakiye << endl;
		cout << "Cekilecek tutari giriniz:";
		cin >> tutar;
		cout << endl;

		if (tutar > bakiye) {
			cout << "Yetersiz bakiye!" << endl;
			cout << " Bakiyeniz:" << bakiye << endl;
		}
		else {
			bakiye -= tutar;
			cout << "Yeni bakiyeniz:" << bakiye << endl;

			while (tutar >= 100 && banknot100 != 0) {
				tutar -= 100;
				banknot100 -= 1;
			}

			while (tutar >= 50 && banknot50 != 0) {
				tutar -= 50;
				banknot50 -= 1;
			}

			while (tutar >= 20 && banknot20 != 0) {
				tutar -= 20;
				banknot20 -= 1;
			}
			while (tutar >= 10 && banknot10 != 0) {
				tutar -= 10;
				banknot10 -= 1;
			}

			while (tutar >= 5 && banknot5 != 0) {
				tutar -= 5;
				banknot5 -= 1;
			}
		}
		kasaDurumu(banknot100, banknot50, banknot20, banknot10, banknot5);
		cout << endl;
		menu();
		i = 1;
		break;

	case 3:
		cout << "Mevcut bakiye:" << bakiye << endl;
		cout << "Yatirilacak tutari giriniz:";
		cin >> tutar;
		cout << endl;
		bakiye += tutar;
		cout << "Yeni bakiyeniz: " << bakiye << endl;
		while (tutar >= 100 && banknot100 != 40) {
			tutar -= 100;
			banknot100 += 1;
		}

		while (tutar >= 50 && banknot50 != 40) {
			tutar -= 50;
			banknot50 += 1;
		}

		while (tutar >= 20 && banknot20 != 40) {
			tutar -= 20;
			banknot20 += 1;
		}
		while (tutar >= 10 && banknot10 != 40) {
			tutar -= 10;
			banknot10 += 1;
		}

		while (tutar >= 5 && banknot5 != 40) {
			tutar -= 5;
			banknot5 += 1;
		}
		kasaDurumu(banknot100, banknot50, banknot20, banknot10, banknot5);
		cout << endl;
		menu();
		i = 1;
		break;

	

	}
	
	
	}
}

void menu() {
	cout << "\n1-Kasayi goster" << endl;
	cout << "2-Para cekme " << endl;
	cout << "3-Para yatirma" << endl;
	cout << "4-Cikis" << endl;
}
void kasaDurumu(int yuz,int elli,int yirmi,int on,int bes) {

	cout << "100'luk banknotlar : " << yuz << endl;
	cout << "50'lik banknotlar  : " << elli << endl;
	cout << "20'lik banknotlar  : " << yirmi << endl;
	cout << "10'luk banknotlar  : " << on << endl;
	cout << "5'lik banknotlar   : " << bes << endl;
}