/*
    Problem: Truck Tour
    Source: https://www.hackerrank.com/challenges/truck-tour/problem
    Code by: Edgar A. Ramírez Fuentes
*/

int truckTour(vector<vector<int>> petrolpumps) {
    int petrol = 0;
    int iterator = 0;
    for(int i = 0; i < petrolpumps.size(); i++) {
        if(petrolpumps[i][0] + petrol >=  petrolpumps[i][1]){
            petrol = petrol + petrolpumps[i][0] - petrolpumps[i][1];
        }else{
            petrol = 0;
            iterator= i + 1;
        }
    }
    return iterator;
}