

#include <iostream>
using namespace std;

double scorecalc (double, double, double, double);

int main()
{
    double judge1 = 0.0, judge2 = 0, judge3 = 0.0, judge4 = 0.0, judge5 = 0.0, finalscore = 0.0, lowestscore = 0.0, highestscore = 0.0, total = 0.0;

    while (judge1 <= 0.0 || judge1 > 10.0)
    {
        cout << "enter the first judge's score" << endl;
        cin >> judge1;
    }
    lowestscore = judge1;
    highestscore = judge1;
    total = total + judge1;

    while (judge2 <= 0.0 || judge2 > 10.0)
    {
        cout << "enter the second judge's score" << endl;
        cin >> judge2;
    }
    total = total + judge2;
    if (judge2 < lowestscore)
    {
        lowestscore = judge2;
    }
    else if (judge2 > highestscore)
    {
        highestscore = judge2;

    }

    while (judge3 <= 0.0 || judge3 > 10.0)
    {
        cout << "enter the third judge's score" << endl;
        cin >> judge3;
    }
    if (judge3 < lowestscore)
    {
        lowestscore = judge3;
    }
    else if (judge3 > highestscore)
    {
        highestscore = judge3;

    }
    total = total + judge3;

    while (judge4 <= 0.0 || judge4 > 10.0)
    {
        cout << "enter the fourth judge's score" << endl;
        cin >> judge4;
    }

    if (judge4 < lowestscore)
    {
        lowestscore = judge4;
    }
    else if (judge4 > highestscore)
    {
        highestscore = judge4;

    }
    total = total + judge4;

    while (judge5 <= 0.0 || judge5 > 10.0)
    {
        cout << "enter the fifth judge's score" << endl;
        cin >> judge5;
    }
    if (judge5 < lowestscore)
    {
        lowestscore = judge5;
    }
    else if (judge5 > highestscore)
    {
        highestscore = judge5;

    }
    total = total + judge5;

   finalscore = scorecalc(total, lowestscore, highestscore, finalscore);

    cout << "the results are in, the score that this contestant shall recieve is " << finalscore << endl;
}

double scorecalc ( double total, double lowestscore, double highestscore, double finalscore)
{

    total = total - lowestscore;
    total = total - highestscore;
    return finalscore = total / 3;
    
}

