#include <iostream>
#include <string>
using namespace std;

int totalGold(int donations[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += donations[i];
    }

    return sum;
}

int main(){
    int vaultGoal = 42500;

    int goldDonationCount;
    cout << "Enter the number of gold donations: ";
    cin >> goldDonationCount;

    int goldDonationArray[100];

    for (int i = 0; i < goldDonationCount; i++){
        cout << "Enter gold donation " << i + 1 << ": ";
        cin >> goldDonationArray[i];
    }

    int totalGoldDonated = totalGold(goldDonationArray, goldDonationCount);

    cout << "--- Vault Funding ---" << endl;
    cout << "Total gold donated: " << totalGoldDonated << endl;
    cout << "Vault goal: " << vaultGoal << endl;
 
    if (totalGoldDonated >= vaultGoal){
        cout << "The Vault is fully funded! Surplus: " << totalGoldDonated - vaultGoal << " gold" << endl;
    }
    else{
        cout << "The Vault still needs " << vaultGoal - totalGoldDonated << " more gold." << endl;
    }

    return 0;
}