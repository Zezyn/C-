class Org {
	protected:
		Org (*_board)[][];
		char _letter;
	public:
		Org(Org &board[][]);
		virtual void move();
		vitrual void breed(int, int);
		vitrual boolean equal(Org);
};

Org::Org(Org &board[][], char letter;) {
	_board = board;
	_letter = letter; 
}

class Ant : public Org {
	public:
		inline Ant() : Org(Org &board[][], 'A');
		void move();
		void breed(int, int);
}

void Ant::move() {
	for (int x = 0; x < _board.length; x++) {
		for (int y = 0; y < _board[x].length; y++) {
			Org org = _board[x][y];
			if (equals(org)) {
				// do what book says
				if (should_breed) {
					breed(x, y);
				}
			}
		}
	}
}

void Ant::breed(int x, int y) {
	// do what book says
}

class Board {
	private:
		Org (*board)[][];
	public:
		Board();
		void step(); // Change the board
		void print_board(); // Print the board
}

Board::Board() {
	for (int x = 0; x < _board.length; x++) {
		for (int y = 0; y < _board[x].length; y++) {
			// randomly create based on book
			Ant ant(board);
			board[x][y] = ant;
		}
	}
}

int main() {
	Board board;

	while (true) {
		board.step();
		board.print_board();
		sleep(1000);
	}

	return 0;
}