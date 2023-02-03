#include <iostream>
#include <stdlib.h>
using namespace std;


//Format struct(penggabungan tipe data).
struct konv {
    float mm,cm,dm,m,dam,hm,km,pilih;
    char status,ulang;
    string nama;
    int a;
};

//Konversi satuan mm.
float hitcm(float mm){
    konv pnj[1];
    pnj[0].cm = mm/10;
    return pnj[0].cm;
}
float hitdm(float mm){
    konv pnj[1];
    pnj[0].dm = mm/100;
    return pnj[0].dm;
}
float hitm(float mm){
    konv pnj[1];
    pnj[0].m = mm/1000;
    return pnj[0].m;
}
float hitdam(float mm){
    konv pnj[1];
    pnj[0].dam = mm/10000;
    return pnj[0].dam;
}
float hithm(float mm){
    konv pnj[1];
    pnj[0].hm = mm/100000;
    return pnj[0].hm;
}
float hitkm(float mm){
    konv pnj[1];
    pnj[0].km = mm/1000000;
    return pnj[0].km;
}
void tmp (float mm){
    float cm,dm,m,dam,hm,km;

    cm = hitcm (mm);
    dm = hitdm (mm);
     m = hitm  (mm);
   dam = hitdam(mm);
    hm = hithm (mm);
    km = hitkm (mm);

    cout << "\n";
    cout <<mm<< "mm. = " <<cm<< "cm.\n";
    cout <<mm<< "mm. = " <<dm<< "dm.\n";
    cout <<mm<< "mm. = " << m<< "m.\n";
    cout <<mm<< "mm. = " <<dam<< "dam.\n";
    cout <<mm<< "mm. = " <<hm<< "hm.\n";
    cout <<mm<< "mm. = " <<km<< "km.\n";

}

//Konversi satuan cm.
float hitmm(float cm){
    konv pnj[1];
    pnj[0].mm = cm*10;
    return pnj[0].mm;
}
float hitdm1(float cm){
    konv pnj[1];
    pnj[0].dm = cm/10;
    return pnj[0].dm;
}
float hitm1(float cm){
    konv pnj[1];
    pnj[0].m = cm/100;
    return pnj[0].m;
}
float hitdam1(float cm){
    konv pnj[1];
    pnj[0].dam = cm/1000;
    return pnj[0].dam;
}
float hithm1(float cm){
    konv pnj[1];
    pnj[0].hm= cm/10000;
    return pnj[0].hm;
}
float hitkm1(float cm){
    konv pnj[1];
    pnj[0].km = cm/100000;
    return pnj[0].km;
}
void tmp1 (float cm){
    float mm,dm,m,dam,hm,km;

    mm = hitmm  (cm);
    dm = hitdm1 (cm);
     m = hitm1  (cm);
   dam = hitdam1(cm);
    hm = hithm1 (cm);
    km = hitkm1 (cm);

    cout << "\n";
    cout << cm << "cm. = " << mm << "mm.\n";
    cout << cm << "cm. = " << dm << "dm.\n";
    cout << cm << "cm. = " << m << "m.\n";
    cout << cm << "cm. = " << dam << "dam.\n";
    cout << cm << "cm. = " << hm << "hm.\n";
    cout << cm << "cm. = " << km << "km.\n";
}

