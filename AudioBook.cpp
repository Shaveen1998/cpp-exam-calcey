#include "libraries.h"
#include "AudioBook.h"

AudioBook::AudioBook(){
    cout<<"Default constructer of audiobook"<<endl;
}

AudioBook::AudioBook(string voiceActor){
    this->voiceActor = voiceActor;
}

string AudioBook::getVoiceActor(){
    return voiceActor;
}

void AudioBook::setVoiceActor(string voiceActor){
    this->voiceActor= voiceActor;
}



void AudioBook::printDescription(){
    cout<<"Book title is: "<<Book::title<<endl;
    cout<<"Book Author name is: "<<Book::authorName<<endl;
    cout<<"Book voice actor name is: "<<voiceActor<<endl;
}