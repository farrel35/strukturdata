#include<iostream>
using namespace std;
#define MAX 8

struct Antrian {
    int data[MAX];
    int head;
    int tail;
};

Antrian antre;
void menu(int);
void create();
bool isEmpty();
bool isFull();
void enqueue(int);
int dequeue();
void tampil();

int main(){
    int pilMenu;
    create();
    do {
        cout    <<  endl;
        cout    <<  "[1] Enqueue"   <<endl;
        cout    <<  "[2] Dequeue"   <<endl;
        cout    <<  "[3] Tampil"    <<endl;
        cout    <<  "Pilih Menu: ";
        cin     >>  pilMenu;
        menu(pilMenu);
    }
    while(pilMenu!=0);
    return 0;
}
void menu(int pilMenu){
    switch(pilMenu)
    {
        int data;

        case 1:
            cout << "Masukan data = ";
            cin >> data;
            enqueue(data);
            break;
        case 2: dequeue();break;
        case 3: tampil();break;
    }
}
void create(){
    antre.head = antre.tail = -1;
}

bool isEmpty(){
    if(antre.tail == -1){
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull(){
    if(antre.tail == MAX - 1){
        return true;
    }
    else
    {
        return false;
    }
}

void enqueue(int data){
    if(isEmpty()){
        antre.head = antre.tail = 0;
        antre.data[antre.tail] = data;
        cout<<data<<" dimasukkan ke antrian" << endl;
    }
    else if(isFull()){
        cout << "Data Penuh,tidak dapat menambah data" << endl;
    }
    else
    {
        antre.tail++;
        antre.data[antre.tail] = data;
        cout<<data<<" dimasukkan ke antrian" << endl;
    }

}

int dequeue(){
    int i;
    int e = antre.data[antre.head];
    if(!isEmpty()){
        for(i = antre.head;i < antre.tail - 1;i++){
            antre.data[i] = antre.data[i+1];
        }

        antre.tail--;
    }else{
        cout << "Data kosong,tidak bisa dequeue" << endl;
    }
    return e;
}

void tampil(){
    if(!isEmpty()){
        for(int i = antre.head;i <= antre.tail;i++){
            cout<<antre.data[i] << " ";
        }
        cout << endl;
    }
    else{
        cout<<"Data kosong,tidak ada yang ditampilkan" << endl;
    }
}