//Konversi satuan dm.
float hitmm1(float dm){
    konv pnj[1];
    pnj[0].mm = dm*100;
    return pnj[0].mm;
}
float hitcm1(float dm){
    konv pnj[1];
    pnj[0].cm = dm*10;
    return pnj[0].cm;
}
float hitm2(float dm){
    konv pnj[1];
    pnj[0].m = dm/10;
    return pnj[0].m;
}
float hitdam2(float dm){
    konv pnj[1];
    pnj[0].dam = dm/100;
    return pnj[0].dam;
}
float hithm2(float dm){
    konv pnj[1];
    pnj[0].hm= dm/1000;
    return pnj[0].hm;
}
float hitkm2(float dm){
    konv pnj[1];
    pnj[0].km = dm/10000;
    return pnj[0].km;
}
void tmp2 (float dm){
     float mm,cm,m,dam,hm,km;

    mm = hitmm1 (dm);
    cm = hitcm1 (dm);
     m = hitm2  (dm);
   dam = hitdam2(dm);
    hm = hithm2 (dm);
    km = hitkm2 (dm);

    cout << "\n";
    cout << dm << "dm. = " << mm << "mm.\n";
    cout << dm << "dm. = " << cm << "cm.\n";
    cout << dm << "dm. = " << m << "m.\n";
    cout << dm << "dm. = " << dam << "dam.\n";
    cout << dm << "dm. = " << hm << "hm.\n";
    cout << dm << "dm. = " << km << "km.\n";
}

//Konversi satuan m.
float hitmm2(float m){
    konv pnj[1];
    pnj[0].mm = m*1000;
    return pnj[0].mm;
}
float hitcm2(float m){
    konv pnj[1];
    pnj[0].cm = m*100;
    return pnj[0].cm;
}
float hitdm2(float m){
    konv pnj[1];
    pnj[0].dm = m*10;
    return pnj[0].dm;
}
float hitdam3(float m){
    konv pnj[1];
    pnj[0].dam = m/10;
    return pnj[0].dam;
}
float hithm3(float m){
    konv pnj[1];
    pnj[0].hm= m/100;
    return pnj[0].hm;
}
float hitkm3(float m){
    konv pnj[1];
    pnj[0].km = m/1000;
    return pnj[0].km;
}
void tmp3 (float m){
     float mm,cm,dm,dam,hm,km;

    mm = hitmm2 (m);
    cm = hitcm2 (m);
    dm = hitdm2 (m);
   dam = hitdam3(m);
    hm = hithm3 (m);
    km = hitkm3 (m);

    cout << "\n";
    cout << m << "m. = " << mm << "mm.\n";
    cout << m << "m. = " << cm << "cm.\n";
    cout << m << "m. = " << dm << "dm.\n";
    cout << m << "m. = " << dam << "dam.\n";
    cout << m << "m. = " << hm << "hm.\n";
    cout << m << "m. = " << km << "km.\n";
}

//Konversi satuan dam.
float hitmm3(float dam){
    konv pnj[1];
    pnj[0].mm = dam*10000;
    return pnj[0].mm;
}
float hitcm3(float dam){
    konv pnj[1];
    pnj[0].cm = dam*1000;
    return pnj[0].cm;
}
float hitdm3(float dam){
    konv pnj[1];
    pnj[0].dm = dam*100;
    return pnj[0].dm;
}
float hitm3(float dam){
    konv pnj[1];
    pnj[0].m = dam*10;
    return pnj[0].m;
}
float hithm4(float dam){
    konv pnj[1];
    pnj[0].hm= dam/10;
    return pnj[0].hm;
}
float hitkm4(float dam){
    konv pnj[1];
    pnj[0].km = dam/100;
    return pnj[0].km;
}
void tmp4 (float dam){
     float mm,cm,dm,m,hm,km;

    mm = hitmm3 (dam);
    cm = hitcm3 (dam);
    dm = hitdm3 (dam);
     m = hitm3  (dam);
    hm = hithm4 (dam);
    km = hitkm4 (dam);

    cout << "\n";
    cout << dam << "dam. = " << mm << "mm.\n";
    cout << dam << "dam. = " << cm << "cm.\n";
    cout << dam << "dam. = " << dm << "dm.\n";
    cout << dam << "dam. = " << m << "m.\n";
    cout << dam << "dam. = " << hm << "hm.\n";
    cout << dam << "dam. = " << km << "km.\n";
}

