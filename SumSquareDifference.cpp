#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long sq=0;
    long long sum2=0;
    for(int i=1;i<=100;i++){

        sq=sq+(i*i);
        sum2=sum2+i;
    }

cout<<(sum2*sum2)-sq;

return 0;
}
/*
Krishna Rathod
Vidyalankar Institue of Technology,Mumbai,India
krishna.rathod@hotmaill.com
*/
