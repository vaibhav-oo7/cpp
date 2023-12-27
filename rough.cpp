#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

struct ComicBook {
    string title;
    int price;

    bool operator<(const ComicBook& other) const {
        if (price == other.price) {
            return title < other.title;
        }
        return price < other.price;
    }
};

vector<ComicBook> purchaseComicBooks(int cash, const vector<ComicBook>& comicBooks) {
    
    vector<ComicBook> sortedBooks = comicBooks;
    sort(sortedBooks.begin(), sortedBooks.end());

    
    vector<ComicBook> purchasedBooks;
    for (int i = 0; i + 1 < sortedBooks.size(); i += 2) {
        if (sortedBooks[i].price + sortedBooks[i + 1].price <= cash) {
            purchasedBooks.push_back(sortedBooks[i]);
            purchasedBooks.push_back(sortedBooks[i + 1]);
        } else {
            break;  
        }
    }

    return purchasedBooks;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
    
    int n ;
    cin>>n;
    
    int money;
    cin>>money;
    
    vector<string>book(n);
    vector<int>price(n);
     cin.ignore();
    for(int i = 0 ; i < n ; i++){
       
        string name;
        getline(cin,name);
        book[i]=name;
    }
    
    for(int i = 0 ; i < n ; i++) cin>>price[i];

    vector<ComicBook> comicBooks;
    
    for(int i = 0 ; i < n ; i++){
        comicBooks.push_back({book[i],price[i]});
    }

    vector<ComicBook> purchasedBooks = purchaseComicBooks(money, comicBooks);

    
    if (purchasedBooks.empty()) {
        cout << "NONE" << endl;
    } else {
        for (const auto& book : purchasedBooks) {
            cout << book.title << " - " << book.price << endl;
        }
    }

    return 0;
}