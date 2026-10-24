class Solution {
public:
    int convertToDayOfYear(string date) {
        int daysInMonths[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int month = stoi(date.substr(0, 2));
        int day = stoi(date.substr(3, 2));
        
        int totalDays = day;
        for (int i = 0; i < month - 1; ++i) {
            totalDays += daysInMonths[i];
        }
        return totalDays;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int aliceArrival = convertToDayOfYear(arriveAlice);
        int aliceLeave = convertToDayOfYear(leaveAlice);
        int bobArrival = convertToDayOfYear(arriveBob);
        int bobLeave = convertToDayOfYear(leaveBob);
        
        int latestArrival = max(aliceArrival, bobArrival);
        int earliestLeave = min(aliceLeave, bobLeave);
        
        return max(0, earliestLeave - latestArrival + 1);
    }
};