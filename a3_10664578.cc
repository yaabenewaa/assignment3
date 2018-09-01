#include <iostream>
using namespace std;
int main(int argc, char**argv)
{
   cout<< "Enter the grade of the student:";
   cin>> grade;
    if(grade>=80){
    cout<< "A"<<endl;}
    else
    if(grade>=75){
    cout<<"B+"<<endl;}
    else
    if(grade>=70){
    cout<<"B"<<endl;}
    else
    if(grade>=65){
    cout<<"C+"<<endl;}
    else
    if(grade>=60){
    cout<<"C"<<endl;}
    else
    if(grade>=55){
    cout<<"D+"<<endl;}
    else
    if(grade>=50){
    cout<<"D"<<endl;}
    else
    if(grade>=45){
    cout<<"E"<<endl;}
    else{
    cout<< "F"<<endl;}
  return 0;
}