//Konversi satuan hm.
float hitmm4(float hm){
    konv pnj[1];
    pnj[0].mm = hm*100000;
    return pnj[0].mm;
}
float hitcm4(float hm){
    konv pnj[1];
    pnj[0].cm = hm*10000;
    return pnj[0].cm;
}
float hitdm4(float hm){
    konv pnj[1];
    pnj[0].dm = hm*1000;
    return pnj[0].dm;
}
float hitm4 (float hm){
    konv pnj[1];
    pnj[0].m = hm*100;
    return pnj[0].m;
}
float hitdam4(float hm){
    konv pnj[1];
    pnj[0].dam= hm*10;
    return pnj[0].dam;
}
float hitkm5(float hm){
    konv pnj[1];
    pnj[0].km = hm/10;
    return pnj[0].km;
}
void tmp5 (float hm){
     float mm,cm,dm,m,dam,km;

    mm = hitmm4 (hm);
    cm = hitcm4 (hm);
    dm = hitdm4 (hm);
     m = hitm4  (hm);
    dam= hitdam4 (hm);
    km = hitkm5 (hm);

    cout << "\n";
    cout << hm << "hm. = " << mm << "mm.\n";
    cout << hm << "hm. = " << cm << "cm.\n";
    cout << hm << "hm. = " << dm << "dm.\n";
    cout << hm << "hm. = " << m << "m.\n";
    cout << hm << "hm. = " << dam << "dam.\n";
    cout << hm << "hm. = " << km << "km.\n";
}

//Konversi satuan km.
float hitmm5(float km){
    konv pnj[1];
    pnj[0].mm = km*1000000;
    return pnj[0].mm;
}
float hitcm5(float km){
    konv pnj[1];
    pnj[0].cm = km*100000;
    return pnj[0].cm;
}
float hitdm5(float km){
    konv pnj[1];
    pnj[0].dm = km*10000;
    return pnj[0].dm;
}
float hitm5 (float km){
    konv pnj[1];
    pnj[0].m = km*1000;
    return pnj[0].m;
}
float hitdam5(float km){
    konv pnj[1];
    pnj[0].dam= km*100;
    return pnj[0].dam;
}
float hithm5(float km){
    konv pnj[1];
    pnj[0].hm = km*10;
    return pnj[0].hm;
}
void tmp6 (float km){
     float mm,cm,dm,m,dam,hm;

    mm = hitmm5 (km);
    cm = hitcm5 (km);
    dm = hitdm5 (km);
     m = hitm5  (km);
    dam= hitdam5(km);
    hm = hithm5 (km);

    cout << "\n";
    cout << km << "km. = " << mm << "mm.\n";
    cout << km << "km. = " << cm << "cm.\n";
    cout << km << "km. = " << dm << "dm.\n";
    cout << km << "km. = " << m << "m.\n";
    cout << km << "km. = " << dam << "dam.\n";
    cout << km << "km. = " << hm << "hm.\n";
}

