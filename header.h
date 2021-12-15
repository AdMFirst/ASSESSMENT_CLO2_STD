#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
using namespace std;
const int MAXLIMIT = 127;

struct stack_array{
    int top = 0;
    char info[MAXLIMIT];
};


void push(stack_array &L, char newData);
char pop(stack_array &L);
void print_info(stack_array &L);
void terima_input(stack_array &L);

//QUEUE

typedef struct elmQ *address;
struct elmQ{
    string kodeMK, namaMK;
    address next;
};
struct Queue{
    address head =NULL, tail = NULL;
};

void add(Queue &Q, address p);
Queue buatDaftarMK();
void print_Queue(Queue Q);
#endif // HEADER_H_INCLUDED
