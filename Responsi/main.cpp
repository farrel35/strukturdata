#include <iostream>
#define MAX 24
using namespace std;

char pesan[MAX]{'H','A','*','*','*','L','*','O','A','P','*','*','*','A','*','K','A','B','*','A','*','*','*','R'};
char hasil[MAX]{};
int top = -1;
char isi;
void olahData();
void push();

int main()
{
    cout << "Pesan = ";
    for(int i=0; i<MAX; i++){
        cout << pesan[i];
    }
    cout << endl;
    cout << "Hasil = " ;
    olahData();

    return 0;
}

void olahData(){
    for(int i=0; i<MAX; i++){
        if(pesan[i] != '*'){
            isi = pesan[i];
            push();
        }
    }
    for(int i=0; i<MAX; i++){
        cout << hasil[i];
    }
}

void push(){
    top++;
    hasil[top]=isi;
}
