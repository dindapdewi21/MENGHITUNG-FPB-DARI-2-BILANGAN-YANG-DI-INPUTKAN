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
