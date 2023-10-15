#include "libraries.h"
#include "BookShop.h"
#include "Book.h"



BookShop::BookShop(){
  noOfBooksAdded=0;
  booksCollection[0]="";
}



BookShop::~BookShop(){}

void BookShop::addBook(string book){

    booksCollection[noOfBooksAdded]=book.getTitle();
    noOfBooksAdded++;
    cout<<"A book was added"<<endl;

}
void Bookshop::addBook(string audioBook){

    booksCollection[noOfBooksAdded]=audioBook.getTitle();
     noOfBooksAdded++;
    cout<<"An audio book was added"<<endl;
}