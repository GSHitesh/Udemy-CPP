// Section 20
// Challenge 2
//  Lists

#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>
using namespace std;

class Song {
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;
public:
    Song() = default;
    Song(std::string name, std::string artist, int rating)
            : name{name}, artist{artist}, rating{rating} {}
    std::string get_name() const {
        return name;
    }
    std::string get_artist() const {
        return artist;
    }
    int get_rating() const {
        return rating;
    }
    
    bool operator<(const Song &rhs) const  {
        return this->name < rhs.name;
    }
    
    bool operator==(const Song &rhs) const  {
        return this->name == rhs.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Song &s) {
    os << std::setw(20) << std::left << s.name
       << std::setw(30) << std::left << s.artist
       << std::setw(2) << std::left << s.rating;
       return os;
}

void display_menu() {
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next song" << std::endl;
    std::cout << "P - Play Previous song" << std::endl;
    std::cout << "A - Add and play a new Song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song) {
    // This function should display 
    // Playing: followed by the song that is playing
    std::cout << song << std::endl;
    
}

void display_playlist(const std::list<Song> &playlist, const Song &current_song) {
    // This function should display the current playlist 
    // and then the current song playing.
    
    for (const auto &elem: playlist) {
        std::cout << elem << " " << endl;
    }
    cout << endl;
    
    cout << "Current song:\n" << current_song << endl;
   
    //std::cout << "You implement this function"<< std::endl;
}

int main() {

    std::list<Song> playlist{
            {"God's Plan",        "Drake",                     5},
            {"Never Be The Same", "Camila Cabello",            5},
            {"Pray For Me",       "The Weekend and K. Lamar",  4},
            {"The Middle",        "Zedd, Maren Morris & Grey", 5},
            {"Wait",              "Maroone 5",                 4},
            {"Whatever It Takes", "Imagine Dragons",           3}          
    };
    
    std::list<Song>::iterator current_song = playlist.begin();
    display_playlist(playlist, *current_song);
    
    
    //std::cout << "To be implemented" << std::endl;
    // Your program logic goes here
    
    char ch;
   
    
    do{
        display_menu();
        cin>>ch;
        
        ch = toupper(ch);
        if(ch == 'F'){
            
            cout << "Playing current song:\n" << endl;
            current_song = playlist.begin();
            play_current_song(*current_song);
            
        }
        if(ch == 'N'){
            cout << "Playing next song:\n" << endl;
            current_song++;
            if(current_song == playlist.end()){
                cout<<"Playing again the playlist from the beginning" << endl;
                current_song = playlist.begin();
            }
            play_current_song(*current_song);
            
        }
        if(ch == 'P'){
            cout << "Playing the previous song:\n" << endl;
            if(current_song == playlist.begin()){
                cout<<"Playing again the playlist from the end" << endl;
                current_song = playlist.end();
                }
                current_song--;
            play_current_song(*current_song);
            
        }
        if(ch == 'A'){
            string name;
            string artist;
            int rating;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            cout << "Enter the name of the song: ";
            getline(cin,name);
            cout << "Enter the name of the artist: ";
            getline(cin,artist);
            cout << "Enter the rating of the song: ";
            cin>>rating;
            playlist.insert(current_song, Song{name, artist, rating});
            //playlist.push_back( Song{name, artist, rating});          // to add at the end
                        
        }
        
        if(ch == 'L')
            display_playlist(playlist, *current_song);
        
        
    }while(ch != 'Q');
    

    std::cout << "Thanks for listening!" << std::endl;
    return 0;
}