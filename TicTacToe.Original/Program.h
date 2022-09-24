#pragma once
#include <iostream>
#include <sstream>


class program
{
public:
	char Box1;
	char Box2;
	char Box3;
	char Box4;
	char Box5;
	char Box6;
	char Box7;
	char Box8;
	char Box9;
	bool Error;
	bool IsWin;
	bool IsY;
	char WinPerson;

	program()
	{
		Error = false;
		Box1 = ' ';
		Box2 = ' ';
		Box3 = ' ';
		Box4 = ' ';
		Box5 = ' ';
		Box6 = ' ';
		Box7 = ' ';
		Box8 = ' ';
		Box9 = ' ';
		IsY = true;
		IsWin = false;
	}

	void CheckWin()
	{
		// 123, 456, 789, 147, 258, 369, 159, 357
		if (Box1 == 'X' && Box2 == 'X' && Box3 == 'X')
		{
			IsWin = true;
			WinPerson = 'X';
			return;
		}

		if (Box4 == 'X' && Box5 == 'X' && Box6 == 'X')
		{
			IsWin = true;
			WinPerson = 'X';
			return;
		}

		if (Box7 == 'X' && Box8 == 'X' && Box9 == 'X')
		{
			IsWin = true;
			WinPerson = 'X';
			return;
		}

		if (Box1 == 'X' && Box4 == 'X' && Box7 == 'X')
		{
			IsWin = true;
			WinPerson = 'X';
			return;
		}

		if (Box2 == 'X' && Box5 == 'X' && Box8 == 'X')
		{
			IsWin = true;
			WinPerson = 'X';
			return;
		}

		if (Box3 == 'X' && Box6 == 'X' && Box9 == 'X')
		{
			IsWin = true;
			WinPerson = 'X';
			return;
		} // 159, 357

		if (Box1 == 'X' && Box5 == 'X' && Box9 == 'X')
		{
			IsWin = true;
			WinPerson = 'X';
			return;
		}

		if (Box3 == 'X' && Box5 == 'X' && Box7 == 'X')
		{
			IsWin = true;
			WinPerson = 'X';
			return;
		}

		if (Box1 == 'Y' && Box2 == 'Y' && Box3 == 'Y')
		{
			IsWin = true;
			WinPerson = 'Y';
			return;
		}

		if (Box4 == 'Y' && Box5 == 'Y' && Box6 == 'Y')
		{
			IsWin = true;
			WinPerson = 'Y';
			return;
		}

		if (Box7 == 'Y' && Box8 == 'Y' && Box9 == 'Y')
		{
			IsWin = true;
			WinPerson = 'Y';
			return;
		}

		if (Box1 == 'Y' && Box4 == 'Y' && Box7 == 'Y')
		{
			IsWin = true;
			WinPerson = 'Y';
			return;
		}

		if (Box2 == 'Y' && Box5 == 'Y' && Box8 == 'Y')
		{
			IsWin = true;
			WinPerson = 'Y';
			return;
		}

		if (Box3 == 'Y' && Box6 == 'Y' && Box9 == 'Y')
		{
			IsWin = true;
			WinPerson = 'Y';
			return;
		} // 159, 357

		if (Box1 == 'Y' && Box5 == 'Y' && Box9 == 'Y')
		{
			IsWin = true;
			WinPerson = 'Y';
			return;
		}

		if (Box3 == 'Y' && Box5 == 'Y' && Box7 == 'Y')
		{
			IsWin = true;
			WinPerson = 'Y';
		}
	}

	void DisplayLoss()
	{
		std::cout << "No one won.";
		exit(1);
	}

	void NotVacantError()
	{
		Error = true;
		std::string dummy;

		std::cout << "Error: box not vacant!\n";
		std::cout << "Press any key to try again..\n";

		std::cin >> dummy;
	}

	void WriteBoard()
	{
		std::ostringstream stringStream;

		stringStream << " " << Box1 << " | " << Box2 << " | " << Box3 << "\n";
		stringStream << " --------- \n";
		stringStream << " " << Box4 << " | " << Box5 << " | " << Box6 << "\n";
		stringStream << " --------- \n";
		stringStream << " " << Box7 << " | " << Box8 << " | " << Box9 << "\n";

		std::cout << stringStream.str();
	}

	static void main()
	{
		int moveCount = 0; // check loss
		char askMove; // display X or Y in question
		int selTemp;

		program prog;

		std::cout << " -- Tic Tac Toe -- \n";

		while (!prog.IsWin)
		{
			if (moveCount == 9) prog.DisplayLoss();

			if (prog.IsY) // if is X
				askMove = 'X';
			else
				askMove = 'Y';

			prog.WriteBoard();
			std::cout << "What box do you want to place " << askMove << " in? (1-9)\n";
			std::cin >> selTemp;

			switch (selTemp)
			{
			case 1:
				if (prog.Box1 == ' ')
				{
					prog.Box1 = askMove;
					moveCount++;
				}
				else
				{
					prog.NotVacantError();
				}

				break;
			case 2:
				if (prog.Box2 == ' ')
				{
					prog.Box2 = askMove;
					moveCount++;
				}
				else
				{
					prog.NotVacantError();
				}

				break;
			case 3:
				if (prog.Box3 == ' ')
				{
					prog.Box3 = askMove;
					moveCount++;
				}
				else
				{
					prog.NotVacantError();
				}

				break;
			case 4:
				if (prog.Box4 == ' ')
				{
					prog.Box4 = askMove;
					moveCount++;
				}
				else
				{
					prog.NotVacantError();
				}

				break;
			case 5:
				if (prog.Box5 == ' ')
				{
					prog.Box5 = askMove;
					moveCount++;
				}
				else
				{
					prog.NotVacantError();
				}

				break;
			case 6:
				if (prog.Box6 == ' ')
				{
					prog.Box6 = askMove;
					moveCount++;
				}
				else
				{
					prog.NotVacantError();
				}

				break;
			case 7:
				if (prog.Box7 == ' ')
				{
					prog.Box7 = askMove;
					moveCount++;
				}
				else
				{
					prog.NotVacantError();
				}

				break;
			case 8:
				if (prog.Box8 == ' ')
				{
					prog.Box8 = askMove;
					moveCount++;
				}
				else
				{
					prog.NotVacantError();
				}

				break;
			case 9:
				if (prog.Box9 == ' ')
				{
					prog.Box9 = askMove;
					moveCount++;
				}
				else
				{
					prog.NotVacantError();
				}

				break;
			default:
				std::cout << "Wrong selection entered!\n";
				std::cout << "Press any key to try again..\n";
			//std::cin >> 
				prog.Error = true;
				break;
			}

			if (prog.Error)
			{
				prog.CheckWin(); // if error, just check win
				prog.Error = !prog.Error;
			}
			else
			{
				prog.IsY = !prog.IsY; // flip boolean
				prog.CheckWin();
			}
		}

		prog.WriteBoard();
		std::cout << "The winner is " << prog.WinPerson << " !\n";
		//Console.ReadKey();
	}
};
