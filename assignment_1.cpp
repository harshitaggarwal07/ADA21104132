#include <iostream>
using namespace std;

//ques 1
/*
int solve(int n) {
  if (n <= 1) return 1;
  if (n == 2) return 2;
  if (n == 3) return 4;
  return solve(n - 1) + solve(n - 2) + solve(n - 3);
}
int main() {
  int n;
  cin >> n;
  cout << solve(n) << endl;
  return 0;
}
*/

//ques 2

int main()

{

int N;
cin>>N;
while(N>0)

{

    int i=1;

   N=N-i;
   if(N<=0){
    cout<<endl<<"Patlu";break;
    }
   N=N-(2*i);
   if(N<=0){
    cout<<endl<<"Motu";break;
    }
   i++;
}

return 0;
}