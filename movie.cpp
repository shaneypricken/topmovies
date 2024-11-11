// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int listl;
    cout << "Welcome! You are gonig to make a list of the top 'x' movies!" << endl;
    cout << "How many movies do you want to input? " << endl;
    cin >> listl;
    string movies[listl];
    cin.ignore();
    
    
    
    for (int i = 0; i < listl; i++){
        cout << "What would you like your #" << i + 1 << " movie to be?" << endl;
        getline(cin, movies[i]);
    }
    for (int i = 0; i < listl; i++){
        cout << "Movie #" << i + 1 << " " << movies[i] << endl;
        
    }

    return 0;
}
