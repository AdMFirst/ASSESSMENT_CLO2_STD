#include "header.h"


void push(stack_array &L, char newData){
    /*memasukan newData ke dalam stack L*/
    if(L.top < MAXLIMIT){

        L.top++;
        L.info[L.top] = newData;}
}

char pop(stack_array &L){
    /*Mereturnkan char paling atas yang ada di stack L*/
    char p = L.info[L.top];
    L.top--;
    return(p);
}

void print_info(stack_array &L){
    //memprint semua char yang ada dalam stack ke layar
    cout<<"Isi stack adalah : ";
    for(int i = L.top; i>= 0; i--){
        cout<<L.info[i]<<" ";
    }
    cout<<endl;
}

void terima_input(stack_array &L){
    /* prosedur terima_inputuntuk   secara   terus-menerus
    menerima   input pengguna  dan   memasukkan   input
    karakterke   dalam   stack hingga   pengguna menginputkan
    titik '.', karakter titik tidak dimasukkan ke dalam stack.

    ubahlah prosedur terima_inputsehingga isi stack menjadi
    terurut secara ascendingsetiap kali pengguna memberikan input.
    (20 poin)Hint:  sediakan  sebuah  stack  tambahan,  setiap
    kali  pengguna  memberikan  input,  cek apakah input lebih
    besardari top stack. Jika lebih kecil, keluarkan top dan
    simpan di stack tambahan.*/

    stack_array tambahan;
    char inputanUser, charPalingAtas;

    cout<<"memulai menerima input, selesaikan dengan menginputkan '.'(titik)"<<endl;
    cin>>inputanUser;
    while( inputanUser != '.'){
        if(L.top >0){

            charPalingAtas = pop(L);

            while( int(inputanUser) < int(charPalingAtas)){
                //jika char yang baru lebih kecil nilai asciinya, maka posisinya dikiri top
                push(tambahan, charPalingAtas);
                charPalingAtas = pop(L);

            }
            push(L, charPalingAtas);
            push(L, inputanUser);
            while(tambahan.top != 0){
                //mengembalikan char yang ada di stack tambahan ke stack aslinya
                charPalingAtas = pop(tambahan);
                push(L, charPalingAtas);

            }

        } else {
            push(L,inputanUser);
        }

        cin>>inputanUser;
    }
}
