/*
    Problem: 10141 - Request for Proposal
    Source: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1082
    Code by: Edgar A. Ramírez Fuentes
*/

#include <bits/stdc++.h>
#include <stdio_ext.h>

using namespace std;

int main() {
	int n, p, totalRequirements;
	string requirement;

	string bestProposalName = "";
	float bestCompliance = 0;
	float bestPrice = 0; 
	int rfp = 1;
	string currentProposalName = "";
	float currentCompliance = 0;
	float currentPrice = 0;
	int metRequirements = 0;
	string dummy;
	while(true) {
		// Set the default values
		currentProposalName = "";
		currentCompliance = 0;
		metRequirements = 0;
		currentPrice = 0;
		bestProposalName = "";
		bestPrice = 0;
		bestCompliance = 0;
		cin >> n >> p;
		getline(cin,dummy);	
		totalRequirements = n;
		if(n == 0 && p == 0) break;
		
		while(n--) {
			getline(cin, requirement);
		}

		while(p--) {
			getline(cin,currentProposalName);
			cin >> currentPrice >> metRequirements;
			getline(cin,dummy);
			currentCompliance = (float) metRequirements / (float)totalRequirements;
			while(metRequirements--) {
				fflush(stdin);
				__fpurge(stdin);
				getline(cin, requirement);
			}
			if(currentCompliance == bestCompliance && bestPrice > currentPrice) {
					bestProposalName = currentProposalName;
					bestPrice = currentPrice;
			}
			if(currentCompliance > bestCompliance) {
				bestProposalName = currentProposalName;
				bestCompliance = currentCompliance;
				bestPrice = currentPrice;
			}
		}
		if(rfp > 1)
			cout << endl;
		cout << "RFP #" << rfp << endl;
        cout << bestProposalName << endl;
		rfp++;
	}
	return 0;
}
