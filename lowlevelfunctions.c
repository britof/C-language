//Chess Engine
/*
@ REGRAS DO XADREZ PARA IMPLEMENTAR:
--> Peças e Posições
--> Movimento padrão das peças
--> Peça tomada
--> Xeque
--> Cravada
--> En Passant
--> Roque
--> Xeque-mate
--> Promoção de peão

@ ALGORITMOS DE USO GERAL
--> moving_is_possible (Determina se um movimento é válido)
--> possible_moves (Determina os movimentos válidos de uma peça numa dada posição)
-->is_in_border (Determina se uma posição pertence a uma das quatro bordas do tabuleiro)

*/

#include <stdio.h>
#include <stdlib.h>

#DEFINE LEFT_TOWER   1
#DEFINE LEFT_KNIGHT  2
#DEFINE LEFT_BISHOP  3
#DEFINE QUEEN        4
#DEFINE KING         5
#DEFINE RIGHT_BISHOP 6
#DEFINE RIGHT_KNIGHT 7
#DEFINE RIGHT_TOWER  8

#DEFINE EMPTY 0
#DEFINE BLACK 1
#DEFINE WHITE 2


//moving constants
#DEFINE 1LEFT -1
#DEFINE 2LEFT -2
#DEFINE 3LEFT -3
#DEFINE 4LEFT -4
#DEFINE 5LEFT -5
#DEFINE 6LEFT -6
#DEFINE 7LEFT -7

#DEFINE 1RIGHT 1
#DEFINE 2RIGHT 2
#DEFINE 3RIGHT 3
#DEFINE 4RIGHT 4
#DEFINE 5RIGHT 5
#DEFINE 6RIGHT 6
#DEFINE 7RIGHT 7

#DEFINE 1UP 8
#DEFINE 2UP 16
#DEFINE 3UP 24
#DEFINE 4UP 32
#DEFINE 5UP 40
#DEFINE 6UP 48
#DEFINE 7UP 56

#DEFINE 1DOWN -8
#DEFINE 2DOWN -16
#DEFINE 3DOWN -24
#DEFINE 4DOWN -32
#DEFINE 5DOWN -40
#DEFINE 6DOWN -48
#DEFINE 7DOWN -56

#DEFINE 1NORTHEAST 9
#DEFINE 2NORTHEAST 18
#DEFINE 3NORTHEAST 27
#DEFINE 4NORTHEAST 36
#DEFINE 5NORTHEAST 45
#DEFINE 6NORTHEAST 54
#DEFINE 7NORTHEAST 63

#DEFINE 1NORTHWEAST 7
#DEFINE 2NORTHWEAST 14
#DEFINE 3NORTHWEAST 21
#DEFINE 4NORTHWEAST 28
#DEFINE 5NORTHWEAST 35
#DEFINE 6NORTHWEAST 42
#DEFINE 7NORTHWEAST 49

#DEFINE 1SOUTHEAST -7
#DEFINE 2SOUTHEAST -14
#DEFINE 3SOUTHEAST -21
#DEFINE 4SOUTHEAST -28
#DEFINE 5SOUTHEAST -35
#DEFINE 6SOUTHEAST -42
#DEFINE 7SOUTHEAST -49

#DEFINE 1SOUTHWEAST -9
#DEFINE 2SOUTHWEAST -18
#DEFINE 3SOUTHWEAST -27
#DEFINE 4SOUTHWEAST -36
#DEFINE 5SOUTHWEAST -45
#DEFINE 6SOUTHWEAST -54
#DEFINE 7SOUTHWEAST -63

#DEFINE 1L 17
#DEFINE 2L 10
#DEFINE 3L -6
#DEFINE 4L -15
#DEFINE 5L -17
#DEFINE 6L -10
#DEFINE 7L 15
//


/*

BOARD POSITIONS = {{color, pieceCode}, ...}

56 57 58 59 60 61 62 63
48 49 50 51 52 53 54 55
40 41 42 43 44 45 46 47
32 33 34 35 36 37 38 39
24 25 26 27 28 29 30 31
16 17 18 19 20 21 22 23
08 09 10 11 12 13 14 15
00 01 02 03 04 05 06 07

*/

int is_in_border(int position)
{
    int i = 0, j = 0,
        intervals[4][3] = {{0,  8,  1}, //{start, end, pace}
                           {0,  57, 8},
                           {56, 64, 1},
                           {7,  64, 8}};

    for(i=0;i<4;i++)
    {
        for(j=intervals[i][0] ; j<intervals[i][1] ; j+intervals[i][2])
        {
            if(position == j)
            {
                return i;//first border: 0-7, second border: 0-57, third border: 56-64, fourth border: 7, 64
            }
        }
    }
    return 0;//not in border
}

int* possible_moves(int BOARD[64][2], int position)//returns an array which contains all the possible moves of a piece in such position
{
    int i = 0, n_moves = 0;

    //PAWN
    if(BOARD[position][1] > 8)
    {
        if(BOARD[position][0] = 1)//white pawn
        {
            int MOVES[4][2] = {{1NORTHWEAST, BLACK}, //(move = position + MOVES[PAWN_MOVES][0], expectated case)
                               {1UP, EMPTY},
                               {2UP, EMPTY},
                               {1NORTHEAST, BLACK}};

            if(is_in_border(BOARD[position])==0)//if it is not in border
            {
                if(BOARD[position + 1NORTHWEAST][1] != )


                    if(BOARD[position + MOVES[i][0]] == MOVES[i][1])
                    {
                        if((MOVES[i][0] == 1NORTHWEAST) || (MOVES[i][0] == 1NORTHEAST))//if it is a capture move
                        {
                            if(BOARD[position + MOVES[i][1]] != 5)//if is not the king
                                n_moves = n_moves + 1;
                        }
                        if(MOVES[i][0] == 16)
                        {
                            if(position < 16)//if it is the first pawn move
                                n_moves = n_moves + 1;
                        }
                        else
                        {
                            n_moves = n_moves + 1;
                        }
                    }
            }
            for(i=0;i<4;i++)//for each move
            {


                if(is_in_border(BOARD[position])==2)
                {

                }

            }
        }

        if(BOARD[position][0] = 2)
        {

        }
    }
}

