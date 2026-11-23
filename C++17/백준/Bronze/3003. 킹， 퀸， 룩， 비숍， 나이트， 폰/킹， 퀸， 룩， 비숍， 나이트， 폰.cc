#include <iostream>
using namespace std;

int main(void) {
	int pieceArr[6] = { 1,1,2,2,2,8 };
    int ownPiece;
    
	for (int i = 0; i < 6; i++) {
		cin >> ownPiece;
		cout << pieceArr[i] - ownPiece << ' ';
	}

	return 0;
}