#ifndef BOOK_H
#define BOOK_H

class Book{
    protected:
    string title;
    string authorName;

    public:
    Book();

    Book(string title, string authorName);

    string getTitle();
    void setTitle(string title);

    string getAuthorName();
    void setAuthorName(string authorName);

    void printDescription();
};

#endif
