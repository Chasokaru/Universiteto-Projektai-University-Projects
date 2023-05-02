// Battleboats.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <fstream>
#include <stdio.h>
using namespace std;

int main()
{
   
    //String array to make the map less confusing
    string let[13][1] = {
        {"-"},
        {"1"},
        {"2"},
        {"3"},
        {"4"},
        {"5"},
        {"6"},
        {"7"},
        {"8"},
        {"9"},
        {"10"},
        {"11"},
        {"12"}
    };


    //Arrays for different maps also known as answer storage
    /* Easy levels */
    int EzALevelAns[8][7] = {
            {0, 2, 2, 0, 3, 2, 1},
            {0, 1, 2, 3, 4, 5, 6},
            {2, 1, 0, 0, 0, 1, 0},
            {1, 0, 0, 0, 0, 1, 0},
            {2, 1, 1, 0, 0, 0, 0},
            {1, 0, 0, 0, 1, 0, 0},
            {3, 0, 1, 0, 1, 0, 1},
            {1, 0, 0, 0, 1, 0, 0}
    };
    for (int i = 0; i < 8; i++) {
        if (i < 2) {
            //cout << "- - ";
        }
        else {
            //cout << EzALevelAns[i][0] << " ";
            //cout << let[i - 2][1] << " ";
        }
        for (int j = 1; j < 7; j++) {
            if (i < 2 && j < 1)
            {
                // cout << "- ";
            }
            else {
                // cout << EzALevelAns[i][j] << " ";
            }
        }
        // cout << endl;
    }
    //cout << endl;
    int  EzBLevelAns[8][7] = {
            {0, 3, 0, 2, 0, 3, 2},
            {0, 1, 2, 3, 4, 5, 6},
            {2, 0, 0, 0, 0, 1, 1},
            {2, 1, 0, 1, 0, 0, 0},
            {2, 1, 0, 0, 0, 1, 0},
            {3, 1, 0, 1, 0, 1, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 1}
    };
    for (int i = 0; i < 8; i++) {
        if (i < 2) {
            //cout << "- - ";
        }
        else {
            //cout << EzBLevelAns[i][0] << " ";
            //cout << let[i - 2][1] << " ";
        }
        for (int j = 1; j < 7; j++) {
            if (i < 2 && j < 1)
            {
                //cout << "- ";
            }
            else {
                //cout << EzBLevelAns[i][j] << " ";
            }
        }
        // cout << endl;
    }
    //  cout << endl;
    int EzCLevelAns[8][7] = {
            {0, 0, 4, 0, 2, 0, 4},
            {0, 1, 2, 3, 4, 5, 6},
            {2, 0, 1, 0, 0, 0, 1},
            {2, 0, 0, 0, 1, 0 ,1},
            {0, 0, 0, 0, 0, 0, 0},
            {3, 0, 1, 0, 1, 0, 1},
            {2, 0, 1, 0, 0, 0, 1},
            {1, 0, 1, 0, 0, 0, 0}
    };
    for (int i = 0; i < 8; i++) {
        if (i < 2) {
            //cout << "- - ";
        }
        else {
            //cout << EzCLevelAns[i][0] << " ";
            //cout << let[i - 2][1] << " ";
        }
        for (int j = 1; j < 7; j++) {
            if (i < 2 && j < 1)
            {
                // cout << "- ";
            }
            else {
                // cout << EzCLevelAns[i][j] << " ";
            }
        }
        // cout << endl;
    }
    // cout << endl;

     /* Normal levels */

    int NoALevelAns[9][8] = {
        { 0, 0, 4, 0, 1, 4, 1, 4},
        { 0, 1, 2, 3, 4, 5, 6, 7},
        { 2, 0, 0, 0, 0, 1, 0, 1},
        { 3, 0, 1, 0, 0, 1, 0, 1},
        { 1, 0, 1, 0, 0, 0, 0, 0},
        { 1, 0, 1, 0, 0, 0, 0, 0},
        { 4, 0, 0, 0, 1, 1, 1, 1},
        { 1, 0, 1, 0, 0, 0, 0, 0},
        { 2, 0, 0, 0, 0, 1, 0, 1}
    };
    for (int i = 0; i < 9; i++) {
        if (i < 2) {
            // cout << "- - ";
        }
        else {
            // cout << NoALevelAns[i][0] << " ";
            // cout << let[i - 2][1] << " ";
        }
        for (int j = 1; j < 8; j++) {
            if (i < 2 && j < 1)
            {
                // cout << "- ";
            }
            else {
                // cout << NoALevelAns[i][j] << " ";
            }
        }
        // cout << endl;
    }
    // cout << endl;
    int NoBLevelAns[9][8] = {
        { 0, 2, 3, 0, 3, 1, 4, 1},
        { 0, 1, 2, 3, 4, 5, 6, 7},
        { 4, 1, 0, 0, 1, 1, 0, 1},
        { 1, 1, 0, 0, 0, 0, 0, 0},
        { 1, 0, 0, 0, 0, 0, 1, 0},
        { 3, 0, 1, 0, 1, 0, 1, 0},
        { 2, 0, 1, 0, 0, 0, 1, 0},
        { 3, 0, 1, 0, 1, 0, 1, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0}
    };
    for (int i = 0; i < 9; i++) {
        if (i < 2) {
            //cout << "- - ";
        }
        else {
            //cout << NoBLevelAns[i][0] << " ";
            //cout << let[i - 2][1] << " ";
        }
        for (int j = 1; j < 8; j++) {
            if (i < 2 && j < 1)
            {
                // cout << "- ";
            }
            else {
                // cout << NoBLevelAns[i][j] << " ";
            }
        }
        //cout << endl;
    }
    // cout << endl;
    int NoCLevelAns[9][8] = {
        { 0, 4, 0, 5, 1, 0, 2, 2},
        { 0, 1, 2, 3, 4, 5, 6, 7},
        { 2, 0, 0, 1, 0, 0, 1, 0},
        { 2, 1, 0, 1, 0, 0, 0, 0},
        { 3, 1, 0, 1, 0, 0, 1, 0},
        { 2, 1, 0, 1, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0},
        { 1, 0, 0, 0, 0, 0, 0, 1},
        { 4, 1, 0, 1, 1, 0, 0, 1}
    };
    for (int i = 0; i < 9; i++) {
        if (i < 2) {
            // cout << "- - ";
        }
        else {
            // cout << NoCLevelAns[i][0] << " ";
            // cout << let[i - 2][1] << " ";
        }
        for (int j = 1; j < 8; j++) {
            if (i < 2 && j < 1)
            {
                //  cout << "- ";
            }
            else {
                //  cout << NoCLevelAns[i][j] << " ";
            }
        }
        //cout << endl;
    }
    // cout << endl;

     /* Difficult levels */

    int DiALevelAns[10][9] = {
        { 0, 3, 1, 5, 0, 4, 0, 2, 4},
        { 0, 1, 2, 3, 4, 5, 6, 7, 8},
        { 3, 1, 0, 1, 0, 0, 0, 0, 1},
        { 2, 1, 0, 1, 0, 0, 0, 0, 0},
        { 3, 0, 0, 1, 0, 1, 0, 0, 1},
        { 2, 0, 0, 0, 0, 1, 0, 0, 1},
        { 4, 0, 1, 1, 0, 1, 0, 0, 1},
        { 1, 0, 0, 0, 0, 1, 0, 0, 0},
        { 3, 1, 0, 1, 0, 0, 0, 1, 0},
        { 1, 0, 0, 0, 0, 0, 0, 1, 0}
    };
    for (int i = 0; i < 10; i++) {
        if (i < 2) {
            //cout << "- - ";
        }
        else {
            // cout << DiALevelAns[i][0] << " ";
            // cout << let[i - 2][1] << " ";
        }
        for (int j = 1; j < 9; j++) {
            if (i < 2 && j < 1)
            {
                //     cout << "- ";
            }
            else {
                // cout << DiALevelAns[i][j] << " ";
            }
        }
        //cout << endl;
    }
    // cout << endl;

    int DiBLevelAns[10][9] = {
        { 0, 2, 3, 2, 1, 4, 1, 0, 6},
        { 0, 1, 2, 3, 4, 5, 6, 7, 8},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 5, 0, 1, 0, 1, 1, 1, 0, 1},
        { 2, 0, 1, 0, 0, 0, 0, 0, 1},
        { 1, 0, 0, 0, 0, 1, 0, 0, 0},
        { 4, 1, 0, 1, 0, 1, 0, 0, 1},
        { 1, 0, 0, 0, 0, 0, 0, 0, 1},
        { 5, 1, 1, 1, 0, 1, 0, 0, 1},
        { 1, 0, 0, 0, 0, 0, 0, 0, 1}
    };
    for (int i = 0; i < 10; i++) {
        if (i < 2) {
            // cout << "- - ";
        }
        else {
            // cout << DiBLevelAns[i][0] << " ";
            // cout << let[i - 2][1] << " ";
        }
        for (int j = 1; j < 9; j++) {
            if (i < 2 && j < 1)
            {
                //cout << "- ";
            }
            else {
                // cout << DiBLevelAns[i][j] << " ";
            }
        }
        // cout << endl;
    }
    // cout << endl;
    int  DiCLevelAns[10][9] = {
        { 0, 3, 4, 1, 1, 3, 1, 4, 2},
        { 0, 1, 2, 3, 4, 5, 6, 7, 8},
        { 1, 0, 1, 0, 0, 0, 0, 0, 0},
        { 4, 0, 1, 0, 1, 1, 0, 1, 0},
        { 2, 0, 1, 0, 0, 0, 0, 1, 0},
        { 3, 0, 1, 0, 0, 1, 0, 1, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 3, 1, 0, 0, 0, 0, 0, 1, 1},
        { 1, 1, 0, 0, 0, 0, 0, 0, 0},
        { 5, 1, 0, 1, 0, 1, 1, 0, 1}
    };
    for (int i = 0; i < 10; i++) {
        if (i < 2) {
            // cout << "- - ";
        }
        else {
            //cout << DiCLevelAns[i][0] << " ";
            //cout << let[i - 2][1] << " ";
        }
        for (int j = 1; j < 9; j++) {
            if (i < 2 && j < 1)
            {
                // cout << "- ";
            }
            else {
                // cout << DiCLevelAns[i][j] << " ";
            }
        }
        //cout << endl;
    }
    // cout << endl;

     /* Hard levels*/

    int HaALevelAns[12][11] = {
        { 0, 3, 1, 3, 3, 3, 0, 5, 2, 2, 3},
        { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        { 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
        { 5, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1},
        { 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
        { 2, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0},
        { 3, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0},
        { 4, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1},
        { 2, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
        { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
        { 5, 0, 0, 1, 0, 1, 0, 0, 1, 1, 1},
        { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0}
    };
    for (int i = 0; i < 12; i++) {
        if (i < 2) {
            // cout << "- - ";
        }
        else {
            // cout << HaALevelAns[i][0] << " ";
            // cout << let[i - 2][1] << " ";
        }
        for (int j = 1; j < 11; j++) {
            if (i < 2 && j < 1)
            {
                //  cout << "- ";
            }
            else {
                //  cout << HaALevelAns[i][j] << " ";
            }
        }
        // cout << endl;
    }
    //  cout << endl;
    int HaBLevelAns[12][11] = {
        { 0, 5, 1, 6, 0, 3, 2, 2, 3, 0, 3},
        { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
        { 2, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0},
        { 3, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0},
        { 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0},
        { 4, 1, 0, 1, 0, 0, 1, 0, 0, 0, 1},
        { 4, 1, 0, 1, 0, 0, 1, 0, 0, 0, 1},
        { 2, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1},
        { 4, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0},
        { 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
        { 2, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0}
    };
    for (int i = 0; i < 12; i++) {
        if (i < 2) {
            // cout << "- - ";
        }
        else {
            // cout << HaBLevelAns[i][0] << " ";
            // cout << let[i - 2][1] << " ";
        }
        for (int j = 1; j < 11; j++) {
            if (i < 2 && j < 1)
            {
                //  cout << "- ";
            }
            else {
                // cout << HaBLevelAns[i][j] << " ";
            }
        }
        // cout << endl;
    }
    // cout << endl;
    int  HaCLevelAns[12][11] = {
        { 0, 1, 4, 1, 0, 5, 3, 1, 6, 1, 3},
        { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        { 3, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0},
        { 3, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1},
        { 4, 0, 0, 0, 0, 1, 1, 0, 1, 0, 1},
        { 3, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1},
        { 2, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0},
        { 2, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0},
        { 3, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 2, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0},
        { 3, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0}
    };
    for (int i = 0; i < 12; i++) {
        if (i < 2) {
            // cout << "- - ";
        }
        else {
            //  cout << HaCLevelAns[i][0] << " ";
             // cout << let[i - 2][1] << " ";
        }
        for (int j = 1; j < 11; j++) {
            if (i < 2 && j < 1)
            {
                //  cout << "- ";
            }
            else {
                //  cout << HaCLevelAns[i][j] << " ";
            }
        }
        //  cout << endl;
    }
    //  cout << endl;

      /* Extreme levels*/

    int ExALevelAns[14][13] = {
        { 0, 2, 5, 0, 1, 3, 1, 4, 4, 2, 1, 3, 1},
        { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        { 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
        { 4, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0},
        { 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
        { 7, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 6, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
        { 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
        { 4, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1}
    };
    for (int i = 0; i < 14; i++) {
        if (i < 2) {
            // cout << "- - ";
        }
        else {
            // cout << ExALevelAns[i][0] << " ";
           //  cout << let[i - 2][1] << " ";
        }
        for (int j = 1; j < 13; j++) {
            if (i < 2 && j < 1)
            {
                // cout << "- ";
            }
            else {
                //  cout << ExALevelAns[i][j] << " ";
            }
        }
        //  cout << endl;
    }
    // cout << endl;
    int ExBLevelAns[14][13] = {
        { 0, 2, 1, 1, 5, 2, 1, 2, 2, 7, 1, 2, 1},
        { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        { 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
        { 3, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0},
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
        { 2, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0},
        { 6, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0},
        { 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        { 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1},
        { 3, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 2, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
        { 4, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0}
    };
    for (int i = 0; i < 14; i++) {
        if (i < 2) {
            // cout << "- - ";
        }
        else {
            // cout << ExBLevelAns[i][0] << " ";
            // cout << let[i - 2][1] << " ";
        }
        for (int j = 1; j < 13; j++) {
            if (i < 2 && j < 1)
            {
                // cout << "- ";
            }
            else {
                // cout << ExBLevelAns[i][j] << " ";
            }
        }
        // cout << endl;
    }
    // cout << endl;
    int ExCLevelAns[14][13] = {
        { 0, 2, 3, 2, 3, 0, 5, 1, 3, 3, 2, 0, 3},
        { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        { 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 5, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0},
        { 2, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
        { 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
        { 2, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
        { 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        { 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        { 6, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 1},
        { 2, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 4, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 1},
        { 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1}
    };
    for (int i = 0; i < 14; i++) {
        if (i < 2) {
            // cout << "- - ";
        }
        else {
            // cout << ExCLevelAns[i][0] << " ";
            // cout << let[i - 2][1] << " ";
        }
        for (int j = 1; j < 13; j++) {
            if (i < 2 && j < 1)
            {
                // cout << "- ";
            }
            else {
                // cout << ExCLevelAns[i][j] << " ";
            }
        }
        // cout << endl;
    }
    // cout << endl;



    //Opening for the user

    cout << "===============================" << endl;
    cout << "===----     ------   -------===" << endl;
    cout << "=        BATTLEBOATS          =" << endl;
    cout << "======--_______________-----===" << endl;
    cout << "===============================" << endl;
    cout << endl;
    cout << "  All Rights of the code go to " << endl;
    cout << "       Danielius Sepkus        " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Welcome to Battleboats, which is a spin of a puzzle game called Battleships."<<endl;
    cout << "As the counterpart of the original one it is too a puzzle game where your goal ";
    cout << "is to figure out all the enemy boats positions with the limited information "; 
    cout << "which is given to you at the beggining of the level."<<endl;
    cout << endl;
    cout << "If you are new to this game type - 1 - and press enter for the rules, if you are fimiliar with it, ";
    cout << "type - 2 - and press enter to see all the levels."<<endl;

    int beinput;
    cout << "Input here: ";
    cin >> beinput;
    
    int collector = 0;
    int extrememap[15][15];
    int mode = 0;
    int k = 0;
    int l = 0;
    int counter = 0;
    int m, n;
    int holder;
    holder = 0;

    if (beinput == 1)
    {
        cout << "----HOW TO PLAY----";
        cout << "Battleboats is a puzzle game where your goal is to detect enemy boats." << endl;
        cout << "When you start a level the map will have coordinates and how many signals of enemy boats blocks there are to find. ";
        cout << "The 0 field is the map where enemies are hiding, and the way to find them is using coordinates on the side of inner map";
        cout << "and if you lucky with some already given data about their locations marked with 1. ";
        cout << "Outer sides will give you number on how many parts of enemy boats are on the corresponding line. "<<endl;
        cout << endl;
        cout << "With this information you will need to find there locations and to choose the location you will need to write - 1- and then ";
        cout << "firstly the upper number and then the left number and press enter. Afterwards the zero will be changed to 1 on that location ";
        cout << "or to 0 if there was your 1 written, you won't be able to change already pre-set 1 and the other numbers that are on the sides.";
        cout << endl << endl;
        cout << "When you done guessing type in - 2 - to see if you got it right. You will be told how many wrong areas hit ";
        cout << "if you weren't right. If you failed you will be given option to - 4 - removing your pings, - 3 - so you could continue ";
        cout << "solving the puzzle or - 666 - to leave the level and be sent back to level selection. ";
        cout << endl << endl;
        cout << "CAUTION, - exit - can be typed in at any moment in the game to exit so be careful to not type it in by accident. ";
        cout << endl << "Type in - 2 - to go to level selection.";
        cout << "Input here: ";
        cin >> beinput;
        while (beinput != 2) {
            cout << "Input here: ";
            cin >> beinput;
        }
        if (beinput == 2) {
            while (holder != 11 && holder != 12 && holder != 13 && holder != 21 && holder != 22 && holder != 23 && holder != 31 && holder != 32 && holder != 33 && holder != 41 && holder != 42 && holder != 43 && holder != 51 && holder != 52 && holder != 53) {
                cout << "===============================" << endl;
                cout << "===----     ------   -------===" << endl;
                cout << "=        BATTLEBOATS          =" << endl;
                cout << "======--_______________-----===" << endl;
                cout << "===============================" << endl;
                cout << endl << endl;
                cout << "      ---LEVEL SELECTION---    " << endl;
                cout << endl;
                cout << "Type in the name of the level exactly corresponding to the digits on left to its description";
                cout << "Easy levels:" << endl;
                cout << "11 - (One shot boats 3x, Two shot 2x, Three shot 1x)" << endl;
                cout << "12 - (One shot boats 3x, Two shot 2x, Three shot 1x)" << endl;
                cout << "13 - (One shot boats 3x, Two shot 2x, Three shot 1x)" << endl << endl;
                cout << "Normal levels:" << endl;
                cout << "21 - (One shot boats 3x, Two shot 2x, Three shot 1x, Four shot 1x)" << endl;
                cout << "22 - (One shot boats 3x, Two shot 2x, Three shot 1x, Four shot 1x)" << endl;
                cout << "23 - (One shot boats 3x, Two shot 2x, Three shot 1x, Four shot 1x)" << endl << endl;
                cout << "Difficult levels:" << endl;
                cout << "31 - (One shot boats 3x, Two shot 3x, Three shot 2x, Four shot 1x)" << endl;
                cout << "32 - (One shot boats 3x, Two shot 3x, Three shot 2x, Four shot 1x)" << endl;
                cout << "33 - (One shot boats 3x, Two shot 3x, Three shot 2x, Four shot 1x)" << endl << endl;
                cout << "Hard levels:" << endl;
                cout << "41 - (One shot boats 4x, Two shot 3x, Three shot 2x, Four shot 1x, Five shot 1x)" << endl;
                cout << "42 - (One shot boats 4x, Two shot 3x, Three shot 2x, Four shot 1x, Five shot 1x)" << endl;
                cout << "43 - (One shot boats 4x, Two shot 3x, Three shot 2x, Four shot 1x, Five shot 1x)" << endl << endl;
                cout << "Extreme levels:" << endl;
                cout << "51 - (One shot boats 4x, Two shot 4x, Three shot 2x, Four shot 1x, Five shot 1x)" << endl;
                cout << "52 - (One shot boats 4x, Two shot 4x, Three shot 2x, Four shot 1x, Five shot 1x)" << endl;
                cout << "53 - (One shot boats 4x, Two shot 4x, Three shot 2x, Four shot 1x, Five shot 1x)" << endl;
                cout << endl;

                cout << "Input level: ";
                cin >> holder;

                if (holder == 11 || holder == 12 || holder == 13)
                {
                    n = 8;
                    m = 7;
                    cout << "Would you like to do Normal mode or Expert mode where map always starts unrevieled?" << endl;
                    cout << "Normal mode - 1 - , Expert mode - 2 -. ";
                    cout << "Input here: ";
                    cin >> mode;
                    if (holder == 11)
                    {
                        int EzALevelAnsED[8][7] = {
                            {0, 2, 2, 0, 3, 2, 1},
                            {0, 1, 2, 3, 4, 5, 6},
                            {2, 0, 0, 0, 0, 0, 0},
                            {1, 0, 0, 0, 0, 0, 0},
                            {2, 0, 0, 0, 0, 0, 0},
                            {1, 0, 0, 0, 0, 0, 0},
                            {3, 0, 0, 0, 0, 0, 0},
                            {1, 0, 0, 0, 0, 0, 0}
                        };
                        while (holder == 11)
                        {
                            cout << endl << endl;
                            cout << "Your targets - (One shot boats 3x, Two shot 2x, Three shot 1x)" << endl << endl;
                            cout << "NOTE - write - 1 - to get pin location and then write firsty upper coordinate number and then bottom number guess the location, which will turn into one. ";
                            cout << "Press - 2 - to finish guessing, - 3 - to continue if you didnt guess right, - 4 - reset your pins, - 666 - exit game" << endl << endl;


                            for (int i = 0; i < 8; i++) {
                                if (i < 2) {
                                    cout << "- - ";
                                }
                                else {
                                    cout << EzALevelAnsED[i][0] << " ";
                                    cout << let[i - 2][1] << " ";
                                }
                                for (int j = 1; j < 7; j++) {
                                    if (i < 2 && j < 1)
                                    {
                                        cout << "- ";
                                    }
                                    else {
                                        cout << EzALevelAnsED[i][j] << " ";
                                    }
                                }
                                cout << endl;
                            }
                            cout << endl;
                            cout << "Whats your command sir?: ";
                            cin >> collector;
                            if (collector == 1)
                            {
                                cout << "Coordinates needed... ";
                                cin >> k;
                                cin >> l;
                                for (int i = 2; i < 8; i++) {
                                    for (int j = 1; j < 7; j++)
                                    {
                                        if (k == i && l == j)
                                        {
                                            if (EzALevelAnsED[i + 1][j] == 0)
                                            {
                                                EzALevelAnsED[i + 1][j] = 1;
                                            }
                                            else {
                                                EzALevelAnsED[i + 1][j] = 0;

                                            }
                                        }

                                    }
                                }
                            }
                            else if (collector == 2)
                            {
                                for (int i = 2; i < 8; i++)
                                    for (int j = 1; j < 7; j++)
                                    {
                                        if (EzALevelAnsED[i][j] != EzALevelAns[i][j]);
                                        {
                                            counter++;
                                        }
                                    }
                                if (counter == 0)
                                {
                                    cout << "You won!!!";
                                }
                                else {
                                    cout << "You have made " << counter << " mistakes. Do you wish to continue?" << endl;
                                    cout << "Press - 3 - to continue, press - 4 - to reset or press - 666 - to exit";
                                    cin >> collector;
                                }
                            }
                            else if (collector == 3)
                            {
                                holder = 11;
                            }
                            else if (collector == 4)
                            {
                                holder = 0;
                                holder = 1;
                            }
                            else if (collector == 666)
                            {

                                holder = 0;
                                counter = 0;
                                collector = 0;
                                k = 0;
                                l = 0;
                            }
                            else {
                                while (collector != 1 && collector != 2 && collector != 3 && collector != 4 && collector != 666)
                                {
                                    cout << endl;
                                    cout << "Whats your command sir?: ";
                                    cin >> collector;
                                }
                            }
                        }

                    }
                    else if (holder == 12)
                    {
                        int EzBLevelAnsED[8][7] = {
                            {0, 3, 0, 2, 0, 3, 2},
                            {0, 1, 2, 3, 4, 5, 6},
                            {2, 0, 0, 0, 0, 0, 0},
                            {2, 0, 0, 0, 0, 0, 0},
                            {2, 0, 0, 0, 0, 0, 0},
                            {3, 0, 0, 0, 0, 0, 0},
                            {0, 0, 0, 0, 0, 0, 0},
                            {1, 0, 0, 0, 0, 0, 0}
                        };
                        while (holder == 12)
                        {
                            cout << endl << endl;
                            cout << "Your targets - (One shot boats 3x, Two shot 2x, Three shot 1x)" << endl << endl;
                            cout << "NOTE - write - 1 - to get pin location and then write firsty upper coordinate number and then bottom number guess the location, which will turn into one. ";
                            cout << "Press - 2 - to finish guessing, - 3 - to continue if you didnt guess right, - 4 - reset your pins, - 666 - exit game" << endl << endl;


                            for (int i = 0; i < 8; i++) {
                                if (i < 2) {
                                    cout << "- - ";
                                }
                                else {
                                    cout << EzBLevelAnsED[i][0] << " ";
                                    cout << let[i - 2][1] << " ";
                                }
                                for (int j = 1; j < 7; j++) {
                                    if (i < 2 && j < 1)
                                    {
                                        cout << "- ";
                                    }
                                    else {
                                        cout << EzBLevelAnsED[i][j] << " ";
                                    }
                                }
                                cout << endl;
                            }
                            cout << endl;
                            cout << "Whats your command sir?: ";
                            cin >> collector;
                            if (collector == 1)
                            {
                                cout << "Coordinates needed... ";
                                cin >> k;
                                cin >> l;
                                for (int i = 2; i < 8; i++) {
                                    for (int j = 1; j < 7; j++)
                                    {
                                        if (k == i && l == j)
                                        {
                                            if (EzBLevelAnsED[i + 1][j] == 0)
                                            {
                                                EzBLevelAnsED[i + 1][j] = 1;
                                            }
                                            else {
                                                EzBLevelAnsED[i + 1][j] = 0;

                                            }
                                        }

                                    }
                                }
                            }
                            else if (collector == 2)
                            {
                                for (int i = 2; i < 8; i++)
                                    for (int j = 1; j < 7; j++)
                                    {
                                        if (EzBLevelAnsED[i][j] != EzBLevelAns[i][j]);
                                        {
                                            counter++;
                                        }
                                    }
                                if (counter == 0)
                                {
                                    cout << "You won!!!";
                                }
                                else {
                                    cout << "You have made " << counter << " mistakes. Do you wish to continue?" << endl;
                                    cout << "Press - 3 - to continue, press - 4 - to reset or press - 666 - to exit";
                                    cin >> collector;
                                }
                            }
                            else if (collector == 3)
                            {
                                holder = 12;
                            }
                            else if (collector == 4)
                            {
                                holder = 0;
                                holder = 1;
                            }
                            else if (collector == 666)
                            {

                                holder = 0;
                                counter = 0;
                                collector = 0;
                                k = 0;
                                l = 0;
                            }
                            else {
                                while (collector != 1 && collector != 2 && collector != 3 && collector != 4 && collector != 666)
                                {
                                    cout << endl;
                                    cout << "Whats your command sir?: ";
                                    cin >> collector;
                                }
                            }
                        }
                    }
                    else
                    {
                        {
                            int EzCLevelAnsED[8][7] = {
                                {0, 0, 4, 0, 2, 0, 4},
                                {0, 1, 2, 3, 4, 5, 6},
                                {2, 0, 1, 0, 0, 0, 1},
                                {2, 0, 0, 0, 1, 0 ,1},
                                {0, 0, 0, 0, 0, 0, 0},
                                {3, 0, 1, 0, 1, 0, 1},
                                {2, 0, 1, 0, 0, 0, 1},
                                {1, 0, 1, 0, 0, 0, 0}
                            };
                            while (holder == 13)
                            {
                                cout << endl << endl;
                                cout << "Your targets - (One shot boats 3x, Two shot 2x, Three shot 1x)" << endl << endl;
                                cout << "NOTE - write - 1 - to get pin location and then write firsty upper coordinate number and then bottom number guess the location, which will turn into one. ";
                                cout << "Press - 2 - to finish guessing, - 3 - to continue if you didnt guess right, - 4 - reset your pins, - 666 - exit game" << endl << endl;


                                for (int i = 0; i < 8; i++) {
                                    if (i < 2) {
                                        cout << "- - ";
                                    }
                                    else {
                                        cout << EzCLevelAnsED[i][0] << " ";
                                        cout << let[i - 2][1] << " ";
                                    }
                                    for (int j = 1; j < 7; j++) {
                                        if (i < 2 && j < 1)
                                        {
                                            cout << "- ";
                                        }
                                        else {
                                            cout << EzCLevelAnsED[i][j] << " ";
                                        }
                                    }
                                    cout << endl;
                                }
                                cout << endl;
                                cout << "Whats your command sir?: ";
                                cin >> collector;
                                if (collector == 1)
                                {
                                    cout << "Coordinates needed... ";
                                    cin >> k;
                                    cin >> l;
                                    for (int i = 2; i < 8; i++) {
                                        for (int j = 1; j < 7; j++)
                                        {
                                            if (k == i && l == j)
                                            {
                                                if (EzCLevelAnsED[i + 1][j] == 0)
                                                {
                                                    EzCLevelAnsED[i + 1][j] = 1;
                                                }
                                                else {
                                                    EzCLevelAnsED[i + 1][j] = 0;

                                                }
                                            }

                                        }
                                    }
                                }
                                else if (collector == 2)
                                {
                                    for (int i = 2; i < 8; i++)
                                        for (int j = 1; j < 7; j++)
                                        {
                                            if (EzCLevelAnsED[i][j] != EzCLevelAns[i][j]);
                                            {
                                                counter++;
                                            }
                                        }
                                    if (counter == 0)
                                    {
                                        cout << "You won!!!";
                                    }
                                    else {
                                        cout << "You have made " << counter << " mistakes. Do you wish to continue?" << endl;
                                        cout << "Press - 3 - to continue, press - 4 - to reset or press - 666 - to exit";
                                        cin >> collector;
                                    }
                                }
                                else if (collector == 3)
                                {
                                    holder = 13;
                                }
                                else if (collector == 4)
                                {
                                    holder = 0;
                                    holder = 1;
                                }
                                else if (collector == 666)
                                {

                                    holder = 0;
                                    counter = 0;
                                    collector = 0;
                                    k = 0;
                                    l = 0;
                                }
                                else {
                                    while (collector != 1 && collector != 2 && collector != 3 && collector != 4 && collector != 666)
                                    {
                                        cout << endl;
                                        cout << "Whats your command sir?: ";
                                        cin >> collector;
                                    }
                                }
                            }
                        }
                    }

                }
                else if (holder == 21 || holder == 22 || holder == 23)
                {
                    n = 9;
                    m = 8;

                }
                else if (holder == 31 || holder == 32 || holder == 33)
                {
                    n = 10;
                    m = 9;

                }
                else if (holder == 41 || holder == 42 || holder == 43)
                {
                    n = 12;
                    m = 11;

                }
                else if (holder == 51 || holder == 52 || holder == 53)
                {
                    n = 14;
                    m = 13;

                }
            }
        }
    } 
    else if (beinput == 2) {
        while (holder != 11 && holder != 12 && holder != 13 && holder != 21 && holder != 22 && holder != 23 && holder != 31 && holder != 32 && holder != 33 && holder != 41 && holder != 42 && holder != 43 && holder != 51 && holder != 52 && holder != 53) {
            cout << "===============================" << endl;
            cout << "===----     ------   -------===" << endl;
            cout << "=        BATTLEBOATS          =" << endl;
            cout << "======--_______________-----===" << endl;
            cout << "===============================" << endl;
            cout << endl << endl;
            cout << "      ---LEVEL SELECTION---    " << endl;
            cout << endl;
            cout << "Type in the name of the level exactly corresponding to the digits on left to its description";
            cout << "Easy levels:" << endl;
            cout << "11 - (One shot boats 3x, Two shot 2x, Three shot 1x)" << endl;
            cout << "12 - (One shot boats 3x, Two shot 2x, Three shot 1x)" << endl;
            cout << "13 - (One shot boats 3x, Two shot 2x, Three shot 1x)" << endl << endl;
            cout << "Normal levels:" << endl;
            cout << "21 - (One shot boats 3x, Two shot 2x, Three shot 1x, Four shot 1x)" << endl;
            cout << "22 - (One shot boats 3x, Two shot 2x, Three shot 1x, Four shot 1x)" << endl;
            cout << "23 - (One shot boats 3x, Two shot 2x, Three shot 1x, Four shot 1x)" << endl << endl;
            cout << "Difficult levels:" << endl;
            cout << "31 - (One shot boats 3x, Two shot 3x, Three shot 2x, Four shot 1x)" << endl;
            cout << "32 - (One shot boats 3x, Two shot 3x, Three shot 2x, Four shot 1x)" << endl;
            cout << "33 - (One shot boats 3x, Two shot 3x, Three shot 2x, Four shot 1x)" << endl << endl;
            cout << "Hard levels:" << endl;
            cout << "41 - (One shot boats 4x, Two shot 3x, Three shot 2x, Four shot 1x, Five shot 1x)" << endl;
            cout << "42 - (One shot boats 4x, Two shot 3x, Three shot 2x, Four shot 1x, Five shot 1x)" << endl;
            cout << "43 - (One shot boats 4x, Two shot 3x, Three shot 2x, Four shot 1x, Five shot 1x)" << endl << endl;
            cout << "Extreme levels:" << endl;
            cout << "51 - (One shot boats 4x, Two shot 4x, Three shot 2x, Four shot 1x, Five shot 1x)" << endl;
            cout << "52 - (One shot boats 4x, Two shot 4x, Three shot 2x, Four shot 1x, Five shot 1x)" << endl;
            cout << "53 - (One shot boats 4x, Two shot 4x, Three shot 2x, Four shot 1x, Five shot 1x)" << endl;
            cout << endl;

            cout << "Input level: ";
            cin >> holder;
        
        if (holder == 11 || holder == 12 || holder == 13)
        {
            n = 8;
            m = 7;
            cout << "Would you like to do Normal mode or Expert mode where map always starts unrevieled?" << endl;
            cout << "Normal mode - 1 - , Expert mode - 2 -. ";
            cout << "Input here: ";
            cin >> mode;
            if (holder == 11)
            {
                int EzALevelAnsED[8][7] = {
                    {0, 2, 2, 0, 3, 2, 1},
                    {0, 1, 2, 3, 4, 5, 6},
                    {2, 0, 0, 0, 0, 0, 0},
                    {1, 0, 0, 0, 0, 0, 0},
                    {2, 0, 0, 0, 0, 0, 0},
                    {1, 0, 0, 0, 0, 0, 0},
                    {3, 0, 0, 0, 0, 0, 0},
                    {1, 0, 0, 0, 0, 0, 0}
                };
                while(holder == 11)
                {
                    cout << endl << endl;
                    cout << "Your targets - (One shot boats 3x, Two shot 2x, Three shot 1x)" << endl << endl;
                    cout << "NOTE - write - 1 - to get pin location and then write firsty upper coordinate number and then bottom number guess the location, which will turn into one. ";
                    cout << "Press - 2 - to finish guessing, - 3 - to continue if you didnt guess right, - 4 - reset your pins, - 666 - exit game" << endl << endl;
                    
                    
                    for (int i = 0; i < 8; i++) {
                        if (i < 2) {
                            cout << "- - ";
                        }
                        else {
                            cout << EzALevelAnsED[i][0] << " ";
                            cout << let[i - 2][1] << " ";
                        }
                        for (int j = 1; j < 7; j++) {
                            if (i < 2 && j < 1)
                            {
                                cout << "- ";
                            }
                            else {
                                cout << EzALevelAnsED[i][j] << " ";
                            }
                        }
                        cout << endl;
                    }
                    cout << endl;
                    cout << "Whats your command sir?: ";
                    cin >> collector;
                    if (collector == 1)
                    {
                        cout << "Coordinates needed... ";
                        cin >> k;
                        cin >> l;
                        for (int i = 2; i < 8; i++) {
                            for (int j = 1; j < 7; j++)
                            {
                                if (k == i && l == j)
                                {
                                    if (EzALevelAnsED[i+1][j] == 0)
                                    {
                                        EzALevelAnsED[i+1][j] = 1;
                                    }
                                    else {
                                        EzALevelAnsED[i+1][j] = 0;
                                 
                                    }
                                }

                            }
                        }
                    }
                    else if (collector == 2)
                    {
                        for (int i = 2; i < 8; i++) 
                            for (int j = 1; j < 7; j++)
                            {
                                if (EzALevelAnsED[i][j] != EzALevelAns[i][j]);
                                {
                                    counter++;
                                }
                            }
                        if (counter == 0)
                        {
                            cout << "You won!!!";
                        }
                        else {
                            cout << "You have made " << counter << " mistakes. Do you wish to continue?" << endl;
                            cout << "Press - 3 - to continue, press - 4 - to reset or press - 666 - to exit";
                            cin >> collector;
                        }
                    }
                    else if (collector == 3)
                    {
                        holder = 11;
                    }
                    else if (collector == 4)
                    {
                        holder = 0;
                        holder = 1;
                    }
                    else if (collector == 666)
                    {

                        holder = 0;
                        counter = 0;
                        collector = 0;
                        k = 0;
                        l = 0;
                    }
                    else {
                        while (collector != 1 && collector != 2 && collector != 3 && collector != 4 && collector != 666)
                        {
                            cout << endl;
                            cout << "Whats your command sir?: ";
                            cin >> collector;
                        }
                    }
                }

            }
            else if (holder == 12)
            {
            int EzBLevelAnsED[8][7] = {
                {0, 3, 0, 2, 0, 3, 2},
                {0, 1, 2, 3, 4, 5, 6},
                {2, 0, 0, 0, 0, 0, 0},
                {2, 0, 0, 0, 0, 0, 0},
                {2, 0, 0, 0, 0, 0, 0},
                {3, 0, 0, 0, 0, 0, 0},
                {0, 0, 0, 0, 0, 0, 0},
                {1, 0, 0, 0, 0, 0, 0}
                };
            while (holder == 12)
            {
                cout << endl << endl;
                cout << "Your targets - (One shot boats 3x, Two shot 2x, Three shot 1x)" << endl << endl;
                cout << "NOTE - write - 1 - to get pin location and then write firsty upper coordinate number and then bottom number guess the location, which will turn into one. ";
                cout << "Press - 2 - to finish guessing, - 3 - to continue if you didnt guess right, - 4 - reset your pins, - 666 - exit game" << endl << endl;


                for (int i = 0; i < 8; i++) {
                    if (i < 2) {
                        cout << "- - ";
                    }
                    else {
                        cout << EzBLevelAnsED[i][0] << " ";
                        cout << let[i - 2][1] << " ";
                    }
                    for (int j = 1; j < 7; j++) {
                        if (i < 2 && j < 1)
                        {
                            cout << "- ";
                        }
                        else {
                            cout << EzBLevelAnsED[i][j] << " ";
                        }
                    }
                    cout << endl;
                }
                cout << endl;
                cout << "Whats your command sir?: ";
                cin >> collector;
                if (collector == 1)
                {
                    cout << "Coordinates needed... ";
                    cin >> k;
                    cin >> l;
                    for (int i = 2; i < 8; i++) {
                        for (int j = 1; j < 7; j++)
                        {
                            if (k == i && l == j)
                            {
                                if (EzBLevelAnsED[i + 1][j] == 0)
                                {
                                    EzBLevelAnsED[i + 1][j] = 1;
                                }
                                else {
                                    EzBLevelAnsED[i + 1][j] = 0;

                                }
                            }

                        }
                    }
                }
                else if (collector == 2)
                {
                    for (int i = 2; i < 8; i++)
                        for (int j = 1; j < 7; j++)
                        {
                            if (EzBLevelAnsED[i][j] != EzBLevelAns[i][j]);
                            {
                                counter++;
                            }
                        }
                    if (counter == 0)
                    {
                        cout << "You won!!!";
                    }
                    else {
                        cout << "You have made " << counter << " mistakes. Do you wish to continue?" << endl;
                        cout << "Press - 3 - to continue, press - 4 - to reset or press - 666 - to exit";
                        cin >> collector;
                    }
                }
                else if (collector == 3)
                {
                    holder = 12;
                }
                else if (collector == 4)
                {
                    holder = 0;
                    holder = 1;
                }
                else if (collector == 666)
                {

                    holder = 0;
                    counter = 0;
                    collector = 0;
                    k = 0;
                    l = 0;
                }
                else {
                    while (collector != 1 && collector != 2 && collector != 3 && collector != 4 && collector != 666)
                    {
                        cout << endl;
                        cout << "Whats your command sir?: ";
                        cin >> collector;
                    }
                }
            }
            }
            else
            {
               {
                    int EzCLevelAnsED[8][7] = {
                        {0, 0, 4, 0, 2, 0, 4},
                        {0, 1, 2, 3, 4, 5, 6},
                        {2, 0, 1, 0, 0, 0, 1},
                        {2, 0, 0, 0, 1, 0 ,1},
                        {0, 0, 0, 0, 0, 0, 0},
                        {3, 0, 1, 0, 1, 0, 1},
                        {2, 0, 1, 0, 0, 0, 1},
                        {1, 0, 1, 0, 0, 0, 0}
                    };
                    while (holder == 13)
                    {
                        cout << endl << endl;
                        cout << "Your targets - (One shot boats 3x, Two shot 2x, Three shot 1x)" << endl << endl;
                        cout << "NOTE - write - 1 - to get pin location and then write firsty upper coordinate number and then bottom number guess the location, which will turn into one. ";
                        cout << "Press - 2 - to finish guessing, - 3 - to continue if you didnt guess right, - 4 - reset your pins, - 666 - exit game" << endl << endl;


                        for (int i = 0; i < 8; i++) {
                            if (i < 2) {
                                cout << "- - ";
                            }
                            else {
                                cout << EzCLevelAnsED[i][0] << " ";
                                cout << let[i - 2][1] << " ";
                            }
                            for (int j = 1; j < 7; j++) {
                                if (i < 2 && j < 1)
                                {
                                    cout << "- ";
                                }
                                else {
                                    cout << EzCLevelAnsED[i][j] << " ";
                                }
                            }
                            cout << endl;
                        }
                        cout << endl;
                        cout << "Whats your command sir?: ";
                        cin >> collector;
                        if (collector == 1)
                        {
                            cout << "Coordinates needed... ";
                            cin >> k;
                            cin >> l;
                            for (int i = 2; i < 8; i++) {
                                for (int j = 1; j < 7; j++)
                                {
                                    if (k == i && l == j)
                                    {
                                        if (EzCLevelAnsED[i + 1][j] == 0)
                                        {
                                            EzCLevelAnsED[i + 1][j] = 1;
                                        }
                                        else {
                                            EzCLevelAnsED[i + 1][j] = 0;

                                        }
                                    }

                                }
                            }
                        }
                        else if (collector == 2)
                        {
                            for (int i = 2; i < 8; i++)
                                for (int j = 1; j < 7; j++)
                                {
                                    if (EzCLevelAnsED[i][j] != EzCLevelAns[i][j]);
                                    {
                                        counter++;
                                    }
                                }
                            if (counter == 0)
                            {
                                cout << "You won!!!";
                            }
                            else {
                                cout << "You have made " << counter << " mistakes. Do you wish to continue?" << endl;
                                cout << "Press - 3 - to continue, press - 4 - to reset or press - 666 - to exit";
                                cin >> collector;
                            }
                        }
                        else if (collector == 3)
                        {
                            holder = 13;
                        }
                        else if (collector == 4)
                        {
                            holder = 0;
                            holder = 1;
                        }
                        else if (collector == 666)
                        {

                            holder = 0;
                            counter = 0;
                            collector = 0;
                            k = 0;
                            l = 0;
                        }
                        else {
                            while (collector != 1 && collector != 2 && collector != 3 && collector != 4 && collector != 666)
                            {
                                cout << endl;
                                cout << "Whats your command sir?: ";
                                cin >> collector;
                            }
                        }
                    }
            }
            }

        }
        else if (holder == 21 || holder == 22 || holder == 23)
        {
            n = 9;
            m = 8;
            
        }
        else if (holder == 31 || holder == 32 || holder == 33) 
        {
            n = 10;
            m = 9;
            
        }
        else if (holder == 41 || holder == 42 || holder == 43)
        {
            n = 12;
            m = 11;
            
        }
        else if (holder == 51 || holder == 52 || holder == 53)
        {
            n = 14;
            m = 13;
            
        }
      }
    }
    else {
        while (beinput != 2 && beinput != 1) {
            cout << "Input here: ";
            cin >> beinput;
        }
    }





    



}