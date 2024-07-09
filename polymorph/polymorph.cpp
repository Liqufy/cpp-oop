#include <iostream>
using namespace std;

class AIInterface {
public:
    virtual void execute() const = 0;

};

class SpeechRecognation final : public AIInterface {
public:
    void execute() const override {
        cout << "Analyzing speech input" << endl;
    }
};

class ObjectDetection : public AIInterface {
public:
    void execute() const override {
        cout << "Detecting objects in an image" << endl;
    }
};

class LanguageProccesing : public AIInterface {
public:
    void execute() const override {
        cout << "Proccesing natural language" << endl; 
    }
};

class SentimentAnalysis : public AIInterface {
public:
    void execute() const override {
        std::cout << "Analyzing sentiment of text" << std::endl;
    }
};

int main()
{
    SpeechRecognation speechRecog;
    ObjectDetection objDetection;
    LanguageProccesing langProccesing;

    cout << "Speech Recognition Task: " << endl;
    speechRecog.execute();

    cout <<  "Object Detection Task: " << endl;
    objDetection.execute();

    cout << "Language Proccesing Task: " << endl;
    langProccesing.execute();

    return 0;
}