//Bagian output program.
int main (){
    konv fl,ch,st,in;
    fl.cm;fl.dam;fl.dm;fl.hm;fl.km;fl.m;fl.mm;fl.pilih;
    ch.status;ch.ulang;
    st.nama;
    in.a;

    cout << "=================================================\n";
    cout << "SELAMAT DATANG DI PROGRAM KONVERSI SATUAN PANJANG  \n";
    cout << "=================================================\n";
    cout << "\nSILAKAN VERIVIKASI DIRI ANDA!!!\n";
    cout << "\tMasukan Nama :";
    getline (cin,st.nama);
    pass :
    cout << "\tPassword     :";
    cin >> in.a;
    system ("cls");
        if (in.a>=10000000)
        {
        cout << "\n  Hallo "<<st.nama<< endl;
        cout << "  Apakah Anda Ingin Memulai?(y/t):";
        cin >>ch.status;
        system ("cls");
            if (ch.status== 'y')
                goto menu;
            else
                goto end;
        }
        else
        {
        cout << "PASSWORD SALAH \n";
        cout << "Password Minimal 8 Angka !\n";
        goto pass;
        }
    menu :
    cout << "==================================================\n";
    cout << "\t\t   MENU UTAMA  \n";
    cout << "==================================================\n";
    cout << "\t1. Konversi Satuan Mili Meter (mm).\n";
    cout << "\t2. Konversi Satuan Centi Meter (cm).\n";
    cout << "\t3. Konversi satuan Desi Meter (dm).\n";
    cout << "\t4. Konversi satuan Meter (m).\n";
    cout << "\t5. Konversi satuan Deka Meter (dam).\n";
    cout << "\t6. Konversi satuan Hekto Meter (hm).\n";
    cout << "\t7. Konversi satuan Kilo Meter (km).\n";
    cout << "\t8. Tutup Program.\n";
    cout << "==================================================\n";
    cout << "silakan memilih :";
    cin >> fl.pilih;
    system ("cls");
                //Output satuan mm.
        if (fl.pilih==1)
        {
            do {
                cout << "==================================================\n";
                cout << "\tKonversi Panjang Mili Meter (mm).\n";
                cout << "==================================================\n";
                cout << "Masukan nilai : ";
                cin >> fl.mm;
                tmp(fl.mm);
                cout << "\nUlang Konversi panjang mm?(y/t) ";
                cin >> ch.ulang;
                system("cls");
            }while (ch.ulang=='y');
            kmb :
            cout << "\nKembali ke menu?(y/t) :";
            cin >> ch.status;
            system ("cls");
                if (ch.status=='y')
                    goto menu;
                else if (ch.status=='t')
                    goto end;
                else
                    cout << "Mohon Maaf Karakter " << ch.status << " Tidak Terdaftar Disistem!.\n";
                        goto kmb;

        }
                //Output satuan cm.
        else if (fl.pilih==2)
        {
            do{
                cout << "==================================================\n";
                cout << "\tKonversi Panjang Centi Meter (cm).\n";
                cout << "==================================================\n";
                cout << "Masukan nilai : ";
                cin >> fl.cm;
                tmp1(fl.cm);
                cout << "\nUlang Konversi panjang cm?(y/t) ";
                cin >> ch.ulang;
                system("cls");
            }while(ch.ulang=='y');
            cout << "\nKembali ke menu?(y/t) :";
            cin >> ch.status;
            system ("cls");
                if (ch.status=='y')
                    goto menu;
                else if (ch.status=='t')
                    goto end;
                else
                    cout << "Mohon Maaf Karakter " << ch.status << " Tidak Terdaftar Disistem!.\n";
                        goto kmb;
        }
                //Output satuan dm.
        else if(fl.pilih==3)
        {
            do{
                cout << "==================================================\n";
                cout << "\tKonversi Panjang Desi Meter (dm).\n";
                cout << "==================================================\n";
                cout << "Masukan nilai : ";
                cin >> fl.dm;
                tmp2(fl.dm);
                cout << "\nUlang Konversi panjang dm?(y/t) ";
                cin >> ch.ulang;
                system("cls");
            }while(ch.ulang=='y');
            cout << "\nKembali ke menu?(y/t) :";
            cin >> ch.status;
            system ("cls");
                if (ch.status=='y')
                    goto menu;
                else if (ch.status=='t')
                    goto end;
                else
                    cout << "Mohon Maaf Karakter " << ch.status << " Tidak Terdaftar Disistem!.\n";

                        goto kmb;
        }
                //Output satuan m.
        else if (fl.pilih==4)
        {
            do{
                cout << "==================================================\n";
                cout << "\tKonversi Panjang Meter (m).\n";
                cout << "==================================================\n";
                cout << "Masukan nilai : ";
                cin >> fl.m;
                tmp3(fl.m);
                cout << "\nUlang Konversi panjang m?(y/t) ";
                cin >> ch.ulang;
                system("cls");
            }while(ch.ulang=='y');
            cout << "\nKembali ke menu?(y/t) :";
            cin >> ch.status;
            system ("cls");
                if (ch.status=='y')
                    goto menu;
                else if (ch.status=='t')
                    goto end;
                else
                    cout << "Mohon Maaf Karakter " << ch.status << " Tidak Terdaftar Disistem!.\n";
                        goto kmb;
        }
                //Output satuan dam.
        else if(fl.pilih==5)
        {
             do{
                cout << "==================================================\n";
                cout << "\tKonversi Panjang Deka Meter (dam).\n";
                cout << "==================================================\n";
                cout << "Masukan nilai : ";
                cin >> fl.dam;
                tmp4(fl.dam);
                cout << "\nUlang Konversi panjang dam?(y/t) ";
                cin >> ch.ulang;
                system("cls");
            }while(ch.ulang=='y');
            cout << "\nKembali ke menu?(y/t) :";
            cin >> ch.status;
            system ("cls");
                if (ch.status=='y')
                    goto menu;
                else if (ch.status=='t')
                    goto end;
                else
                    cout << "Mohon Maaf Karakter " << ch.status << " Tidak Terdaftar Disistem!.\n";
                        goto kmb;
        }
                //Output satuan hm.
        else if(fl.pilih==6)
        {
            do{
                cout << "==================================================\n";
                cout << "\tKonversi Panjang Hekto Meter (hm).\n";
                cout << "==================================================\n";
                cout << "Masukan nilai : ";
                cin >> fl.hm;
                tmp5(fl.hm);
                cout << "\nUlang Konversi panjang hm?(y/t) ";
                cin >> ch.ulang;
                system("cls");
            }while(ch.ulang=='y');
            cout << "\nKembali ke menu?(y/t) :";
            cin >> ch.status;
            system ("cls");
                if (ch.status=='y')
                    goto menu;
                else if (ch.status=='t')
                    goto end;
                else
                    cout << "Mohon Maaf Karakter " << ch.status << " Tidak Terdaftar Disistem!.\n";
                        goto kmb;
        }
                //Output satuan km.
        else if(fl.pilih==7)
        {
             do{
                cout << "==================================================\n";
                cout << "\tKonversi Panjang Kilo Meter (km).\n";
                cout << "==================================================\n";
                cout << "Masukan nilai : ";
                cin >> fl.km;
                tmp6(fl.km);
                cout << "\nUlang Konversi panjang km?(y/t) ";
                cin >> ch.ulang;
                system("cls");
            }while(ch.ulang=='y');
            cout << "\nKembali ke menu?(y/t) :";
            cin >> ch.status;
            system ("cls");
                if (ch.status=='y')
                    goto menu;
                else if (ch.status=='t')
                    goto end;
                else
                    cout << "Mohon Maaf Karakter " << ch.status << " Tidak Terdaftar Disistem!.\n";
                        goto kmb;
        }
                 //Output Tutup Program..
        else if (fl.pilih==8)
        {
            cout << "\n\n\tTutup Program?(y/t)";
            cin >>ch.status;
            system("cls");
                if (ch.status=='y')
                    goto end;
                else
                    goto menu;
        }
        else
        {
            cout << "\nMohon Maaf Angka " << fl.pilih << "Tidak Terdaftar, Silakan Memilih Yang Ada Dimenu!!.\n\n\n";
                goto menu;
        }

                //Output end.
        end :
        cout << "\n\t====================================================\n";
        cout << "\t\t\t PROGRAM SELESAI\n";
        cout << "\t\t    DIBUAT OLEH MUHAMMAD ABDULLAH\n";
        cout << "\t  TERIMA KASIH TELAH MENCOBA PROGRAM KONVERSI INI\n";
        cout << "\t====================================================\n";
        cout << "\t=================== SAMPAI JUMPA ===================\n";
        cout << "\t====================================================\n\n\n";

}
