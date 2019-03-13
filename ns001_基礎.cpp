#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> book;
  int n, m, times;
  int t = 1;
  int take = 0;
  int num[n];
  char d;

  cin >> n >> m; // n = 書的數量， m = 移動次數 

  for (int i = 0; i < m; i++){
    int c = 0;

    cin >> d >> times; // d = 動作， time = 拿的個數 

    if (d == 'a'){ // a為疊上書本
      for (int k = 0; k < times; k++){
        book.push(t);
        t += 1;
      }
    }
    else if (d == 'b'){ // b為拿起書本
      while (c < times){
        num[take] = book.top();
        book.pop();
        take++;
        c++;
      }
    }
  }

  for (int i = 0; i < n; i++){
    cout << num[i] << " ";
  }
}
