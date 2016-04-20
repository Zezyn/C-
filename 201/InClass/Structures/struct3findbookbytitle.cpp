/*
    Filename: struct.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 11/24/2015
    Description: 
*/
//Add libraries here
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//typedef BookBag;

struct Book
{

    string title;    
    string author;    
    string isbn;
    int year;
};

typedef vector<book> BookBag;

Book createBook(string title, string author, string isbn, int year);
void addBook(Book book, BookBag &bag);
void printBookBag(BookBag bag);
void printBook(Book &book);
Book findBookByTitle(BookBag bag, string title);

int main() {
    
 
    BookBag bb[5];
  

    addBook(createBook("War and Peace", "Leo Tolstoy", "23024723048", 1870), bb);
    addBook(createBook("The Hobbit", "JRR Tolkien", "23024723048","1933"),bb);
    addBook(createBook("The Lord of the Rings, Fellowship", "JRR Tolkien", "23024723048"),bb);
    addBook(createBook("The Lord of the Rings, Two Towers", "JRR Tolkein", "23024723048"),bb);
    addBook(createBook("The Lord of the Rings, Return of the King", "JRR Tolkein", "23024723048"),bb);


    //printBookBag(bb);
    printBook(findBookByTitle("War and Peace"));

    return 0;
}

void printBookBag(book *book, int size) {
    for(int b=0;b < size; b++) {
        printBook(book[b]); }
}


Book createBook(string title, string author, string isbn, int year) {

    Book book1;
    book1.title = title;
    book1.author = author;
    book1.isbn = isbn;
    book1.year = year;
    return book1;
}


void printBook(Book &book) {

    cout << "Title: " << book.title << endl; //*->* is the operator to pull data from a pointer
    cout << "Author: " << book.author << endl;
    cout << "ISBN: " << book.isbn << endl;
    cout << "Year: " << book.year << endl;

}

printBookBag(BookBag bb) {
    for(int b=0;b<bag.size();b++)
        printBook(book[i]);
}

Book findBookByTitle(Book, *bag, string title, size) {
    for(int i=0;i<bag.size();i++) {
        if(bag[i].title == title)
            return bag[i];
        }
        Book notfound;
        return notfound;
}

void addBook(Book book, BookBag &bag) {

    bag.push_back(book);

}
