/*
    Problem: Defanging an IP Adress
    Source: https://leetcode.com/problems/defanging-an-ip-address/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for(auto i: address) {
            if(i == '.') {
                ans.append("[.]");
            }else{
                ans+=i;
            }
        }
        return ans;
    }
};