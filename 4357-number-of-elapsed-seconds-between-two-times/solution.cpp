class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int end_sec=stoi(endTime.substr(0,2))*3600+stoi(endTime.substr(3,5))*60+stoi(endTime.substr(6,8));
        int start_sec=stoi(startTime.substr(0,2))*3600+stoi(startTime.substr(3,5))*60+stoi(startTime.substr(6,8));
        return end_sec-start_sec;
    }
};
