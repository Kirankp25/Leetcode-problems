class Solution{
public:
string convertToTitle(int cN) {
    string CT;   
    while(cN--){          
        CT = char('A' + cN % 26) + CT;
        cN /= 26;
    }
    return CT;
}
};