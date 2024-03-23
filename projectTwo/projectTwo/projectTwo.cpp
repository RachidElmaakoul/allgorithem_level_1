
#include <iostream>
using namespace std;

enum enlevelOfOperation
{
    EasyLevel = 1, MedLevel = 2 , HardLevel = 3 , Mix = 4
};
enum enTypeOfOperation
{
    Addition = 1 , Subtraction = 2 , Multiplication = 3 , Division = 4 , MiX = 5
};

string GetOpTypeSymbol(enTypeOfOperation OpType) {

    switch (OpType)
    {
    case enTypeOfOperation::Addition:
        return "+";
        break;
    case enTypeOfOperation::Subtraction:
        return "-";
        break;
    case enTypeOfOperation::Multiplication:
        return "*";
        break;
    case enTypeOfOperation::Division:
        return "/";
        break;
    default:
        return "Mix";
        break;
    }

}

string GetQeustionsLevelText(enlevelOfOperation QeustionLevel ) {
    string ArrQeustionLevel[4] = { "Easy","Medium","Hard","Mix" };
    return ArrQeustionLevel[QeustionLevel - 1];
}
int randomOfNumbers(int from, int to) {
    int random = rand() % (to - from + 1) + from;
    return random ;
}

void SetScreenColor(bool Right) {
    if (Right)
    {
        system("color 2F");
    }
    else {
        system("color 4F");
        cout << "\a";
    }
}

short ReadHowManyQeustions() {
    short HowManyQeustions;
    do
    {
        cout << "Please enter Hoew Many Qeustions do you want Answer ? : ";
        cin >> HowManyQeustions;
    } while (HowManyQeustions < 1 || HowManyQeustions > 10);
    return HowManyQeustions;
}
enlevelOfOperation ReadQeustionsLevel() {
    short QeustionsLevel = 0;
    do
    {
        cout << "Enter Level : [1] Easy [2]Med [3]Hard [4]Mix ? : ";
        cin >> QeustionsLevel;
    } while (QeustionsLevel < 1 || QeustionsLevel > 4);
    return (enlevelOfOperation) QeustionsLevel;
}
enTypeOfOperation ReadQeustionsOpType() {
    short OpType = 0;
    do
    {
        cout << "Enter Type : [1]Add [2]Sub [3]Multi [4]Divide [5]Mix ? : ";
        cin >> OpType;
    } while (OpType < 1 || OpType > 5);
    return (enTypeOfOperation) OpType;
}

struct stQeustion {
    int numberOne = 0;
    int numberTwo = 0;
    enlevelOfOperation QeustionLevel;
    enTypeOfOperation OperationType;
    int correctAnswer = 0;
    int PlayerAnswer = 0;
    bool ResultAnswer = false;
};

struct stQuizz {
    stQeustion QeustionList[100];
    short numberOfQeustion = 0;
    enlevelOfOperation QeustionLevel;
    enTypeOfOperation OpType;
    short numberOfrightAnswer = 0;
    short numberOfWrongAnswer = 0;
    bool IsPass = false;
};

int simpleCalcolitor(int numberOne, int numberTwo, enTypeOfOperation OpType) {
    switch (OpType)
    {
    case enTypeOfOperation::Addition:
        return numberOne + numberTwo;
    case enTypeOfOperation::Subtraction:
        return numberOne - numberTwo;
    case enTypeOfOperation::Multiplication:
       return  numberOne * numberTwo;
    case enTypeOfOperation::Division:
        return numberOne / numberTwo;
    default:
        return numberOne + numberTwo;
    }
}

enTypeOfOperation GetRandomOperation() {
    short Op = randomOfNumbers(1, 4);
    return (enTypeOfOperation)Op;
}

stQeustion GeneratQeustion(enlevelOfOperation QeustionLevel, enTypeOfOperation OpType) {

    stQeustion Qeustion;
    if (QeustionLevel == enlevelOfOperation::Mix)
    {
        QeustionLevel = (enlevelOfOperation)randomOfNumbers(1, 3);
    }
     if (OpType == enTypeOfOperation::MiX)
    {
        OpType = GetRandomOperation();
    }

     Qeustion.OperationType = OpType;
     switch (QeustionLevel)
     {
     case enlevelOfOperation::EasyLevel:
         Qeustion.numberOne = randomOfNumbers(1, 10);
         Qeustion.numberTwo = randomOfNumbers(1, 10);
         Qeustion.correctAnswer = simpleCalcolitor(Qeustion.numberOne, Qeustion.numberTwo, Qeustion.OperationType);
         Qeustion.QeustionLevel = QeustionLevel;
         return Qeustion;

     case enlevelOfOperation::MedLevel:
         Qeustion.numberOne = randomOfNumbers(10, 50);
         Qeustion.numberTwo = randomOfNumbers(10, 50);
         Qeustion.correctAnswer = simpleCalcolitor(Qeustion.numberOne, Qeustion.numberTwo, Qeustion.OperationType);
         Qeustion.QeustionLevel = QeustionLevel;

         return Qeustion;
     case enlevelOfOperation::HardLevel:
         Qeustion.numberOne = randomOfNumbers(50, 100);
         Qeustion.numberTwo = randomOfNumbers(50, 100);
         Qeustion.correctAnswer = simpleCalcolitor(Qeustion.numberOne, Qeustion.numberTwo, Qeustion.OperationType);
         Qeustion.QeustionLevel = QeustionLevel;
         return Qeustion;
   
     }
     return Qeustion;
}

