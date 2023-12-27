#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define mt              make_tuple
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define range(a,b)        substr(a,b-a+1)
#define w(x)            int x; cin>>x; while(x--)
#define trace(x)         cerr<<#x<<": "<<x<<" "<<endl;

mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
map<int,int>mpp;
void ab_d(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
#endif
}

int32_t main()
{
    mpp[1]=13;
    mpp[2]=23;
    mpp[3]=31;
    mpp[4]=41;
    mpp[5]=53;
    mpp[6]=61;
    mpp[7]=71;
    mpp[8]=83;
    mpp[9]=97;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int x =(int)(s[0]-'0');
        cout<<mpp[x]<<endl;
    }
    return 0;
}

// I am pro-efficient in use of C++ and Java languages. I have prior experience in web development using MERN(Mongo-DB,Express-JS,React,Node-JS) stack, that is well reflected through my projects. I also have good understanding of Object-Oriented-Programming concepts and Operating Systems as well. I have studied database management systems as a part of my college curriculum and I am well versed with MySQL queries and other concepts related to databases. I have solved over 500 problems on various coding platforms like LeetCode,GeeksforGeeks,CodeForces,etc. which have helped me develop my problem solving skills as well.
// Salesforce has always been on top of innovations in the cloud-computing arena. The work that Salesforce has to offer excites me a lot. The way we can collaborate with other experienced developers to add new features and contribute to the salesforce team excites me a lot. The job requires a mix of analytical, and technical skills along with curiosity which further excites me to work at Salesforce.
// I have always enjoyed solving logical problems and have been interested in knowing the technological advancements since my teenage years. The job requires a blend of technical abilities, curiosity and an analytical mind which lies directly in line with my interests and I think I have developed these skills by solving more than 500 questions on various coding platforms like Leetcode, CodeForces, etc which help in developing technical as well as analytical skills. I have also used these skills to create various projects, which can be seen on my Github profile and reflect my curiosity to try new things. The job role also allows me to get exposure to how things work at a large scale and also interact and learn from people who have prior experience in this domain. The concept of "Lunch and Learn" offered by Salesforce is an excellent way of making learning fun and conversations easier to happen. The job also involves taking part in various outside events and giving back to the community through various organised volunteer events which excites me even further and is a potential reason for me applying for this role.