#include <iostream>
#include <conio.h>
using namespace std;

struct STACK
{
    int data [5];
    int top;
};

STACK tumpukan;

void inisialisasi()
{
    tumpukan.top=-1;
}

int IsEmpty()
{
    if(tumpukan.top==-1)
    {
        return 1;

    }else{
        return 0;
    }
}

int IsFull()
{
    if (tumpukan.top==5-1)
    {
        return 1;
    }else{
        return 0;
    }

}

void push(int data)
{
    tumpukan.top++;
    tumpukan.data[tumpukan.top]=data;
}

void pop()
{
    tumpukan.top=tumpukan.top-1;
    if(tumpukan.top<0)
    {
        tumpukan.top=-1;
    }
}

int main ()
{
    int pilih, input, i;
    inisialisasi();
    do{
    	system("cls");
        cout<<"1. Push data"<<endl;
        cout<<"2. Pop Data"<<endl;
        cout<<"3. Print Data"<<endl;
        cout<<"4. Clear Data"<<endl;
        cout<<endl;
        cout<<"Pilih : ";cin>>pilih;
        switch(pilih)
        {
            case 1:
            {
                if(IsFull()==1)
                {
                    cout<<"Stack penuh";
                }
                else
                {
                    cout<<"Masukkan data : ";cin>>input;
                    push(input);
                }
                cout<<endl;
                getch();
                break;
            }
            case 2:
            {
                if(IsEmpty()==1)
                {
                    cout<<"Stack kosong";
                }
                else
                {
                    cout<<"mengambil data :  "<<tumpukan.data[tumpukan.top]<<endl;
                    pop();
                }
                cout<<endl;
                getch();
                break;
            }
            case 3:
            {
                if(IsEmpty()==1)
                {
                    cout<<"Stack kosong"<<endl;
                }
                else
                {
                    cout<<"Data : "<<endl;
                    for(i=0; i<=tumpukan.top; i++)
                    {
                        cout<<tumpukan.data[i]<<" ";
                    }
                }
                cout<<endl;
                getch();
                break;
            }
            case 4:
            {
                inisialisasi();
                cout<<"Stack kosong"<<endl;
                cout<<endl;
                getch();
                break;
            }
            default:
            {
                cout<<"Tidak ada dalam pilihan"<<endl;
            }
        }
    } while (pilih>=1 && pilih <=4);
    getch();
}
