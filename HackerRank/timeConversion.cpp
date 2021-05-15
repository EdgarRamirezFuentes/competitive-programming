/*
    Problem: Time Conversion
    Source: https://www.hackerrank.com/challenges/time-conversion/problem
    Code by: Edgar A. Ramírez Fuentes
*/

string timeConversion(string s) { 
    int horas[12] = {00,13,14,15,16,17,18,19,20,21,22,23};
    string time= s.substr (s.size()-2,2);
    if(time == "PM"){
        if(stoi(s.substr(0,2)) != 12){
            
            s = to_string(horas[stoi(s.substr(0,2))]) + s.substr(2,6);
        }else{
            return "12" + s.substr(2,6);
        }
        return s;
    }else{
        if(stoi(s.substr(0,2)) != 12){
            return s.substr(0,8); 
        }else{
            return "00" + s.substr(2,6);
        }
        
    }
}