#pragma once

#include <iostream>

using namespace std;

constexpr int GAMES_AMOUNT = 38;
constexpr int MAX_TALENT_POINTS = 10;

class Team {
    string name;
    double talent;
    int wins;
    int losses;
    int win_streak;
    int lose_streak;
    int max_win_streak;
    int max_lose_streak;
    int points_scored;
    int points_lost;
    int total_win_by;
    int talent_wins;
    public:
        Team(string name, double talent) {
            if(talent > 1 || talent < 0) {
                throw invalid_argument("illegal talent level");
            }
            this->name = move(name);
            this->talent = talent;
            this->wins = 0;
            this->losses = 0;
            this->win_streak = 0;
            this->lose_streak = 0;
            this->max_win_streak = 0;
            this->max_lose_streak = 0;
            this->points_scored = 0;
            this->points_lost = 0;
            this->total_win_by = 0;
            this->talent_wins = 0;
        }
        string get_name() const;
        double get_talent() const;
        int get_wins() const;
        int get_losses() const;
        int get_points_scored() const;
        int get_points_lost() const;
        void update_talent_points(int t_points);
        void update_streak(int result);
        void update_points(int scored, int lost, string const &winner);
        bool operator>(const Team& t) const;
        int get_max_win_streak() const;
        int get_max_lose_streak() const;
        double get_total_win_by_avg() const;
        int get_talent_wins() const;
};
