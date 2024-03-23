
#include <iostream>
#include <string>
using namespace std;

enum EnGameChoice
{
    stone = 1, paper = 2, scissor = 3
};
enum EnGameWinner {
    player1  = 1 , computer = 2 , Draw = 3
};

struct stRoundInfo {
    short roundNumber = 0;
    EnGameChoice player1Choice;
    EnGameChoice ComputerChoice;
    EnGameWinner Winner;
    string winnerName;
};
struct stGameResult {
    short roundGame = 0;
    short Player1WinTimes = 0;
    short Computer2WinTimse = 0;
    short DrawTimes = 0;
    EnGameWinner GameWinner;
    string WinnerName = "";
};
int random(int from , int to) {
    int random = rand() % (to - from + 1) + from;
    return random;
}

string winnerName(EnGameWinner winner) {
    string arrWinnerName[3] = { "player1","computer","No winner"};
    return arrWinnerName[winner - 1];
}

EnGameWinner whoWonTheRound(stRoundInfo RoundInfo  ) {

    if (RoundInfo.player1Choice == RoundInfo.ComputerChoice)
    {
        return EnGameWinner::Draw;
    }
    switch (RoundInfo.player1Choice)
    {
    case EnGameChoice::stone:
        if (RoundInfo.ComputerChoice == EnGameChoice::paper)
        {
            return EnGameWinner::computer;
        }
        break; 
    case EnGameChoice::paper:
        if (RoundInfo.ComputerChoice == EnGameChoice::scissor)
        {
            return EnGameWinner::computer;
        }
        break; 
    case EnGameChoice::scissor:
        if (RoundInfo.ComputerChoice == EnGameChoice::stone)
        {
            return EnGameWinner::computer;
        }
        break;
 
    }
    return EnGameWinner::player1;
}
string ChoiceName(EnGameChoice Choice) {
    string arrChoiceName[3] = { "stone","paper","scissor" };
    return arrChoiceName[Choice - 1];
}

void setWinnerScreanColor(EnGameWinner Winner) {
    switch (Winner)
    {
    case EnGameWinner::player1:
        system("color 2F");
        break;
    case EnGameWinner::computer:
        system("color 4F");
        cout << "\a";
        break;
    default:
        system("color 6F");
        break;
    }
}

void PrintRoundResult(stRoundInfo RoundInfo) {
    cout << "________________Round[" << RoundInfo.roundNumber << "]_____________\n";
    cout << "Player1 Choice  : " << ChoiceName(RoundInfo.player1Choice) << endl;
    cout << "Computer Choice : " << ChoiceName(RoundInfo.ComputerChoice) << endl;
    cout << "Round Winner    : [" << winnerName(RoundInfo.Winner) << "]" << endl;
    cout << "_____________________________________\n" << endl;
    setWinnerScreanColor(RoundInfo.Winner);
}

EnGameWinner whowonThegame(short player1wintimes, short computerwinTimes) {
    if (player1wintimes > computerwinTimes)
        return EnGameWinner::player1;
    else if (computerwinTimes > player1wintimes)
        return EnGameWinner::computer;
    else
        return EnGameWinner::Draw;
}

stGameResult fillGameResult(short RoundGame, short player1wintimes, short computerwinTimes, short DrawTimes) {

    stGameResult GameResult;

    GameResult.roundGame = RoundGame;
    GameResult.Player1WinTimes = player1wintimes;
    GameResult.Computer2WinTimse = computerwinTimes;
    GameResult.DrawTimes = DrawTimes;
    GameResult.GameWinner = whowonThegame(player1wintimes, computerwinTimes);
    GameResult.WinnerName = winnerName(GameResult.GameWinner);

    return GameResult;
}

EnGameChoice ReadPlayer1Choice() {
    short Choice = 1;
    do
    {
        cout << "your Choice is [1]:stone [2]:paper [3]:scissor ?\n";
        cin >> Choice;
    } while (Choice < 1 || Choice > 3);
    return  (EnGameChoice)Choice;
}

EnGameChoice GetComputerChice() {
    return (EnGameChoice)random(1, 3);
}

stGameResult PlayGame(short HowManyRound) {
    stRoundInfo Roundinfo;

    short player1winTimes = 0, computerWinTimes = 0, Drawtimes = 0;

    for (short  GameRound = 1; GameRound <= HowManyRound; GameRound++)
    {
        cout << "\n[Round " << GameRound << "]begins\n";
        Roundinfo.roundNumber = GameRound;
        Roundinfo.player1Choice = ReadPlayer1Choice();
        Roundinfo.ComputerChoice = GetComputerChice();
        Roundinfo.Winner = whoWonTheRound(Roundinfo);
        Roundinfo.winnerName = winnerName(Roundinfo.Winner);


        //increase einner \ Draw counter

        if (Roundinfo.Winner == EnGameWinner::player1)
            player1winTimes++;
        else if (Roundinfo.Winner == EnGameWinner::computer)
            computerWinTimes++;
        else
            Drawtimes++;

        PrintRoundResult(Roundinfo);
    }
    return fillGameResult(HowManyRound , player1winTimes,computerWinTimes,Drawtimes);
}

string tabs(short numberOftabs) {
    string t = "";
    for (short i = 0; i < numberOftabs; i++)
    {
        t = t + "\t";
        cout << t;
    }
    return t;
}

void showGameOverScrean() {
    cout << tabs(2) << "___________________________________________\n\n";
    cout << tabs(2) << "       +++ G a m e   O v e r +++\n";
    cout << tabs(2) << "___________________________________________\n\n";
}

void showFinalGameOver(stGameResult GameResult) {

    cout << tabs(2) << "_______________[Game Results]________________\n";
    cout << tabs(2) << "number of Round      : " << GameResult.roundGame << endl;
    cout << tabs(2) << "player 1 won Time(s) : " << GameResult.Player1WinTimes << endl;
    cout << tabs(2) << "computer won time(s) : " << GameResult.Computer2WinTimse <<endl;
    cout << tabs(2) << "Draw Time            : " << GameResult.DrawTimes << endl;
    cout << tabs(2) << "Final winner         : " << GameResult.WinnerName << endl;
    cout << tabs(2) << "_____________________________________________\n";
    setWinnerScreanColor(GameResult.GameWinner);
}

int readHoeManyRound() {
    short ManyRound = 1;
    do
    {
 cout << "how many rounds 1 to 10 ? \n";
    cin >> ManyRound;
    } while (ManyRound < 1 || ManyRound > 10 );
    return ManyRound;
}

void resetScreen() {
    system("cls");
    system("color 0F");
}

void startGame() {
    char playAgain = 'Y';
    do
    {
        resetScreen();
        stGameResult GameResult = PlayGame(readHoeManyRound());
        showGameOverScrean();
        showFinalGameOver(GameResult);

        cout << "\n\n\n" << endl;
        cout <<tabs(3) << "Do you wany plat Again enter Y or N\n";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');
  }

int main()
{
    srand((unsigned)time(NULL));
    startGame();
    
    return 0;
}

