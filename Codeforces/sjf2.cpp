#include <bits/stdc++.h>
using namespace std;
struct Process {
 int procid;
 int BT;
 int AT;
};
void findWaitingTime(Process proc[], int n,
 int wt[])
{
 int rt[n];
 for (int i = 0; i < n; i++)
 rt[i] = proc[i].BT;
 int complete = 0, t = 0, minm = INT_MAX;
 int shortest = 0, finish_time;
 bool check = false;
 while (complete != n) {
 for (int j = 0; j < n; j++) {
 if ((proc[j].AT <= t) &&
 (rt[j] < minm) && rt[j] > 0) {
 minm = rt[j];
 shortest = j;
 check = true;
 }
 }
 if (check == false) {
 t++;
 continue;
 }
 rt[shortest]--;
 minm = rt[shortest];
 if (minm == 0)
 minm = INT_MAX;
 if (rt[shortest] == 0) {
 complete++;
 check = false;
 finish_time = t + 1;
 wt[shortest] = finish_time -
 proc[shortest].BT -
 proc[shortest].AT;
 if (wt[shortest] < 0)
 wt[shortest] = 0;
 }
 t++;
 }
}
void findTurnAroundTime(Process proc[], int n,
 int wt[], int tat[])
{
 for (int i = 0; i < n; i++)
 tat[i] = proc[i].BT + wt[i];
}
void findavgTime(Process proc[], int n)
{
 int wt[n], tat[n], total_wt = 0,
 total_tat = 0;
 findWaitingTime(proc, n, wt);
 findTurnAroundTime(proc, n, wt, tat);
 cout << "Processes "
 << " Burst time "
 << " Waiting time "
 << " Turn around time\n";
 for (int i = 0; i < n; i++) {
 total_wt = total_wt + wt[i];
 total_tat = total_tat + tat[i];
 cout << " " << proc[i].procid << "\t\t"
 << proc[i].BT << "\t\t " << wt[i]
 << "\t\t " << tat[i] << endl;
 }
 cout << "\nAverage waiting time = "
 << (float)total_wt / (float)n;
 cout << "\nAverage turn around time = "
 << (float)total_tat / (float)n;
}
int main()
{
 Process proc[] = { { 1, 6, 1 }, { 2, 8, 1 },
 { 3, 7, 2 }, { 4, 3, 3 } };
 int n = sizeof(proc) / sizeof(proc[0]);
 findavgTime(proc, n);
 return 0;
}
