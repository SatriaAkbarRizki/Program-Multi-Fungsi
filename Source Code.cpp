#include <iostream>
#include <cmath>
using namespace std;
void garis()
{
	for (int i = 1; i <= 44;i++)
	{
		cout << "=";
	}
	cout << endl;
}

int tambah()
{
	int a,b,hasil;
	cout << "Masukkan nilai pertama: ";
	cin >> a;
	cout << "Masukkan nilai Kedua: ";
	cin >> b;
	hasil = a + b;
	cout << "Hasilnya adalah: "<< hasil << endl;
	return hasil;
}

int kurang()
{
	int a,b,hasil;
	cout << "Masukkan nilai pertama: ";
	cin >> a;
	cout << "Masukkan nilai Kedua: ";
	cin >> b;
	hasil = a - b;
	cout << "Hasilnya adalah: "<< hasil << endl;
	return hasil;
}

int perkalian()
{
	int a,b,hasil;
	cout << "Masukkan nilai pertama: ";
	cin >> a;
	cout << "Masukkan nilai Kedua: ";
	cin >> b;
	hasil = a * b;
	cout << "Hasilnya adalah: "<< hasil << endl;
	return hasil;
}

int pembagian()
{
	int a,b,hasil;
	cout << "Masukkan nilai pertama: ";
	cin >> a;
	cout << "Masukkan nilai Kedua: ";
	cin >> b;
	hasil = a / b;
	cout << "Hasilnya adalah: "<< hasil << endl;
	return hasil;
}

void belum_buat()
{
	for (int i = 1; i <= 6;i++)
		cout << " " << endl;
	for (int a =1;a <=11;a++)
		cout << " ";
	cout << "Fitur belum Tersedia.Silahkan Tunggu Update selanjutnya :)" << endl;
	for (int b = 1;b <= 2;b++)
		cout << " " << endl;
	for (int c = 1;c <= 1;c++)
		cout << " ";
	cout << "Ingin Develoaper Cepat Updatekan Software ini.Silahkan Traktirkan Saya kopi :)" << endl;
	for (int d = 1;d <= 7;d++)
		cout << " " << endl;
}

void Changelog()
{
	system("clear");
	int nomor [5] ={1,2,3,4,5};
	cout << "15-2-2021" << endl;
	for(int i = 1;i <= 10;i++)
		cout << "*";
		cout << "\n" << nomor[0] << " Initial Build" << endl;
		
	cout << "\n";
	cout << "17-2-2021" << endl;
	for(int i = 1;i <= 10;i++)
		cout << "*";
	cout << "\n";
		cout << nomor[0] << " Update Penambahan Fitur Konversi Mata Uang" << endl;
		cout << nomor[1] << " Penambahan konversi Mata Uang USD ke IDR" << endl;
		
	cout << "\n";
	cout << "22-2-2021" << endl;
	for(int i = 1;i <= 10;i++)
		cout << "*";
	cout <<"\n";
	    cout << nomor[0] << " Update Mata uang koonversi Rupiah dari 14.042 menjadi 14.115" << endl;
	    cout << nomor[1] << " Penambahan Konversi USD KE Ringgit (Malaysia) dan AED (Uni Emirat Arab" << endl;
		cout << nomor[2] << " Penambahan Fitur Konversi Uang Malaysia Ke USD,IDR DAN AED" << endl;
		
	cout << "\n";
	cout << "31-3-2021" << endl;
	for(int i = 1;i <= 10;i++)
		cout << "*";
	cout <<"\n";
	    cout << nomor[0] << " Perbaiki Bug" << endl;
	    cout << nomor[1] << " Perbaiki Tampilan Multi_Fungsi yang tidak rapi" << endl;
	    cout << nomor[2] << " Menghapus Mata uang AED (Uni Emirat Arab) dari Program_multi" << endl;
	    cout << nomor[3] << " Penambahan fitur Exit Di menu Multi_Fungsi" << endl;

	cout << "\n";
	cout << "2-4-2021" << endl;
	for(int i = 1;i <= 10;i++)
		cout << "*";
	cout << endl;
	    cout << nomor[0] << " Perbaiku Bug" << endl;
	    cout << nomor[1] << " Perbaiki Kesalahan Konversi Mata Uang Ringgit ke USD DAN IDR" << endl;

	cout << "\n";
	cout << "2-4-2021" << endl;
	for(int i = 1;i <= 10;i++)
		cout << "*";
	cout << endl;
	    cout << nomor[0] << " Perbaiki Tata letak program" << endl;
	    cout << nomor[1] << " Penambahan fitur kembali disetiap program" << endl;
	    cout << nomor[2] << " Perbaiki Kesalahan huruf di setiap program" << endl;

	cout << "\n";
	cout << "10-6-2021" << endl;
	for(int i = 1;i <= 10;i++)
		cout << "*";
	cout << endl;
		 cout << nomor[0] << " Penambahan Menu About Program" << endl;
		 cout << nomor[1] << " Perbaiki Kesalahan huruf di setiap program" << endl;
	     cout << nomor[2] << " Menghapus Fitur konversi bilangan sistem dari Program_multi_Fungsi " << endl;
	     cout << nomor[3] << " Penambahan Fitur Konversi Satuan panjang di Program_multi_Fungsi" << endl;
}

