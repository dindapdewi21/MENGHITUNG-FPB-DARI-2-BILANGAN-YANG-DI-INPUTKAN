# MENGHITUNG-FPB-DARI-2-BILANGAN-YANG-DI-INPUTKAN

## CODINGAN LENGKAP

    #include<iostream>

    using namespace std;

    int main (int argc,char *argv[])
    {
    int m,n,r;
    cout<<"Program menghitung FPB dari 2 bilangan yang diinputkan \n\n";
    cout<<"Masukkan bilangan pertama :";
    cin>>m;
    cout<<"Masukkan bilangan kedua :";
    cin>>n;
    r=m%n;
    while (r!=0)
    {
        m=n;
        n=r;
        r=m%n;
    }
        cout<<"Faktor persekutuan terbesar adalah :"<<n<<"\n";
        return 0;
    }

## HASIL CODINGAN

![img](https://github.com/dindapuspitadewi/MENGHITUNG-FPB-DARI-2-BILANGAN-YANG-DI-INPUTKAN/blob/master/FPB%20dari%202%20bilangan%20yang%20diinputkan.png?raw=true)
