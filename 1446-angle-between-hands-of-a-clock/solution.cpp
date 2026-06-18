class Solution {
public:
    double angleClock(int hour, int minutes) {
        double min_hand=double(minutes)/5;
        double hour_hand=double(hour)+double(minutes)/60;
        double ans=(min_hand-hour_hand)*30;
        return min(abs(ans),360-abs(ans));
    }
};
