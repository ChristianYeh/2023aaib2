class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int N = s.length();//c++���r�����
        int one = 0;//s�̭�,���X��1�O?
        for(int i=0; i<N; i++){//c/c++�j��(����A��)
            if(s[i]=='1') one += 1; //if(�P�_)�]
        }

        string ans;//�Ψө񵪮�
        for(int i=0; i<one-1; i++) ans+='1';
        for(int i=0; i<N-one; i++) ans+='0';
        ans += '1';//�̫���1
        return ans;
