#include <iostream>

using namespace std;

int main()
{
        const char key[] = {'a', 'c', 'b', 'a', 'd'};
        const int NUM_QUES = 5;
        char c;
<<<<<<< HEAD
        int ques=0,numCorrect=0;
        cout<<"Enter the"<<NUM_QUES<<"questions test number end with the 'ENTER'"<<endl;
        while(cin.get(c)){
                if(c!= '\n'){
                        if (c==key[ques]){
=======
        int ques = 0;
        int numCorrect = 0;
        cout << "Enter the" << NUM_QUES << "questions test number end with the 'ENTER'" << endl;
        while (cin.get(c))
        {
                if (c != '\n')
                {
                        if (c = key[ques])
                        {
>>>>>>> 989dd340bfef64be3c1ec05ffcd46e308f64e92f
                                numCorrect++;
                                cout << " ";
                                //         ques++;
                        }
                        else
<<<<<<< HEAD
                        
                                cout<<"*";
                        
                       ques++;

                }else{
                        ques=0;
                        cout<<endl;
                        cout<<"The rate of the correct anser is"<<static_cast<float>(numCorrect)/NUM_QUES<<endl;
                        numCorrect=0;
=======
                        {

                                cout << "*";
                                //         ques++;
                        }
                        ques++;
                }
                else
                {
                        // ques = 0, numCorrect = 0;
                        // cout << endl;
                        cout << "The rate of the correct anser is" << static_cast<float>(numCorrect) / NUM_QUES * 100 << "%" << endl;
                        ques = 0;
                        numCorrect = 0;
                        cout << endl;
>>>>>>> 989dd340bfef64be3c1ec05ffcd46e308f64e92f
                }
        }
        return 0;
}