int USD()
{
	double uang;
	float konversi;
	char uang_k;
	cout << "Masukkan Uang anda: ";
	cin >> uang;
	cout << "\n";                                                   //Bagian Belakang
	cout << "\n";

	system("clear");
	garis();
	cout << "Menu Uang yang bisa Dikonversikan" << endl;
	cout << "Uang Anda: " << uang << endl;

	cout << endl;
	cout << "A.IDR (Indonesia) \nB.Ringgit (Malaysia)" << endl;
	cout << "Masukkan Uang yang anda ingin dikonversikan: ";
	cin >> uang_k;
	if(uang_k == 'A' ||  uang_k == 'a')
	{
		konversi = uang * 14.115;
		cout << "\n";
		cout << "Hasilnya adalah: " << konversi << " Rupiah" << endl;
		
	}
	else if (uang_k == 'B' || uang_k == 'b')
	{
		konversi = uang * 4.0405;
		cout << "\n";
		cout << "Hasilnya adalah: " << konversi << " Ringgit" << endl;
	}
	return konversi;
}


int IDR()
{
	float konversi_1;
	float uang;
	float konversi;
	char uang_k;
	cout << "Masukkan Uang anda: ";
	cin >> uang;
	cout << "\n";                                                   //Bagian Belakang
	cout << "\n";

	system("clear");
	garis();
	cout << "Menu Uang yang bisa Dikonversikan" << endl;
	cout << "Uang anda: " << uang << endl;

	cout << endl;
	cout << "A.USD (Amerika Serikat) \nB.Ringgit (Malaysia)" << endl;
	cout << "Masukkan Uang yang anda ingin dikonversikan: ";
	cin >> uang_k;
	if (uang_k == 'A' || uang_k == 'a')
	{
		if (uang >= 15)
		{
			konversi_1 = uang / 15;
			cout << "\n";
	        cout << "Hasilnya adalah: " << konversi_1 << " Dolar"<< endl;
		}
		else if (uang <= 15)
		{
			system("clear");
			cout << "Uang anda tidak bisa dikonverikan. Harus diatas 15 ribu" << endl;
		}
	}
	else if(uang_k == 'B' || uang_k == 'b')
	{
		if (uang >= 3000)
		{
			konversi_1 = uang / 3000;
			cout << "Hasilnya adalah: " << konversi_1 << " Ringgit" << endl;
		}
		else if (uang_k < 3000)
		{
			system("clear");
			cout << "Uang anda tidak bisa dikonversikan. Harus diatas 3000" << endl;
		}
	}
	return konversi_1; 
}

