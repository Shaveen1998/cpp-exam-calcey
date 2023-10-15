#include "libraries.h"
#include "Book.h"

Book::Book(){
    cout<<"default constructer of Book"<<endl;
}

Book::Book(string title, string authorName){
    this->title = title;
    this->authorName=authorName;
}

string Book::getTitle(){
    return title;
}

void Book::setTitle(string title){
    this->title= title;
}

string Book::getAuthorName(){
    return authorName;
}

void Book::setAuthorName(string authorName){
    this->authorName= authorName;
}

void Book::printDescription(){
    cout<<"Book title is: "<<title<<endl;
    cout<<"Book Author name is: "<<authorName<<endl;
}