#include<bits/stdc++.h>

using namespace std;
void multiply(int a[], int &n, int no){
    int carry = 0;
    for(int i=0;i<n;i++){
        int product = a[i]*no + carry;
        a[i] = product%10;
        carry = product/10;
    }

    while(carry){
        a[n] = carry%10;
        carry = carry/10;
        n++;
    }
}
void big_factorial(int n){
    int *a = new int [1000]; 
    for(int i=0;i<1000;i++)a[i]=0;
    a[0]=1;
    int n1=1;
    for(int i=2;i<=n;i++){
        multiply(a,n1,i);
    }

    for(int i=n1-1;i>=0;i--){
        cout<<a[i];
    }

    delete []a;
    return;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n;
    cin>>n; //no of elements in array
    big_factorial(n);
    return 0;
}
