#ifndef AUDIOBOOK_H
#define AUDIOBOOK_H

#include "Book.h"

class AudioBook:public Book{
    protected:
    string voiceActor;

    public:
    AudioBook();
    AudioBook(string voiceActor);

    string getVoiceActor();
    void setVoiceActor(string voiceActor);

    void printDescription();
};


#endif
