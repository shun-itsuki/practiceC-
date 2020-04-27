// 基本的な入出力
#include <iostream>
using namespace std;

int sub();
int input();

int main() {
 cout << "Kitty on your lap\n";
 sub();
 input();
 return 0;
}

int input(){
  char string[128];
  cout << "名前を入力してください。" << '\n';
  cin >> string;
  cout << "ようこそ" << string << "さん。" << '\n';
  return 0;
}

int sub(){
  char value = 'a';
  cout << "hello,world\n";
  cout << value << '\n';
  printf("これは出力可能かな？\n");
  return 0;
}

// 4/16　クラス
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
class human{
  char name[30];
  int age;
public:
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
void human::output(){
  cout << "名前:" << name << endl;
  cout << "年齢:" << age << endl;
}
int main() {
  human shun;
  int n;
  shun.setname("ほげ");
  shun.setage(25);
  n = shun.getage();
  shun.output();
  cout << shun.getname() << shun.getage() << n <<'\n';
  return 0;
}