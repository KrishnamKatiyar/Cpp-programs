#include <iostream>

using namespace std;

class Media {
public:
    virtual void play() const = 0;
    virtual ~Media() {}
};

class Music : public Media {
public:
    void play() const {
        cout << "Playing music." << endl;
    }
};

class Video : public Media {
public:
    void play() const {
        cout << "Playing video." << endl;
    }
};

// Function to use dynamic_cast and call the appropriate play() function
void playMedia(Media* media) {
    Music* music = dynamic_cast<Music*>(media);
    if (music) {
        music->play();
        return;
    }
    
    Video* video = dynamic_cast<Video*>(media);
    if (video) {
        video->play();
        return;
    }
    
    cout << "Unknown media type." << endl;
}

int main() {
    Music music;
    Video video;
    
    Media* media1 = &music;
    Media* media2 = &video;

    playMedia(media1); // Should output: Playing music.
    playMedia(media2); // Should output: Playing video.

    return 0;
}