int Ringgit()
{
	double uang;
	float konversi;
	char uang_k;
	cout << "Masukkan Uang anda: ";
	cin >> uang;
	cout << "\n";                                                   //Bagian Belakang
	cout << "\n";

	system("clear");
	garis();
	cout << "Menu Uang yang bisa Dikonversikan" << endl;
	cout << "Uang anda: " << uang << endl;

	cout << endl;
	cout << "A.USD (Amerika Serikat) \nB.Rupiah (Indonesia)" << endl;
	cout << "Masukkan Uang yang anda ingin dikonversikan: ";
	cin >> uang_k;
	if (uang_k == 'A' || uang_k == 'a')
	{
		if (uang == 1)
		{
			konversi = 0.24216;                     
		}
		else
		{
			konversi = uang * 0.24216 + 2;
		}
		cout << "Hasilnya adalah: " << konversi << " Dolar" << endl;
	}
	else if (uang_k == 'B' || uang_k == 'b')
	{
		if ( uang >= 1)
		{
			konversi = uang * 3000;
		}
		cout << "Hasilnya adalah: " << konversi << " Rupiah" << endl;
	}
	cout << "\n";

	return konversi;
}

int cm_to()
{
	float cm;
	float hasilnya;
	char pilihan;
	string j_satuan;
		system("clear");
		cout << "A. Cm ke Mm \nB. Cm ke Dm \nC. Cm ke M \nD. Cm ke Dam \nE. Cm ke Hm \nF. Cm ke Km" << endl;
		cout << "Masukkan Pilihan anda: ";
		cin >> pilihan;
		system("clear");
		cout << "Masukkan nilai cm: ";
		cin >> cm;
		if (pilihan == 'A' || pilihan == 'a')
		{
			hasilnya = cm * 10;
			j_satuan = "Mm";
		}
		else if (pilihan == 'B' || pilihan == 'b')
		{
			hasilnya = cm / 10;
			j_satuan = "Dm";
		}
		else if (pilihan == 'C' || pilihan == 'c')
		{
			hasilnya = cm / pow(10,2);
			j_satuan = "M";
		}
		else if (pilihan == 'D' || pilihan == 'd')
		{
			hasilnya = cm / pow (10,3);
			j_satuan = "Dam";
		}
		else if (pilihan  == 'E' || pilihan == 'e')
		{
			hasilnya = cm / pow (10,4);
			j_satuan = "Hm";
		}
		else if (pilihan == 'F' || pilihan == 'f')
		{
			hasilnya = cm / pow (10,5);
			j_satuan = "Km";
		}

		cout << "Nilai " << j_satuan << " adalah: " << hasilnya << endl;
		return hasilnya;
}

int Mm_to()
{
	float Mm;
	float hasilnya;
	char pilihan;
	string j_satuan;
	system("clear");

	cout << "A. Mm ke Cm \nB. Mm ke Dm \nC. Mm ke M \nD. Mm ke Dam \nE. Mm ke Hm \nF. Mm ke Km" << endl;
	cout << "Masukkan pilihan anda: ";
	cin >> pilihan;
	system("clear");

	cout << "Masukkan nilai Mm: ";
	cin >> Mm;
	if (pilihan == 'A' || pilihan == 'a')
	{
		hasilnya = Mm / 10;
		j_satuan = "Cm";
	}
	else if (pilihan == 'B' || pilihan == 'b')
	{
		hasilnya = Mm / pow(10,2);
		j_satuan = "Dm";
	}
	else if (pilihan == 'C' || pilihan == 'c')
	{
		hasilnya = Mm / pow (10,3);
		j_satuan = "M";
	}
	else if (pilihan == 'D' || pilihan == 'd')
	{
		hasilnya = Mm / pow (10,4);
		j_satuan = "Dam";
	}
	else if (pilihan == 'E' || pilihan == 'e')
	{
		hasilnya = Mm / pow (10,5);
		j_satuan = "Hm";
	}
	else if (pilihan == 'F' || pilihan == 'f')
	{
		hasilnya = Mm / pow (10,6);
		j_satuan = "Km";
	}
	cout << "Nilai " << j_satuan << " adalah: " << hasilnya << endl;
	return hasilnya;
}