void generatQuizzQeustion(stQuizz& Quizze) {
    for (short Qeustion = 0; Qeustion < Quizze.numberOfQeustion ; Qeustion++)
    {
        Quizze.QeustionList[Qeustion] = GeneratQeustion(Quizze.QeustionLevel, Quizze.OpType);
    }
}

int ReadAnswerOfQeustion() {
    int Answer = 0;
    cin >> Answer;
    return Answer;
}


void PrintTheQeustion(stQuizz &Quizz , short QeustionNumber) {

    cout << "\n";
    cout << "Qeustion [" << QeustionNumber + 1 << "/" << Quizz.numberOfQeustion << "] \n\n";
    cout << Quizz.QeustionList[QeustionNumber].numberOne << endl;
    cout << Quizz.QeustionList[QeustionNumber].numberTwo << " ";
    cout << GetOpTypeSymbol(Quizz.QeustionList[QeustionNumber].OperationType);
    cout << "\n___________" << endl;
}

void correctTheQeustionAnswer(stQuizz &Quizz , short QeustionNumber){
    if (Quizz.QeustionList[QeustionNumber].PlayerAnswer != Quizz.QeustionList[QeustionNumber].correctAnswer)
    {
        Quizz.QeustionList[QeustionNumber].ResultAnswer = false;
        Quizz.numberOfWrongAnswer++;
        cout << "Wrong QAnswer :-(\n";
        cout << "The Right Answer is : ";
        cout << Quizz.QeustionList[QeustionNumber].correctAnswer;
        cout << "\n";
    }
    else
    {
        Quizz.QeustionList[QeustionNumber].ResultAnswer = true;
        Quizz.numberOfrightAnswer++;

        cout << "Right answer :-) \n";
    }
    cout << endl;
    SetScreenColor(Quizz.QeustionList[QeustionNumber].ResultAnswer);
}
void AskAndCorrectQeustionAnswer(stQuizz &Quizz) {
    for (short  QeustionNumber = 0; QeustionNumber < Quizz.numberOfQeustion; QeustionNumber++)
    {
        PrintTheQeustion(Quizz, QeustionNumber);
        Quizz.QeustionList[QeustionNumber].PlayerAnswer = ReadAnswerOfQeustion();
        correctTheQeustionAnswer(Quizz, QeustionNumber);
    }
    Quizz.IsPass = (Quizz.numberOfrightAnswer >= Quizz.numberOfWrongAnswer);
}

string GetFinalResultText(bool pass) {
    if (pass)
        return "Pass :-)";
    else
        return "Fail :-(";
}
void PrintQuizzResult(stQuizz Quizz) {
    cout << "\n";
    cout << "___________________________________\n\n";

    cout << " Final result is " << GetFinalResultText(Quizz.IsPass) << endl;
    cout << "___________________________________\n\n";


    cout << "Number Of Qeustion     : " << Quizz.numberOfQeustion << endl;
    cout << "Qeustion Level         : " << GetQeustionsLevelText(Quizz.QeustionLevel) << endl;
    cout << "OpType                 : " << GetOpTypeSymbol(Quizz.OpType) << endl;
    cout << "Number Of Right answer : " << Quizz.numberOfrightAnswer << endl;
    cout << "Number Of Wrong answer : " << Quizz.numberOfWrongAnswer << endl;
    cout << "___________________________________\n\n";
}

void PlayMathGame() {
    stQuizz Quizz;
    Quizz.numberOfQeustion = ReadHowManyQeustions();
    Quizz.QeustionLevel = ReadQeustionsLevel();
    Quizz.OpType = ReadQeustionsOpType();

    generatQuizzQeustion(Quizz);
    AskAndCorrectQeustionAnswer(Quizz);
    PrintQuizzResult(Quizz);
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
        PlayMathGame();

        cout << "\n\n\n" << endl;
        cout  << "Do you wany plat Again enter Y or N\n";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');
}
int main()
{
    srand((unsigned)time(NULL));
    
    startGame();



}
