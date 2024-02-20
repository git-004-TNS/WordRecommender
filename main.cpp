/*
*  Word Recommender.
*   Attempting to build a word recommender. Program is in progress.
*   Program built with codeblocks on Windows 10.
*  Run the program at your own responsibility!
*
*/

#include <iostream>
#define N_WORDS 100
using namespace std;



int main()
{
    cout << "Hello world!" << endl;


   char dictionary[100][10] //Top 100 words in English according to https://en.wikipedia.org/wiki/Most_common_words_in_English
                            //Words sorted according to their rank.
   = {"the","be","to","of","and","a","in","that","have","I","it","for","not",
      "on","with","he","as","you","do","at","this","but","his","by","from",
      "they","we","say","her","she","or","an","will","my","one","all",
      "would","there","their","what","so","up","out","if","about","who","get",
      "which","go","me","when","make","can","like","time","no","just","him","know",
      "take","people","into","year","your","good","some","could","them","see",
      "other","than","then","now","look","only","come","its","over","think",
      "also","back","after","use","two","how","our","work","first","well","way",
      "even","new","want","because","any","these","give","day","most","us"
      };
//for(int i=0; i<100; i++)
 // cout << sizeof(arr[i]) << endl;

//cout << "Enter first letter." << endl;

char c;
int i;
//cin >> c;

cout << "We are still building this program!" << endl;
cout << "All results are according to present dictionary used by the program." << endl;
cout << "\n\n\tFirst character" << "|" << "Most Probable word" << endl;
cout << "    \t---------------" << "|" << "------------------" << endl;

for(c='a'; c <= 'z'; c++ )   //Printing most probable word starting with character c for all c in English Alphabet.
{
//Logic: The first word occuring in dictionary and starting with value of c is the most probable word starting with it in English dictionary.


for(i=0; i<100; i++)
{
    if(dictionary[i][0] == c){
        printf("\t%14c | \t %s\n", c, dictionary[i]);
        break;
}
}


if(i == 100 )
    printf("\t%14c | \t <NA>\n", c);
}

printf("\nKey\n <NA> : No word starting with corresponding letter is currently in the dictionary");
    return 0;
}

