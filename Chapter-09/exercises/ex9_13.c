/*
Write the following function, which evaluates a chess position:

    int evaluate_position (char board[8][8]);

board represents a configuration of pieces on a chessboard, where the letters K,
Q, R, B, N, P represent White pieces, and the letters k, q, r, b, n, and p 
represent Black pieces.
evaluate_position should sum the values of the White pieces (Q = 9, R = 5, B = 3,
N = 3, P = 1). It should also sum the values of the Black pieces (done in a similar
way). The function will return the difference between the two numbers. This value
will be positive if White has an advantage in material and negative if Black has an
advantage
*/

int evaluate_position(char board[8][8])
{
    int whitePieces = 0; int blackPieces = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            switch(board[i][j])
            {
                case 'Q': whitePieces += 9;     break;
                case 'R': whitePieces += 5;     break;
                case 'B': whitePieces += 3;     break;
                case 'N': whitePieces += 3;     break;
                case 'P': whitePieces += 1;     break;
                case 'q': blackPieces += 9;     break;
                case 'r': blackPieces += 5;     break;
                case 'b': blackPieces += 3;     break;
                case 'n': blackPieces += 3;     break;
                case 'p': blackPieces += 1;     break;
            }
        }
    }

    return (whitePieces - blackPieces);
}