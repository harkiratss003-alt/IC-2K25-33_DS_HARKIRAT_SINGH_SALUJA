#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<vector<int>>
  v(4, vector<int>(3,5));

     for(int i=0; i<4; i++)
{
 for(int j=0; j<3; j++)
  {
    cout<< v[i][j] <<"  ";
  }
  cout<<endl;
}
  return 0;
}
