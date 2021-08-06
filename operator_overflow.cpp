#include<iostream>

using namespace std;
struct USCurrency{
  int dollars;
  int cents;
  USCurrency operator+ (const USCurrency m,const USCurrency p) {
    USCurrency tmp = {0, 0};
    tmp.cents = m.cents + p.cents;
    tmp.dollars = m.dollars + p.dollars;
    if(tmp.cents >= 100) {
      tmp.dollars += 1;
      tmp.cents -= 100;
    }
    return tmp; 
  }
};


/*ostream& operator<<(ostream &output, const USCurrency &p) {
      output << "$" << p.dollars << "." << p.cents;
      return output;
      }*/

int main(){
  USCurrency a=(2,50);
  USCurrency b=(1,75);
  USCurrency c=a+b;
  cout<<c<<endl;
  return 0;
}
