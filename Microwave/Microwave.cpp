#include "Microwave.h"
using namespace std;
Microwave::Microwave(){
  time=0;
  power=0;
}
Microwave::sttime(int x){
  time=x;
  cout << "Время работы" << " " << time <<" минуты.\n";
  if(x==0){
    vk=0;
    cout << "Микроволновка выключена\n";
  }
}
Microwave::sttemp(int y){
  power=y;
  if(power==1){
    cout << "Мощность маленькая\n";
  }
  else if(power==2){
    cout << "Мощность средняя\n";
  }
  else{
    cout << "Мощность высокая\n";
  }
}

Microwave::Microwave(int x,int y){
  if(x<=3 & y<=3){
    time=x;
    power=y;
  }
}
