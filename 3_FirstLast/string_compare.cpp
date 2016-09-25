
#include "std_lib_facilities.h"

int String_Compare()
{  
    int number_of_words = 0;
    string previous = " ";		// previous word; initialized to "not a word"
    string current;			    // current word
    cout << "Enter a series of words to find repeated words. 'CTRL+D' at any " 
         << "time to exit. \n\n > ";    // #20 fix. 
    
    while (cin>>current) {		// read a stream of words
        ++number_of_words;		// increase word count

        if (previous == current)	// check if the word is the same as last
            cout << "word number " << number_of_words 
                 << " repeated: " << current << '\n';
        previous = current;
    }
    return 0;
}
