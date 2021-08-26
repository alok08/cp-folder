#include<bits/stdc++.h>
using namespace std;

const char words[10][5] = {"", "", "abc", "def", "ghi", "jkl", "mno",
"pqrs", "tuv", "wxyz"};
const int numbers[10] = {0, 0, 3, 3, 3, 3, 3, 4, 3, 4};
int product = 1;

void printfunction(int x, int y, string output[])
{
    string str1 = output[];
    int j=0, k=0;
    for(int i=0; i<product; i++)
    {
        if((words[y][k])!='\0')
        {
            output[i] = str1[j]+words[y][k];
            k++;
            continue;
        }
        j++;
        k=0;
    }
}

int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
   
   int x = num/10;
   int y = num%10;
   product = product*numbers[y];
   if(x == 0)
   {
       output[0] = "";
       return 1;
   }
   int smalleroutputsize = keypad(x, output);
   printfunction(x, y, output);
   return product;
}


int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
