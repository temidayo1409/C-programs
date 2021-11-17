#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include <cmath>

int main(){
  int runner1 = 0, runner2 = 0, finishline = 100, random2;
  while (runner1 < finishline && runner2 < finishline){
    runner1 += 2;
    srand(time(0));
    random2 = 1 + rand() % 12;
    if (runner2 % 2 == 0) {
      runner2 += random2;
    }
    else if (runner2 % 2 != 0) {
      runner2 -= random2;
      if (runner2 < 0){
        runner2 = 0;
      }
    }
  }

  if (runner1 >= finishline && runner2 >= finishline){
    cout << "We have a tie!" << endl;
  }
  else if (runner1 >= finishline && runner2 < finishline) {
    cout << "The winner of the race is Runner1!" << endl;
  }
  else if (runner2 >= finishline && runner1 < finishline){
    cout << "The winner of the race is Runner2!" << endl;
  }

    
  return 0;
}
