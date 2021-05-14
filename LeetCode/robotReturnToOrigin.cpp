/*
    Problem: Robot Return to Origin
    Source: https://leetcode.com/problems/robot-return-to-origin/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    bool judgeCircle(string moves) {
        /*
            Position[0] is the x
            Position is the y
        */
        vector<int> position(2, 0);
        for (auto& move : moves) {
            if (move == 'L') {
                position[0] -= 1;
            } else if ( move == 'R') {
                position[0] += 1;
            } else if (move == 'U') {
                position[1] += 1;
            } else {
                position[1] -= 1;
            }
        }
        return position[0] == 0 && position[1] == 0 ? true : false;
    }
};