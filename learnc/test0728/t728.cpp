#include <iostream>

using namespace std;

int main()
{
        const char key[] = {'a', 'c', 'b', 'a', 'd'};
        const int NUM_QUES = 5;
        char c;
        int ques = 0; 
        int numCorrect = 0;
        cout << "Enter the" << NUM_QUES << "questions test number end with the 'ENTER'" << endl;
        while (cin.get(c))
        {
                if (c != '\n')
                {
                        if (c = key[ques])
                        {
                                numCorrect++;
                                cout << " ";
                       //         ques++;
                        }
                        else
                        
                                cout << "*";
                       //         ques++;
                        
                        ques++;
                }
                else
                {
                       // ques = 0, numCorrect = 0;
                       // cout << endl;
                        cout << "The rate of the correct anser is" << static_cast<float>(numCorrect) / NUM_QUES *100<<"%"<< endl;
                        ques=0;numCorrect=0;cout<<endl;
                }
        }
        return 0;
}