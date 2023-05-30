// test 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "sum.h"
#include "printr.h"
#include "score.h"
using namespace std;

//user massage inner function
string hi(string username)
{
    return "hi  " + username ;
}
//print student name and family in inner function
string wellcome(string stuname,string stufamily)
{
    return  "  Welcome to the score calculation program for  :"+ stuname +" " + stufamily;
}



int main()
{
    //get username for start programing
    string username;
    cout << "enter your name:" << endl;
    cin >> username;
    string sayhi;
    sayhi = hi(username);
    cout << sayhi << endl;

    //get the students name for strat calculator
    string stuname;
    cout << "please enter the student name:"<<endl;
    cin >> stuname;
    string stufamily;
    cout << "please enter the student family:" << endl;
    cin >> stufamily;
    string welmassage;
    welmassage = wellcome(stuname,stufamily);
    cout << welmassage << endl;


    int total = 0; /*total score in start is 0*/
    for (int i = 0; i <= 5; i++)
    {
        int score1;
        
        //print the name of score
        score* scorename = new score(i);
        scorename->print();


            cin >> score1;
            //using sum class for calculator the total score
            sum* sum1 = new sum(score1, total);
            total = sum1->tot();
  
     }

    //print result
    printr* result = new printr(total);
    result->print();
    return 0;
}

