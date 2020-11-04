#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int destination,intervalOfLamp,startingPointOfTrain,endingPointOfTrain;
		cin>>destination>>intervalOfLamp>>startingPointOfTrain>>endingPointOfTrain;

		int visibleLamps = destination/intervalOfLamp;
		int startingPointForBlockLamp=0,endingPointForBlockLamp=0,blockedLamps=0;

		if(startingPointOfTrain%intervalOfLamp == 0){
			startingPointForBlockLamp = startingPointOfTrain;
		}
		else {
			startingPointForBlockLamp = startingPointOfTrain + (intervalOfLamp - startingPointOfTrain%intervalOfLamp);
		}

		endingPointForBlockLamp = endingPointOfTrain - endingPointOfTrain%intervalOfLamp;

		blockedLamps = (endingPointForBlockLamp - startingPointForBlockLamp) /intervalOfLamp ;
		blockedLamps++;

		cout <<  visibleLamps- blockedLamps <<endl;



	}




}
