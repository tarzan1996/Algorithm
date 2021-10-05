#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n;
    string plans;
    int x = 1;
    int y = 1;

    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};
    char moveTypes[4] = {'L', 'R', 'U', 'D'};

    for (int i = 0; i < plans.size(); i++) {
        char plan = plans[i];
        // 이동 후 좌표 구하기
        int nx = -1, ny = -1;
        for (int j = 0; j < 4; j++) {
            if (plan == moveTypes[j]) {
                nx = x + dx[j];
                ny = y + dy[j];
            }
        }
        if (nx < 1 || ny < 1 || nx > n || ny > n)
            continue;
        x = nx;
        y = ny;

}