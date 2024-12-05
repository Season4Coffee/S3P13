#include<bits/stdc++.h>
using namespace std;
int main(){
  Microwave m1;
  int x;
  int y;
  int work=1, command;
  while (work==1){
    cout << "Меню\n" << "1:Мощность слабая, время 1 мин\n" << "2:Мощность слабая, время 2 мин\n" << "3:Мощность средняя, время 1 мин\n" << "4:Мощность средняя, время 2 мин\n" << "5:Мощность высокая, время 1 мин\n" << "6:Мощность высокая, время 2 мин\n" << "7:Выключена\n";
    cin >>command;
    switch(command){
      case 1:
        m1.sttime(1);
        m1.sttemp(1);
      break;
      case 2:
        m1.sttime(2);
        m1.sttemp(1);
      break;
      case 3:
        m1.sttime(1);
        m1.sttemp(2);
      break;
      case 4:
        m1.sttime(2);
        m1.sttemp(2);
      break;
      case 5:
        m1.sttime(1);
        m1.sttemp(3);
      break;
      case 6:
        m1.sttime(2);
        m1.sttemp(3);
      break;
      case 7:
        m1.sttime(0);
        m1.sttemp(0);
        work=0;
      break;
    }
  }
}
