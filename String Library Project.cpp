#include <iostream>
#include "clsString.h"

using namespace std;


int main()

{
    clsString String1;
    clsString String2("Salla allah alayhe wa sallem");

    String1.Value = "Ali Ahmed";

    cout << "String1 = " << String1.Value << endl;
    cout << "String2 = " << String2.Value << endl;


    cout << "Number of words: " << String1.CountWords() << endl;

    cout << "Number of words: " << String1.CountWords("Salla allah alayhe wa sallem") << endl;

    cout << "Number of words: " <<
        clsString::CountWords("Amine Grerifa's the best") << endl;

    char target = 'l';
    cout << "Number of letter " << String2.countLetter(target, true) << endl;

    cout << "String trimmed: " << clsString::trim("    #Amine#    ") << endl;

    cout << "String after removing punctuations: " << clsString::removePunc("!!!amine# ^is The ()Best)+") << endl;

    system("pause>0");
    return 0;
};