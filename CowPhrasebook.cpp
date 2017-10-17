//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string phrase[1005];
    int m, n, sum=0;
    int i, j;
    
    cin >> m >> n;
    getline(cin, phrase[1003]);
    for(i=0;i<m;i++){
        getline(cin, phrase[i]);
    }
    for(i=0;i<n;i++){
        string mail;
        getline(cin, mail);
        for(j=0;j<m;j++){
            size_t found=phrase[j].find(mail);
            if(found!=string::npos){
                sum++;
                break;
            }
        }
    }
    
    cout << sum << endl;
    
    return 0;
}
