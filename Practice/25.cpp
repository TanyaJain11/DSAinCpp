#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

template <typename T> class Oper {
public:
  void mult() {
    T a;
    T b;
    cin >> a >> b;
    T res = a * b;
    cout << setiosflags(ios::fixed) << setprecision(3) << res << endl;
  }
};

int main() {
  string tp;
  cin >> tp;

  if (tp == "int") {
    Oper<int> obj;
    obj.mult();
  } else if (tp == "double") {
    Oper<double> obj;
    obj.mult();
  } else {
    Oper<float> obj;
    obj.mult();
  }
  return 0;