int Dm_to()
{
	float Dm;
	float hasilnya;
	char pilihan;
	string j_satuan;
	system("clear");

	cout << "A. Dm ke Cm \nB. Dm ke Mm \nC. Dm ke M \nD. Dm ke Dam \nE. Dm ke Hm \nF. Dm ke Km" << endl;
	cout << "Masukkan pilihan anda; ";
	cin >> pilihan;
	system("clear");

	cout << "Masukkan nilai Mm: ";
	cin >> Dm;
	if (pilihan == 'A' || pilihan == 'a')
	{
		hasilnya = Dm * 10;
		j_satuan = "Cm";
	}
	else if (pilihan == 'B' || pilihan == 'b')
	{
		hasilnya = Dm * pow(10,2);
		j_satuan = "Mm";
	}
	else if (pilihan == 'C' || pilihan == 'c')
	{
		hasilnya = Dm / 10;
		j_satuan = "M";
	}
	else if (pilihan == 'D' || pilihan == 'd')
	{
		hasilnya = Dm / pow (10,2);
		j_satuan = "Dam";
	}
	else if (pilihan == 'E' || pilihan == 'e')
	{
		hasilnya = Dm / pow (10,3);
		j_satuan = "Hm";
	}
	else if (pilihan == 'F' || pilihan == 'f')
	{
		hasilnya = Dm / pow (10,4);
		j_satuan = "Km";
	}
	cout << "Nilai " << j_satuan << " adalah: " << hasilnya << endl;
	return hasilnya;

}

int M_to()
{
	float M;
	float hasilnya;
	char pilihan;
	string j_satuan;
	system("clear");

	cout << "A. M ke Dam \nB. M ke Hm \nC. M ke Km \nD. M ke Dm \nE. M ke Cm \n F. M ke Mm" << endl;
	cout << "Masukkan pilihan anda: ";
	cin >> pilihan;

	system("clear");
	cout << "Masukkan nilai Mm: ";
	cin >> M;
	if (pilihan == 'A' || pilihan == 'a')
	{
		hasilnya = M * 10;
		j_satuan = "Dam";
	}
	else if (pilihan == 'B' || pilihan == 'b')
	{
		hasilnya = M * pow(10,2);
		j_satuan = "Hm";
	}
	else if (pilihan == 'C' || pilihan == 'c')
	{
		hasilnya = M * pow (10,3);
		j_satuan = "Km";
	}
	else if (pilihan == 'D' || pilihan == 'd')
	{
		hasilnya = M / 10;
		j_satuan = "Dm";
	}
	else if (pilihan == 'E' || pilihan == 'e')
	{
		hasilnya = M / pow (10,2);
		j_satuan = "Dm";
	}
	else if (pilihan == 'F' || pilihan == 'f')
	{
		hasilnya = M / pow (10,3);
		j_satuan = "Mm";
	}
	cout << "Nilai " << j_satuan << " adalah: " << hasilnya << endl;
	return hasilnya;
}

int Dam_to()
{
	float Dam;
	float hasilnya;
	char pilihan;
	string j_satuan;
	system("clear");

	cout << "A. Dam ke Hm \nB. Dam ke Km \nC. Dam ke M \nD. Dam ke Cm  \nE. Dam ke Mm" << endl;
	cout << "Masukkan Pilihan anda: ";
	cin >> pilihan;
	system("clear");

	cout << "Masukkan nilai Mm: ";
	cin >> Dam;
	if (pilihan == 'A' || pilihan == 'a')
	{
		hasilnya = Dam / 10;
		j_satuan = "Hm";
	}
	else if (pilihan == 'B' || pilihan == 'b')
	{
		hasilnya = Dam / pow(10,2);
		j_satuan = "Km";
	}
	else if (pilihan == 'C' || pilihan == 'c')
	{
		hasilnya = Dam *  10;
		j_satuan = "M";
	}
	else if (pilihan == 'D' || pilihan == 'd')
	{
		hasilnya = Dam * pow(10,2);
		j_satuan = "Cm";
	}
	else if (pilihan == 'E' || pilihan == 'e')
	{
		hasilnya = Dam * pow (10,3);
		j_satuan = "Mm";
	}
	cout << "Nilai " << j_satuan << " adalah: " << hasilnya << endl;
	return hasilnya;

}

