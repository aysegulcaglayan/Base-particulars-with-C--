

#include <iostream>
using namespace std;
int hesapla(int a, int b);

int main()
{
	

	//1- Sıralı verilen iki diziyi birleştiren program kodu


	int dizi1[4]{ 1,3,4,5 };
	int dizi2[4]{ 2,4,6,8 };

	int dizi3[8];
	for (int i = 0; i < 4; i++)
	{
		dizi3[i] = dizi1[i];

	}
	for (int k = 0; k < 4; k++)
	{
		dizi3[k + 4] = dizi2[k];
	}

	int temp;
	for (int m = 0; m < 7; m++)
	{

		for (int n = 0; n < 7; n++)
		{
			if (dizi3[n] > dizi3[n + 1]) {
				temp = dizi3[n];
				dizi3[n] = dizi3[n + 1];
				dizi3[n + 1] = temp;
			}
		}
	}
	cout << "Dizi :  ";
	for (int l = 0; l < 8; l++)
	{
		cout << dizi3[l] << "\n";

	}

	//2- Sıralanmış bir diziden yinelenmiş olan sayıları kaldıran program kodu

	int array[] = { 0,0,1,1,1,2,2,3,3,4 };


	int identical_nums[10];
	int num_identical = 0;

	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (array[i] == array[j]) {
				identical_nums[num_identical] = array[i + 1];
				num_identical++;
				i = i + 2;

			}
		}
	}

	cout << "Identical numbers found: ";
	for (int i = 0; i < num_identical; i++) {
		cout << identical_nums[i] << "\n ";
	}



	//3-  Klavyeden -1 giriline kadar, girilen sayıların ortalamalarını gösteren program

	int adet = 0, sayi = 0, toplam = 0;
	float sonuc = 0;


	cout << "Lutfen hesaplamak istediginiz sayilari giriniz(-1 girilince program sonlanmaktadir)";
	while (sayi != -1)
	{
		cin >> sayi;
		adet++;
		toplam = toplam + sayi;

	}
	toplam++;
	adet--;
	sonuc = toplam / adet;
	cout << "Girilen Sayi Adeti:" << adet << "\n";
	cout << "Ortalamaniz:" << sonuc<<"\n";

	//Fonksiyon kullanarak Vize ve Final notu girilen öğrencinin ortalamasını hesaplama

	int vize, final;
	

	cout << "Ogrencinin vize notunu giriniz" << "\n";
	cin >> vize;
	

	cout << "Ogrencinin final notunu giriniz" << "\n";
	cin >> final;

	cout << "Not Ortalamaniz:" << hesapla(vize, final);
}

int hesapla(int a,int b) {
	float sonuc;
	sonuc = (a + b) / 2;
	return sonuc;

}


















	

