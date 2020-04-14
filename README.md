# Tic-Tac-Toe

## There are two files, one coded in [C](https://github.com/Divyanshpythonist/Tic-Tac-Toe/blob/master/tic_tac_toe.c) and the other one [coded in Python](https://github.com/Divyanshpythonist/Tic-Tac-Toe/blob/master/tic_tac_toe_vs_computer.py) . C coded tic tac toe is a fully 2 player game whereas Python coded tic tac toe is a 2 player as well as a single player game where if you choose single player option, you will compete against Computer. Have Fun.

Tic Tac Toe is a `two-person game` , played on a `three-by-three cell grid`.

```
[ ][ ][ ]

[ ][ ][ ]

[ ][ ][ ]
```

Players usually draw the grid on a piece of paper (though there are plastic, cardboard, and computer versions), using a pound-sign to represent the grid:

Each player takes a turn filling in a cell of the grid, either writing an **X** or an **O** in it. One player always writes `Xes`. The other always writes `Os`. Each player tries to place **three Xes or three Os** (whichever is his symbol) in a horizontal, vertical, or diagonal row and also tries to block the other player from doing so. The player who first fills in a row, wins.

Traditionally, the winning player draws a line through the three cells that earned him the win.


Most games between competent players end in draws, with all cells filled and neither player winning.

Example game:
```
Xes turn:

[ ][ ][ ]

[ ][X][ ]

[ ][ ][ ]

Os turn:

[O][ ][ ]

[ ][X][ ]

[ ][ ][ ]

Xes turn:

[O][ ][ ]

[X][X][ ] <-- if X complete's the row, he'll win

[ ][ ][ ]

Os turn:

[O][ ][ ]

[X][X][O]

[ ][ ][ ]

Xes turn:

[O][ ][X]

[X][X][O]

[ ][ ][ ] <-- if X fills the left-most cell, he'll will

Os turn:

[O][ ][X]

[X][X][O]

[O][ ][ ]

Xes turn:

[O][ ][X] <-- if X fills in the middle cell, he'll win

[X][X][O]

[O][X][ ]

Os turn:

[O][O][X]

[X][X][O]

[O][X][ ]

The game is now over. X only has one cell to play, and it won't achieve anything. Draw:

[O][O][X]

[ X][X][O]

[O][X][X]
```

Versions of tic-tac-toe date at least back to first-century Rome.
