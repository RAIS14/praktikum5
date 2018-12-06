# praktikum5

**soal1 = susun algoritma utk menginput bilangan sebanyak-banyaknya sampai kondisi yang diinput adalah angka 0.**

berikut adalah programnya :
````
{

int a,max=0;
do{
cout << "masukan bilangan :" ;
cin >> a;
if (a>max)
max=a;
}
while (a!=0) ;
cout <<max;
return 0 ;

}
````
**Hasilnya** :
![img]https://raw.githubusercontent.com/RAIS14/praktikum5/master/hasil_soal1.png

**flowchart nya:**
![img]https://raw.githubusercontent.com/RAIS14/praktikum5/master/flowchart_soal.1.jpg


**soal2 = program operator OR dengan menginputkan 3 bilangan.**
````
    berikut ini adalah penjelasannya :
    operator OR (||) digunakan untuk menggabungkan dua atau lebih pernyataan untuk mendapatkan hasil rasional tunggal.
    pertama inputkan 3 buah bilangan :
    masukan bilangan 1 = 3
    masukan bilangan 2 = 5
    masukan bilangan 3 = 8
    
    pernyataan 1: d = a+b==c
                    d = 3+5==8 maka bernilai "benar/1"
    pernyataan 2: e = a+c==b
                    e = 3+8==5 maka bernilai "salah/0"
    pernyataan 3: f = b+c==a
                    f = 5+8==3 maka bernilai "salah/0"
    dilihat dari pernyataan diatas dengan hasil 1 benar, dan 2 salah ,
    maka HASIL AKHIR (g) = d || e || f adalah "benar/1"
    
    lebih jelasnya lihat tabel pernyataan OR (||) sbb:
    X           Y            X||Y
    true(1)     true(1)      true(1)
    true(1)     false(0)     true(1)
    false(0)    true(1)      true(1)
    false(0)    false(0)     false(0)
````
    
    **Berikut ini adalah programnya**
````
    {
        int a,b,c,d,e,f,g;
        cout<<"masukan bilangan 1 : ";cin>>a;
        cout<<"masukan bilangan 2 : ";cin>>b;
        cout<<"masukan bilangan 3 : ";cin>>c;
        
        d = a+b==c ;
        e = a+c==b ;
        f = b+c==a ;
        g = d || e || f ;
        
        cout<<"\n====program operator OR====";
        cout<<"\nhasil dari d = a+b==c adalah :"<<d;
        cout<<"\nhasil dari e = a+c==b adalah :"<<e;
        cout<<"\nhasil dari f = b+c==a adalah :"<<f;
        cout<<"\nhasil dari g = d || e || f adalah :"g;
        
        return 0 ;
     }
````
     
     **ini hasilnya** :
     ![img]https://raw.githubusercontent.com/RAIS14/praktikum5/master/hasil_soal2.png

**flowchartnya**:
![img]https://raw.githubusercontent.com/RAIS14/praktikum5/master/flowchart_soal2.jpg