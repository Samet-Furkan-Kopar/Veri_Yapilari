#include <iostream>
#include "veri.h"
#include <chrono>
#include <locale.h>

using namespace std;


int main(){
	
	setlocale(LC_ALL, "Turkish");
	int aramaTuru;
	int agac;
	int aranacakVeri;
	IkiliSiralamaAgaci* agac1 = new IkiliSiralamaAgaci();
	IkiliSiralamaAgaci* agac2 = new IkiliSiralamaAgaci();
	IkiliSiralamaAgaci* agac3 = new IkiliSiralamaAgaci();
	
	for (int i = 0;i < 68;i++) {
		agac1->agacKur(&dizi1[i]);
	}
	for (int i = 0;i < 68;i++) {
		agac1->agacKur(&dizi2[i]);
	}
	for (int i = 0;i < 68;i++) {
		agac1->agacKur(&dizi3[i]);
	}

	cout << "Arama Yapacaðiniz Aðaci Seçiniz(1,2,3):"<<"\n";
	cin >> agac;

	if (agac == 1) {
		cout << "1 Numaralý Aðaç icin arama türü seçiniz(DFS:1 , BFS:2)" <<"\n";
		cin >> aramaTuru;
		switch (aramaTuru)
		{
		case 1 :
		{
			cout<< "1 Numaralý aðaç icin  DFS ile arayacaðiniz degeri giriniz:" << endl;
			cin>> aranacakVeri;

			if (DFS(agac1->kok, aranacakVeri)==1) {
				cout << "\nSonuç => VERÝ BULUNDU" << endl;
				auto begin = chrono::high_resolution_clock::now();
				DFS(agac1->kok, aranacakVeri);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Gecen Süre  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			else
			{
				cout << "\nSonuç => VERÝ BULUNAMADI" << endl;
				auto begin = chrono::high_resolution_clock::now();
				DFS(agac1->kok, aranacakVeri);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Gecen Süre  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			break;
		}
		case 2:
		{
			cout << "1 Numaralý aðaç icin  BFS ile arayacaðiniz deðeri giriniz:" << endl;
			cin >> aranacakVeri;
			if (DFS(agac1->kok, aranacakVeri) == 1) {
				cout << "\nSonuç => VERÝ BULUNDU" << endl;
				auto begin = chrono::high_resolution_clock::now();
				DFS(agac1->kok, aranacakVeri);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Geçen Süre  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			else
			{
				cout << "\nSonuç => VERÝ BULUNAMADI" << endl;
				auto begin = chrono::high_resolution_clock::now();
				DFS(agac1->kok, aranacakVeri);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Geçen Süre  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			break;
		}
			default:
			break;
		}
	}
	else if (agac==2)
	{
		cout << "2 Numaralý Agaç için arama türü seçiniz(DFS:1 , BFS:2)" << "\n";
		cin >> aramaTuru;
		switch (aramaTuru)
		{
		case 1:
		{
			cout << "2 Numaralý aðaç icin  DFS ile arayacaðiniz deðeri giriniz:" << endl;
			cin >> aranacakVeri;

			if (DFS(agac1->kok, aranacakVeri) == 1) {
				cout << "\nSonuç => VERÝ BULUNDU" << endl;
				auto begin = chrono::high_resolution_clock::now();
				DFS(agac1->kok, aranacakVeri);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Geçen Süre  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			else
			{
				cout << "\nSonuç => VERÝ BULUNAMADI" << endl;
				auto begin = chrono::high_resolution_clock::now();
				DFS(agac1->kok, aranacakVeri);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Geçen Süre  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			break;
		}
		case 2:
		{
			cout << "2 Numarali aðaç için  BFS ile arayacaðýnýz deðeri giriniz:" << endl;
			cin >> aranacakVeri;
			if (DFS(agac1->kok, aranacakVeri) == 1) {
				cout << "\nSonuç => VERÝ BULUNDU" << endl;
				auto begin = chrono::high_resolution_clock::now();
				DFS(agac1->kok, aranacakVeri);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Geçen Süre  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			else
			{
				cout << "\nSonuç => VERÝ BULUNAMADI" << endl;
				auto begin = chrono::high_resolution_clock::now();
				DFS(agac1->kok, aranacakVeri);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Geçen Süre  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			break;
		}
		    default:
			break;
		}

	}
	
	else if (agac == 3)
	{
	cout << "3 Numaralý Aðaç için arama türü seçiniz(DFS:1 , BFS:2)" << "\n";
	cin >> aramaTuru;
	switch (aramaTuru)
	{
	case 1:
	{
		cout << "3 Numaralý aðaç için  DFS ile arayacaðiniz deðeri giriniz:" << "\n";
		cin >> aranacakVeri;

		if (DFS(agac1->kok, aranacakVeri) == 1) {
			cout << "\nSonuç => VERÝ BULUNDU" << endl;
			auto begin = chrono::high_resolution_clock::now();
			DFS(agac1->kok, aranacakVeri);
			auto end = chrono::high_resolution_clock::now();
			auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
			cout << "Geçen Süre  => " << elapsed.count() << "mikro-saniye" << endl;
		}
		else
		{
			cout << "\nSonuç => VERÝ BULUNAMADI" << endl;
			auto begin = chrono::high_resolution_clock::now();
			DFS(agac1->kok, aranacakVeri);
			auto end = chrono::high_resolution_clock::now();
			auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
			cout << "Geçen Süre  => " << elapsed.count() << "mikro-saniye" << endl;
		}
		break;
	}
	case 2:
	{
		cout << "3 Numaralý aðaç icin  BFS ile arayacaðiniz deðeri giriniz:" << "\n";
		cin >> aranacakVeri;
		if (DFS(agac1->kok, aranacakVeri) == 1) {
			cout << "\nSonuç => VERi BULUNDU" << endl;
			auto begin = chrono::high_resolution_clock::now();
			DFS(agac1->kok, aranacakVeri);
			auto end = chrono::high_resolution_clock::now();
			auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
			cout << "Geçen Süre  => " << elapsed.count() << "mikro-saniye" << endl;
		}
		else
		{
			cout << "\nSonuç => VERÝ BULUNAMADI" << endl;
			auto begin = chrono::high_resolution_clock::now();
			DFS(agac1->kok, aranacakVeri);
			auto end = chrono::high_resolution_clock::now();
			auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
			cout << "Geçen Süre  => " << elapsed.count() << "mikro-saniye" << endl;
		}
		break;
	}
	    default:
		break;
	}

	}
}
