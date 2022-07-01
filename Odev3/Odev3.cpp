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

	cout << "Arama Yapaca�iniz A�aci Se�iniz(1,2,3):"<<"\n";
	cin >> agac;

	if (agac == 1) {
		cout << "1 Numaral� A�a� icin arama t�r� se�iniz(DFS:1 , BFS:2)" <<"\n";
		cin >> aramaTuru;
		switch (aramaTuru)
		{
		case 1 :
		{
			cout<< "1 Numaral� a�a� icin  DFS ile arayaca�iniz degeri giriniz:" << endl;
			cin>> aranacakVeri;

			if (DFS(agac1->kok, aranacakVeri)==1) {
				cout << "\nSonu� => VER� BULUNDU" << endl;
				auto begin = chrono::high_resolution_clock::now();
				DFS(agac1->kok, aranacakVeri);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Gecen S�re  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			else
			{
				cout << "\nSonu� => VER� BULUNAMADI" << endl;
				auto begin = chrono::high_resolution_clock::now();
				DFS(agac1->kok, aranacakVeri);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Gecen S�re  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			break;
		}
		case 2:
		{
			cout << "1 Numaral� a�a� icin  BFS ile arayaca�iniz de�eri giriniz:" << endl;
			cin >> aranacakVeri;
			if (DFS(agac1->kok, aranacakVeri) == 1) {
				cout << "\nSonu� => VER� BULUNDU" << endl;
				auto begin = chrono::high_resolution_clock::now();
				DFS(agac1->kok, aranacakVeri);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Ge�en S�re  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			else
			{
				cout << "\nSonu� => VER� BULUNAMADI" << endl;
				auto begin = chrono::high_resolution_clock::now();
				DFS(agac1->kok, aranacakVeri);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Ge�en S�re  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			break;
		}
			default:
			break;
		}
	}
	else if (agac==2)
	{
		cout << "2 Numaral� Aga� i�in arama t�r� se�iniz(DFS:1 , BFS:2)" << "\n";
		cin >> aramaTuru;
		switch (aramaTuru)
		{
		case 1:
		{
			cout << "2 Numaral� a�a� icin  DFS ile arayaca�iniz de�eri giriniz:" << endl;
			cin >> aranacakVeri;

			if (DFS(agac1->kok, aranacakVeri) == 1) {
				cout << "\nSonu� => VER� BULUNDU" << endl;
				auto begin = chrono::high_resolution_clock::now();
				DFS(agac1->kok, aranacakVeri);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Ge�en S�re  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			else
			{
				cout << "\nSonu� => VER� BULUNAMADI" << endl;
				auto begin = chrono::high_resolution_clock::now();
				DFS(agac1->kok, aranacakVeri);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Ge�en S�re  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			break;
		}
		case 2:
		{
			cout << "2 Numarali a�a� i�in  BFS ile arayaca��n�z de�eri giriniz:" << endl;
			cin >> aranacakVeri;
			if (DFS(agac1->kok, aranacakVeri) == 1) {
				cout << "\nSonu� => VER� BULUNDU" << endl;
				auto begin = chrono::high_resolution_clock::now();
				DFS(agac1->kok, aranacakVeri);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Ge�en S�re  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			else
			{
				cout << "\nSonu� => VER� BULUNAMADI" << endl;
				auto begin = chrono::high_resolution_clock::now();
				DFS(agac1->kok, aranacakVeri);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Ge�en S�re  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			break;
		}
		    default:
			break;
		}

	}
	
	else if (agac == 3)
	{
	cout << "3 Numaral� A�a� i�in arama t�r� se�iniz(DFS:1 , BFS:2)" << "\n";
	cin >> aramaTuru;
	switch (aramaTuru)
	{
	case 1:
	{
		cout << "3 Numaral� a�a� i�in  DFS ile arayaca�iniz de�eri giriniz:" << "\n";
		cin >> aranacakVeri;

		if (DFS(agac1->kok, aranacakVeri) == 1) {
			cout << "\nSonu� => VER� BULUNDU" << endl;
			auto begin = chrono::high_resolution_clock::now();
			DFS(agac1->kok, aranacakVeri);
			auto end = chrono::high_resolution_clock::now();
			auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
			cout << "Ge�en S�re  => " << elapsed.count() << "mikro-saniye" << endl;
		}
		else
		{
			cout << "\nSonu� => VER� BULUNAMADI" << endl;
			auto begin = chrono::high_resolution_clock::now();
			DFS(agac1->kok, aranacakVeri);
			auto end = chrono::high_resolution_clock::now();
			auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
			cout << "Ge�en S�re  => " << elapsed.count() << "mikro-saniye" << endl;
		}
		break;
	}
	case 2:
	{
		cout << "3 Numaral� a�a� icin  BFS ile arayaca�iniz de�eri giriniz:" << "\n";
		cin >> aranacakVeri;
		if (DFS(agac1->kok, aranacakVeri) == 1) {
			cout << "\nSonu� => VERi BULUNDU" << endl;
			auto begin = chrono::high_resolution_clock::now();
			DFS(agac1->kok, aranacakVeri);
			auto end = chrono::high_resolution_clock::now();
			auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
			cout << "Ge�en S�re  => " << elapsed.count() << "mikro-saniye" << endl;
		}
		else
		{
			cout << "\nSonu� => VER� BULUNAMADI" << endl;
			auto begin = chrono::high_resolution_clock::now();
			DFS(agac1->kok, aranacakVeri);
			auto end = chrono::high_resolution_clock::now();
			auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
			cout << "Ge�en S�re  => " << elapsed.count() << "mikro-saniye" << endl;
		}
		break;
	}
	    default:
		break;
	}

	}
}
