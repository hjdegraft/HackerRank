#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

class MyBook : public Book {
        public: // since do not have some methods that access this var, only a disply() that prints
            int priceOfBook; 
    
            MyBook(string title, string author, int price):
            Book(title, author) 
            {
                title = title;
                author = author;
            
                priceOfBook = price;
            }
    
            void display() {
                cout << "Title: " << title << endl;
                cout << "Author: " << author << endl;
                cout << "Price: " << priceOfBook << endl;
            }
}; 

int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
