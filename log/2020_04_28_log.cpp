
// 4/16 クラス コンストラクタ・デストラクタ会社
#include <string.h>
#include <iostream>
using namespace std;
class human{
  char name[30];
  int age;
public:
  // 下記がコンストラクタ
  human(char* string, int check);
  void setname(char* string){
    strcpy(name, string);
  }
  void setage(int check){
    if (check < 0) {
      age = 0;
    }else{
      age = check;
    }
  }
  char* getname(){
    return name;
  }
  int getage(){
    return age;
  }
  void output();
};

human::human(char* string, int check){
  strcpy(name, string);
  if (check < 0) {
    age = 0;
  }else{
    age = check;
  }
  cout << "コンストラクタ呼び出し" << '\n';
}

// human::~human(){
//   cout << "デストラクタ呼び出し" << '\n';
// }

void human::output(){
  cout << "名前:" << name << endl;
  cout << "年齢:" << age << endl;
}

void sub(){
  cout << "サブです。" << '\n';
  human tanaka("",25);
  tanaka.output();
}

int main() {
  // human shun;
  // int n;
  cout << "main" << '\n';
  //
  sub();
  // shun.setname("");
  // shun.setage(25);
  // n = shun.getage();
  // shun.output();
  // cout << shun.getname() << shun.getage() << n <<'\n';
  return 0;
}