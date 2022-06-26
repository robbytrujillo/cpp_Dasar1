#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

 int main(){
   char nama[30];
 char nim[15];
 char umur[5];
   char domisili[20];
  float ip;

  system("cls");
  cout<<"  ================================="<<endl;
  cout<<"  === PROGRAM BIODATA MAHASISWA ==="<<endl;
  cout<<"  ================================="<<endl;

  cout<<"  Input Nama : ";
   gets(nama);
  cout<<"  Input Nim : ";
  cin>>nim;
  cout<<"  Input umur : ";
   cin>>umur;
   cout<<"  Input domisili : ";
   cin>>domisili;
  cout<<"  Input Jumlah IP: ";
  cin>>ip;

  cout<<endl<<endl;
  cout<<"  =========================================="<<endl;
  cout<<"  ============  BIODATA MAHASISWA =========="<<endl;
  cout<<"  =========================================="<<endl;
 cout<<"  =========================================="<<endl;
  cout<<"  | Nama   : "<<nama<<endl;
  cout<<"  | Nim    : "<<nim<<endl;
  cout<<"  | Umur   : "<<umur<<endl;
   cout<<"  | Domisili : "<<domisili<<endl;
  cout<<"  | IP     : "<<ip<<endl;
  cout<<"  =========================================="<<endl;
  getch();
 } 

