#include "libraries.h"
#include "Book.h"
#include "AudioBook.h"
#include "BookShop.h"

int main(){

    string _title, _authorName, _voiceActor;
    char isAudioBook;

    cout<<"Is it an audiobook"<<endl;
    cin>> isAudioBook;

    if(isAudioBook=='y'){
        AudioBook audiobook;
        cout<<"Enter the title: ";
        cin>>_title;
        cout<<"Enter the author name: ";
        cin>>_authorName;
        cout<<"Enter the voiceActor: ";
        cin>>_voiceActor;

        audiobook.setTitle(_title);
        audiobook.setAuthorName(_authorName);
        audiobook.setVoiceActor(_voiceActor);

       

    }else if(isAudioBook='n'){
        Book book;
        cout<<"Enter the title: ";
        cin>>_title;
        cout<<"Enter the author name: ";
        cin>>_authorName;

        book.setTitle(_title);
        book.setAuthorName(_authorName);

        

    }else{
        cout<<"Invalid input"<<endl;
    }

    

    return 0;
}