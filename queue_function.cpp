#include "header.h"

void add(Queue &Q, address p){
/*{I.S.Qmungkinkosong.Padalahelemenyangakanditambahkan,next(P)=nil
F.S.PmenjadielementerakhirdariQ}*/
    if(Q.head == NULL){
        Q.head = p;
        Q.tail = p;
    } else {
        Q.tail->next = p;
        Q.tail = p;
    }

}

Queue buatDaftarMK(){
    /*I.S.Qkosong
    F.S.Qberisidaftarmatakuliahyangtersedia sebanyak N}
    */
    Queue newQ;

    int n;
    address p;
    cout<<"Masukan nilai N :";
    cin>>n;

    for(int i=0; i<n;i++){
        p = new elmQ;

        cout<<"Nama MK :";
        cin>>p->namaMK;
        cout<<"Kode MK :";
        cin>>p->kodeMK;
        p->next = NULL;
        add(newQ, p);
    }
    return newQ;
}

void print_Queue(Queue Q){
    //mengoutputkan isi queue ke layar
    address p = Q.head;
    cout<<"Memulai Output"<<endl;
    while(p!= NULL){
        cout<<p->namaMK<<", "<<p->kodeMK<<endl;
        p = p->next;
    }
}
