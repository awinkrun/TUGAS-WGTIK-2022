#include <iostream>

using namespace std;


struct mhs {
    string nama, NIM;
    float ipk;
    int semester;
    int kodeUnik;
};

//CEK BILANGAN PRIMA//
//13040201017//
bool cekPrima(int key) {
    bool prima = true;
    int i = 2;
    if (key == 1){
        prima = false;
    } else {
        while (i < key && prima == true){
            if (key % i == 0){
                prima = false;
                break;
            }
            i++;
        }
    }
    return prima;
}

int main()
{
    int N;
    float maxIpk;
    string maxNama;
    float jumlahIpk = 0;
    int countCoffee = 0;
    int countCreative = 0;
    int countMental = 0;

    cout << "Jumlah Data : ";
    cin >> N;
    cout << endl;


    for(int i = 0; i < N; i++){
        mhs data;
        cout << "Data ke " << i+1 << endl;
        cout << "Nama : ";
        cin >> data.nama;
        cout << "NIM : ";
        cin >> data.NIM;

        //PROGRAM CEK PRODI BERDASARKAN DIGIT KE 2 DARI NIM DAN JUMLAH MAHASISWA SETIAP PRODI//
        //1304201017//
        if(data.NIM[1] == '1'){
            cout << "Prodi Anda adalah Art of Coffee" << endl;
            countCoffee++;
        } else if(data.NIM[1] == '2'){
            cout << "Prodi Anda adalah Creative Content" << endl;
            countCreative++;
        } else {
            cout << "Prodi Anda adalah Mental Health" << endl;
            countMental++;
        }

        cout << "Ipk : ";
        cin >> data.ipk;

        //PROGRAM MENAMPILKAN NAMA MAHASISWA DENGAN IPK TERBESAR//
        //1304201017//
        if(i == 0 ||data.ipk > maxIpk){
            maxNama = data.nama;
            maxIpk = data.ipk;
        }

        //PROGRAM MENAMPILKAN RATA-RATA IPK MAHASISWA//
        //1304201017//
        jumlahIpk = jumlahIpk + data.ipk;
        cout << "Semester : ";
        cin >> data.semester;

        //PROGRAM CEK PREDIKAT MAHASISWA//
        //1304201017//
        if (data.ipk > 3.5 && data.semester <= 8){
            cout << "CAMLAUDE" << endl;
        }

        cout << "Kode Unik : ";
        cin >> data.kodeUnik;

        //PROGRAM MENAMPILKAN MAHASISWA BERPRESTASI BERDASARKAN KODE UNIK BILANGAN PRIMA//
        //1304201017//
        if(cekPrima(data.kodeUnik) == true){
            cout << "MAHASISWA BERPRESTASI " << endl;
        }
        cout << endl;

    }

    cout << ".........INPUT DATA SELESAI........" << endl;
    cout << "IPK terbesar didapatkan oleh " << maxNama << endl;
    cout << "IPK Rata-rata : " << jumlahIpk/float(N) << endl;
    cout << "Program Studi Art of Coffee : " << countCoffee << endl;
    cout << "Program Studi Creative Content : " << countCreative << endl;
    cout << "Program Studi Mental Health : " << countMental << endl;

    return 0;
}
