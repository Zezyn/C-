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

using namespace std;

struct Book
{

    string title;    
    string author;    
    string isbn;
    int year;
};

Book createBook(string title, string author, string isbn, int year);
void printBookBag(Book *bbok, int size);
void printBook(Book &book);

int main() {
    
    Book bookbag[5];
  
    bookbag[0] = createBook("War and Peace", "Leo Tolstoy", "23024723048", 1870);
    bookBag[1] = createBook("The Hobbit", "JRR Tolkien", "23024723048","1933");
    bookBag[2] = createBook("The Lord of the Rings, Fellowship", "JRR Tolkien", "23024723048");
    bookBag[3] = createBook("The Lord of the Rings, Two Towers", "JRR Tolkein", "23024723048");
    bookBag[4] = createBook("The Lord of the Rings, Return of the King", "JRR Tolkein", "23024723048");
    printBook(b1);

    printBookBag(bookBag,5);

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
