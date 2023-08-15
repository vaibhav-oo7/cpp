#include<bits/stdc++.h>

using namespace std;
int oddeve(int n){
    return (n&1);
    //for any number if lastbit is 1 that is odd number as all other bits contribute powers of 2 
}

int getBit(int n, int i){
    int mask = (1<<i);
    int ans = (n&mask)>0 ? 1 : 0;
    return ans;
    // to get a bit we first make a mask which shifts one to the index whose bit we need to find once found we take it's and with one if one then we can say that bit was 1 else it was 0 as 0 & 1 = 0 and only 1 & 1 = 0 
    // eg 5 = 101
    // we find 2nd bit of 5
    // left shift 1 by 2 --> 001 << 2 = 100 = mask
    // mask & 5 = 100 & 101 = 100 which is greater than 0 hence bit was 1
}

int setBit(int n, int i){
    int mask = 1<<i;
    int ans = n|mask;
    return ans;
    // to set a bit we first make a mask which shifts one to the index whose bit we need to set once found we take it's or with one if one then we can say that bit was already 1 else it was 0 as 0 OR 1 = 1 and  1 OR 1 = 1
    // eg 5 = 101
    // we find 2nd bit of 5
    // left shift 1 by 2 --> 001 << 2 = 100 = mask
    // mask OR 5 = 100 OR 101 = 101 hence bit was set (already set in this case)
}

int clearBit(int n, int i){
    int mask = ~(1<<i); // bit ko 0 krna hai to and lelo 0 ke saath us particular position ko but mask to 1 ko left shift kr rhe the isliye usse negate krdo taaki 0 ho jaaye aur iss mask ka nad lelo as and will clear the bit ans make it 0 irrespective of initial value
    //eg n=5 = 101
    // clear 2nd bit
    // mask = [(1<<2) = 100 --> ~100 = 011]
    // perfroming and : 101 & 011 = 001 (2nd bit cleared)
    int ans = n & mask;
    return ans;
}

int updateBit(int n,int i,int v){
    int mask = ~(1<<i);
    int cleared_n = n & mask;
    // humne yaha tak clear kr diya uss number ko ab agar 1 set krna hai to clear ke saath OR 1 ka aur agar 0 set krna hai to 0 ke saath OR lelo wo particular bit update ho jayegi isliye yaha pe OR hum v << i se kr rhe as v is the value jiise hume bit update krni hai
    //eg n=5 = 101
    // clear 2nd bit
    // mask = [(1<<2) = 100 --> ~100 = 011]
    // perfroming and : 101 & 011 = 001 (2nd bit cleared)
    // ab make 2nd bit 1 : mask2 = [(v<<i) --> 1<<2 = 100]
    // perform OR : 001 OR 100 = 101 (bit updated back)
    int ans = cleared_n | (v<<i);
    return ans;
}

int cleariBits(int n, int i){
    int mask = ((~0)<<i);
    int ans = n&mask;
    return ans;
}

int clearRange(int n, int  i, int j){
    int a = (~0)<<(i+1);
    int b = (1<<j)-1;
    int mask = a|b;
    int ans = n&mask;
    return ans;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n;
    cin>>n; 
    int i;
    cin>>i;
    int v;
    cin>>v;
    cout<<"oddornot "<<oddeve(n)<<endl;
    cout<<"getbit "<<getBit(n,i)<<endl;
    cout<<"setbit "<<setBit(n,i)<<endl;
    cout<<"clearbit "<<clearBit(n,i)<<endl;
    cout<<"updatebit "<<updateBit(n,i,v)<<endl;
    cout<<"clearRange "<<clearRange(n,v,i)<<endl;
    cout<<"clearibits "<<cleariBits(n,i)<<endl;
    return 0;
}
