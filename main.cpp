#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    char buf2;
    int rr;
    string text = "comparison between signed and unsigned integer expressions ";
    string buf = "";
    for (int i = 0; i < text.length() - 1; i++){
 buf.push_back(text[i]);
        if  (text[i] == ' '){
            for(int j = 1; j < buf.length() - 2; j++){
                buf2 = buf[j];
                rr = (rand() % (buf.length() - 3)) + 1;
                buf[j] = buf[rr];
                buf[rr] = buf2;
                }
   cout << buf << endl;
        buf = "";
        }
        }
    for(int j = 1; j < buf.length() - 2; j++){
        buf2 = buf[j];
        rr = (rand() % (buf.length() - 3)) + 1 ;
        buf[j] = buf[rr];
        buf[rr] = buf2;
        }
cout << buf << endl;
    return 0;
}

