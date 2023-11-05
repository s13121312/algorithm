#include <bits/stdc++.h>
using namespace std;

#define MAX_CAPACITY 1000000

char stak[MAX_CAPACITY];
int pos=0;

void push(char k){
    stak[pos++]=k;
}

void pop(){
    pos--;
}
char peek(){
    return stak[pos-1];
}

int main(void){

    while (true)
    {
        string input;
        getline(cin,input);
        if(input=="."){
            break;
        }
        int balanced = 1;
        for(int i=0;i<input.length();i++){
            char c = input[i];
            if(c=='(' || c=='['){
                push(c);
            }
            else if(c==')'){
                if(peek() =='('){
                    pop();
                }
                else{
                    balanced=0;
                    break;
                }
            }
            else if(c==']'){
                if(peek() =='['){
                    pop();
                }
                else{
                    balanced=0;
                    break;
                }
            }

        

        }
        if(balanced==1 && pos == 0){
            cout <<"yes\n";
        }
        else{
            cout << "no\n";
        }
        pos=0;
    }
    



    return 0;
}