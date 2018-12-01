#include <bits/stdc++.h>
using namespace std;


int main()
{

vector<int> v;
vector<int> v2;
for(int i=999;i>=100;i--){
   for(int j=999;j>=100;j--){
        v.push_back(i*j);

}
}

    for (auto x : v)                            		    //Iterates through all values Prints all values in the array
{
    string str,og;
    og=to_string(x);
    str=to_string(x);
    reverse(str.begin(), str.end());
    int tti=stoi(str);
    if(str==og){
        v2.push_back(tti);


    }




}

 std::sort (v2.begin(), v2.end());
  std::reverse(v2.begin(), v2.end()) ;


                              		    //Iterates through all values Prints all values in the array
     cout<<v2[0];



return 0;
}
