#include <iostream>
#include <conio.h>
#define MAX 5

using namespace std;

int nomer[MAX];
int head=-1;
int tail=-1;

bool IsEmpty(){ 
   if(tail == -1){
       return true;
   }else{
       return false;
   }
}

bool IsFull(){ 
   if(tail == MAX-1){
       return true;
   }else{
       return false;
   }
}

void Enqueue(int in){
    if (IsEmpty()){
        head=tail=0;
    }else {
        tail++;
    }
    nomer[tail]=in;
}

void Dequeue(){
    if(IsEmpty()){
        cout<<"Antrian kosong ";
        getch();
    }else {
        for(int a=head;a<tail;a++){
            nomer[a]=nomer[a+1];
        }
        tail--;
        if(tail == -1){
            head = -1;
        }
    }
}

void Clear(){
    head=tail=-1;
}

void View(){
     if(IsEmpty()){
         cout<<"Antrian kosong ";

     }else {
         system("cls");
         for(int a=head;a<=tail;a++){
              cout     << "\n >> Nomor Antrian : [" << nomer[a] << "]";
         }
     }
}

int main(){
    int Pilih, p=1, urut;
    do{
        system("cls");
        cout << "1. Tambah Antrian "<<endl;
        cout << "2. Kurangi Antrian "<<endl;
        cout << "3. Kosongkan Antrian "<<endl;
        cout << "4. Lihat antrian"<<endl;
        cout << "\nPilih : "; 
		cin	 >> Pilih;
        cout << "\n\n";
        if(Pilih == 1){
            if(IsFull()) {
                cout<<"Antrian penuh ";
            }
            else{
                urut=p;
                Enqueue(urut);
                cout << "Nomor antrian ["<< p <<"]"<< endl;
                cout << "Menunggu " << tail << " Antrian" << endl;
                p++;
            }
        }
        else if(Pilih == 2){
        	if(IsEmpty()){
        	cout<<"Antrian kosong";
        	}
        	else{
            cout << "Nomor antrian : [" << nomer[head] << "] dipanggil"<<endl;
            Dequeue();
        }
        }
        else if(Pilih == 3){
            Clear();
            cout<<"Antrian dikosongkan ! ";
        }
        else if(Pilih == 4){
            View();
        }
        else{
            cout << "Masukan anda salah ! \n"<< endl;
        }
        getch();
    }while(Pilih!=4);
}
