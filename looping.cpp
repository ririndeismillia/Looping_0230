#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int x;

    cout<<"PERULANGAN FOR"<<endl;
    for(int i=0;i<=4;i++){
        cout<<"Teknologi Informasi UMY"<<endl;
    }
    cout<<endl;
    srand(time(0));
    cout<<"PERULANGAN WHILE"<<endl;
    x = 1 + rand()%10;
    while(x<=5){
        cout<<"Bilangan acak = "<<x <<x <<endl;
        x = rand()%10;
    }

    cout<<"Bilangan acak while yang terakhir ="<<x <<endl;
    cout<<endl;

    cout<<"PERULANGAN DO....WHILE"<<endl;
    x = 1 + rand()%10;
    do{
        cout<<"Bilangan acak = "<<x <<endl;
        x = rand()%10;
    }while(x<=5);
    cout<<"Bilangan acak do-while yang terakhir ="<<x <<endl;
    cout<<endl;

}

#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if (!(rerata < 60) )
        status = "Lulus";
    else
        status = "Tidak lulus";
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;   

}
#include <iostrem>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    srting status;
    
    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;
}