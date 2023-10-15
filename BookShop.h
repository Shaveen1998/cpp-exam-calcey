#ifndef BOOKSHOP_H
#define BOOKSHOP_H



class BookShop{
   
    public:
    int noOfBooksAdded;
    string booksCollection[];

    BookShop();
   
    ~BookShop();

    void addBook(string book);
    void addBook(string audioBook);
};

#endif