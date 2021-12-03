#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(){
    string s;
    cin >> s;

    if(s[0] == 'o'){
        for(int i=1;i<s.size();i++){
            if(i == 1 || i == 2 || i == 4 || i == 5 || i == 7 || i == 8){
                if(s[i] == 'o'){
                    cout << "No" << endl;
                    return 0;
                }
            }
            else{
                if(s[i] == 'x'){
                    cout << "No" << endl;
                    return 0;
                }

            }


        }
    }

    if(s[0] == 'x'){
        if(s[1] == 'x'){
            for(int i=2;i<s.size();i++){
                if(i == 2 || i == 5 || i == 8){
                    if(s[i] == 'x'){
                        cout << "No" << endl;
                        return 0;
                    }
                }
                else{
                    if(s[i] == 'o'){
                        cout << "No" << endl;
                        return 0;
                    }

                }    
            }

            
            

        }
        else if(s[1] == 'o'){
            for(int i=2;i<s.size();i++){
                if(i == 4 || i == 7){
                    if(s[i] == 'x'){
                        cout << "No" << endl;
                        return 0;
                    }
                }
                else{
                    if(s[i] == 'o'){
                        cout << "No" << endl;
                        return 0;
                    }

                }    
            }

        }

        
        
    }
    cout << "Yes" << endl;
    return 0;
    
    
}
//xoxxoxxoxx