int hm_to()
{
	float hm;
	float hasilnya;
	char pilihan;
	string j_satuan;
	system("clear");

	cout << "A. Hm ke Km \nB. Hm ke Dam \nC. Hm ke M \nD. Hm ke Dm \nE. Hm ke Cm \nF. Hm ke Mm" << endl;
	cout << "Masukkan pilihan anda: ";
	cin >> pilihan;
	system("clear");

	cout << "Masukkan nilai hmL: ";
	cin >> hm;
	if (pilihan == 'A' || pilihan == 'a')
	{
		hasilnya = hm / 10;
		j_satuan = "Km";
	}
	else if (pilihan == 'B' || pilihan == 'b')
	{
		hasilnya  = hm * 10;
		j_satuan = "Dam";
	}
	else if (pilihan == 'C' || pilihan == 'c')
	{
		hasilnya = hm * pow (10,2);
		j_satuan = "M";
	}
	else if (pilihan == 'D' || pilihan == 'd')
	{
		hasilnya = hm * pow (10,3);
		j_satuan = "Dm";
	}
	else if (pilihan == 'E' || pilihan == 'e')
	{
		hasilnya = hm * pow (10,4);
		j_satuan = "Cm";
	}
	else if (pilihan == 'F' || pilihan == 'f')
	{
		hasilnya = hm * pow (10,5);
		j_satuan = "Mm";
	}

	cout << "Nilai " << j_satuan << " adalah: " << hasilnya << endl;
	return hasilnya;
}

int km_to()
{
	float km;
	float hasilnya;
	char pilihan;
	string j_satuan;
	system("clear");

	cout << "A. Km ke Hm \nB. Km ke Dam \nC. Km ke M \nD. Km ke Dm \nE. Km ke Cm \nF. Km ke Mm" << endl;
	cout << "Masukkan pilihan anda: ";
	cin >> pilihan;
	system("clear");

	cout << "Masukkan nilai km: ";
	cin >> km;

	if(pilihan == 'A' || pilihan == 'a')
	{
		hasilnya = km / 10;
		j_satuan = "Hm";
	}
	else if (pilihan == 'B' || pilihan == 'b')
	{
		hasilnya = km / pow(10,2);
		j_satuan = "Dam";
	}
	else if (pilihan == 'C' || pilihan == 'c')
	{
		hasilnya = km / pow (10,3);
		j_satuan = "M";
	}
	else if (pilihan == 'D' || pilihan == 'd')
	{
		hasilnya = km / pow (10,4);
		j_satuan = "Dm";
	}
	else if (pilihan == 'E' || pilihan == 'e')
	{
		hasilnya = km / pow(10,5);
		j_satuan = "Cm";
	}
	else if (pilihan == 'F' || pilihan =='f')
	{
		hasilnya = km / pow (10,6);
		j_satuan = "Mm";
	}
	cout << "Nilai " << j_satuan << " adalah: " << hasilnya << endl;
	return hasilnya;
}

