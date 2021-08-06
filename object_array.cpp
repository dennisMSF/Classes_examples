#include <iostream>
using namespace std;
class point{
  int x;
  public:
  point (){
    for(int i=0;i<5;i++){
      x=i;
    }
  }
  point(const int myx)
  :x(myx){};
  const int getx(){
    return x;
  }
};
int main(){
  point array[6];
  point arrg[2]={point(2),point(7)};
  
  cout<<arrg[0].getx();
  cout<<array[5].getx();
}
