#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,p =0;
    cin>> n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            p+= (a[i-1]-a[i]);
            a[i]=a[i-1];
        }
    }
    cout<< p;
    
  return 0;  
}