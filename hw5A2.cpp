#include <iostream>
#include <string>
using namespace std;

int daysToFund(int startBalance, int dailyDeposit){
    int daysToGoal = 0;
    int currentBalance = startBalance;
    int i = 0;
    while (currentBalance < 42500){
        currentBalance += dailyDeposit;
        cout << "Day " << i + 1 << ": deposited " << dailyDeposit << ", balance now " << currentBalance << endl;
        i++;
        daysToGoal++;
    }

    return daysToGoal;
}

int main(){
    int startingVaultBalance;
    int dailyDepositAmount;

    cout << "Enter the starting Vault balance: ";
    cin >> startingVaultBalance;

    cout << "Enter the daily deposit amount: ";
    cin >> dailyDepositAmount;

    cout << "--- Vault Savings Plan ---" << endl;

    int fundedInThisManyDays = daysToFund(startingVaultBalance, dailyDepositAmount);

    cout << "The Vault was funded in " << fundedInThisManyDays << " days!" << endl;

    return 0;
}