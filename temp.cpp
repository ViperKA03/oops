#include <bits/stdc++.h>
using namespace std;

// Function to convert binary string to decimal
int f(const string &s) {
    return stoi(s, nullptr, 2);
}

// Function to convert binary string to IP address
string solve(const string &s) {
    stringstream ip;
    for (int i = 0; i < 4; i++) {
        string part = s.substr(i * 8, 8);
        ip << f(part);
        if (i < 3) ip << ".";
    }
    return ip.str();
}


vector<string> parseIPhh() {
    vector<string> res;
    int n;
    cin>>n;
    if(n!=3) {
        res.push_back("Invalid String");
        return res;
    }
    string hh, src, dst;
    cin >> hh >> src >> dst;
    
    if(hh.length()!=32 || src.length()!=32 || dst.length()!=32)
    {
         res.push_back("Invalid String");
        return res;
    }

    int ver = f(hh.substr(0, 4));        
    int pro = f(hh.substr(4, 8));       
    int time = f(hh.substr(12, 8));   
    int pl = f(hh.substr(20, 12)); 

    string proName = (pro == 6) ? "TCP" : "UDP";

    
    stringstream hhOutput;
    hhOutput << ver << "," << proName << "," << time << "," << pl;
    res.push_back(hhOutput.str());

    
    res.push_back(solve(src));
    res.push_back(solve(dst));

    return res;
}

int main() {
    

    vector<string> res = parseIPhh();

    for (size_t i = 0; i < res.size(); i++) {
        cout << res[i];
        if (i != res.size() - 1) {
            cout << "\n";
        }
    }

 

    return 0;
}