int about_program()
{
	for (int a = 1; a <= 80;a++)
	{
		cout << "*";
	}

	for (int b = 1;b  <= 9;b ++)
		cout << " " << endl;
	for (int c = 1;c <= 29; c++ )
		cout << " ";
	cout << "Program Multi Fungsi " << endl;

	for (int c = 1;c <= 29; c++ )
		cout << " ";
	cout << "Versi Program : 1.5 (BETA)" << endl;

	for (int c = 1;c <= 29; c++ )
		cout << " ";
	cout << "Dibuat oleh Satria_AR" << endl;

	for (int c = 1;c <= 9; c++ )
		cout << " " << endl;


	for (int a = 1; a <= 80;a++)
	{
		cout << "*";
	}
}
int main()
{
	char masukkan,masukkan_pengunna,pilihan_1,pilihan_2;
	do
	{
	pindah:
	system("clear");

	cout << "Menu Multi_Fungsi" << endl;
	cout << "A. Kalkulator \nB. Konversi Mata Uang \nC. Konversi satuan panjang \nD. Changelog \nE. About Program \nF. Exit";
	cout << "\nMasukkan pilihan anda: ";
	cin >> masukkan;
	//Kalkulatior
	if (masukkan == 'A' || masukkan == 'a')
	{
		system("clear");
		garis();
		cout << "Menu Kalkulatior" << endl;
		cout << "A.Tambah \nB.Kurang \nC.kali \nD.bagi\nE.kembali" << endl;
		cout << "Masukkan pilihan anda: ";
		cin >> pilihan_1;
		system("clear");
		if (pilihan_1 == 'A' || pilihan_1 == 'a')
		{
			garis();
			tambah();
			garis();
		}
		else if (pilihan_1 == 'B' || pilihan_1 == 'b')
		{
			garis();
			kurang();
			garis();
		}
		else if (pilihan_1 == 'C' || pilihan_1 == 'c')
		{
			garis();
			perkalian();
			garis();
		}
		else if (pilihan_1 == 'D' || pilihan_1 == 'd')
		{
			garis();
			pembagian();
			garis();
		}
		else if (pilihan_1 == 'E' || pilihan_1 == 'e')
		{
			goto pindah;
		}
	}
	
	//Konversi Mata uang
	else if (masukkan == 'B' || masukkan == 'b')
	{
		system("clear");
		garis();
		cout << "Menu Konversi Mata Uang" << endl;
		cout << "A.USD (Amerika Serikat) \nB.IDR (Indonesia) \nC.Ringgit (Malaysia) \nD.kembali" << endl;
		cout << "Masukkan Pilihan Mata Uang Anda: ";
		cin >> pilihan_2;
		if (pilihan_2 == 'A' || pilihan_2 == 'a')
		{
			garis();
			USD();
			garis();	
		}
		
		
		else if (pilihan_2 == 'B' || pilihan_2 == 'b')           
		{
			garis();
			IDR();
			garis();
		}
		
		
		
		else if (pilihan_2 == 'C' || pilihan_2 == 'c')
		{
			garis();
			Ringgit();
			garis();
		}
		else if (pilihan_2 == 'D' || pilihan_2 == 'd')
		{
			goto pindah;
		}
	}
	
	
	else if (masukkan == 'C' || masukkan == 'c')
	{
		system("clear");
		cout << "A. Cm Ke.. \nB. Mm ke... \nC. Dm ke... \nD. M ke...\nE. Dam ke... \nF. Hm ke... \nG. Km ke... \nH. kembali" << endl;
		cout << "Masukkan pilihan anda: ";
		cin >> masukkan;
		if (masukkan == 'A' || masukkan == 'a')
		{
			cm_to();
		}
		else if (masukkan == 'B' || masukkan == 'b')
		{
			Mm_to();
		}
		else if (masukkan == 'C' || masukkan == 'c')
		{
			Dm_to();
		}
		else if (masukkan == 'D' || masukkan == 'd')
		{
			M_to();
		}
		else if (masukkan == 'E' || masukkan == 'e')
		{
			Dam_to();
		}
		else if (masukkan == 'F' || masukkan == 'f')
		{
			hm_to();
		}
		else if (masukkan == 'G' || masukkan == 'g')
		{
			km_to();
		}
		else if (masukkan == 'H' || masukkan == 'h')
		{
			goto pindah;
		}
	}
	
	
	else if (masukkan == 'D' || masukkan == 'd')
	{
		system("clear");
		Changelog();
	}

	
	else if (masukkan == 'E' || masukkan == 'e')
	{
		system("clear");
		about_program();
	}
	else if (masukkan == 'F' || masukkan == 'f')
	{
		system("clear");
		goto keluar;
	}
	cout << "\n";
	cout << "Apakah Anda ingin Memakai program ini Lagi? (Y/T): ";
	cin >> masukkan_pengunna;
	}

	while(masukkan_pengunna == 'Y' || masukkan_pengunna =='y');
	system("clear");
	keluar:
	return 0;
}
