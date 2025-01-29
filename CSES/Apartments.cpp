#include <bits/stdc++.h>
using namespace std;
int main() {
  int count=0,n,m,k,x;
    cin>>n>>m>>k;
  vector<int>a(n);
  vector<int>b(m);

  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  sort(a.begin() ,a.end());
  for(int i=0;i<m;i++){
      cin>>b[i];
  }
  
  sort(b.begin(),b.end());
  int l=0,r=0;
  while(l<n&& r<m){
      if(abs(a[l]-b[r])<=k){
          count++;
          l++;
          r++;
      }
      else if(a[l]>b[r]) {
          r++;
      }
      else{
          l++;
      }
  }
  cout<<count;
  
    return 0;
}
