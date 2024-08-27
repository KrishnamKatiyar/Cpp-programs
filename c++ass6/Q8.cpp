#include <iostream>

using namespace std;

class File {
public:
    virtual void open() = 0;
    virtual ~File() {}
};

class TextFile : public File {
public:
    void open() {
        cout << "Opening a text file." << endl;
    }
};

class BinaryFile : public File {
public:
    void open() {
        cout << "Opening a binary file." << endl;
    }
};

int main() {
    File* files[2];

    files[0] = new TextFile();
    files[1] = new BinaryFile();

    for (int i = 0; i < 2; ++i) {
        files[i]->open();
    }

    for (int i = 0; i < 2; ++i) {
        delete files[i];
    }

    return 0;
}

