#include <iostream>
#include <cmath>

using namespace std;

// tabPrzeszkody[][]

// tabOtwarta[][]

// tabZamknieta[][]


struct Node {
    int x;
    int y;
    float f;
    Node* parent;

    Node(int x, int y)
        : x(x), y(y), f(0.0f), parent(nullptr){}
};

float calculateF(Node start, Node goal){
    return 1 + sqrt((start.x - goal.x)*(start.x - goal.x) + (start.y - goal.y)*(start.y - goal.y));
}

template <typename T, int X, int Y>
void printTab(T (&tab)[X][Y]){
    for (int i=0; i<X; i++){
        for (int j=0; j<Y; j++){
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
}

// wracajac dopoki koncowy node ma rodzica to prinotwac


// 1. 3 listy, z przeszkodami (5 to blokada, 0 mozna przejsc), otwarta i zamknieta

// 2. pozycja startowa pojawia si� na zamknietej

// 3. sprawdza kierunki gdzie mo�e wej��

// 4. przypisuje miejsca obok (gdzie nie ma blokady), liczy f dla miejsca i zapisuje rodzica tych miejsc
// (jezeli rodzic ju� jest a f jest mniejsze to zamienia rodzica

// 5. Jak nie ma ju� wolnych miejsc to wybieramy z listy otwartej t� z najmniejszym f i dodajemy na zamkni�t� (usuwamy z otwartej) , powtarzamy



int grid[6][6] = {{0,0,0,0,0,0}, {0,0,0,0,5,0}, {0,0,0,5,0,0}, {0,0,5,0,0,0}, {0,5,0,0,0,0}, {0,0,0,0,0,0}};
Node tabOpened[6][6];
Node tabClosed[6][6];
Node tabNodes[6][6];


int main()
{
    printTab(grid);
    return 0;
}
