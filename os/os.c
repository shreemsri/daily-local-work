#include <stdio.h>

int main() {
    int n, i;
    int burst_time[20], waiting_time[20], turnaround_time[20];
    float avg_waiting_time = 0.0, avg_turnaround_time = 0.0;

    printf("Enter total number of processes (max 20): ");
    scanf("%d", &n);

    if (n <= 0 || n > 20) {
        printf("Invalid number of processes.\n");
        return 1;
    }

    printf("\nEnter process burst time:\n");
    for (i = 0; i < n; i++) {
        printf("P[%d]: ", i + 1);
        scanf("%d", &burst_time[i]);
    }

    // First process waiting time = 0
    waiting_time[0] = 0;

    for (i = 1; i < n; i++) {
        waiting_time[i] = burst_time[i - 1] + waiting_time[i - 1];
    }

    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");

    for (i = 0; i < n; i++) {
        turnaround_time[i] = burst_time[i] + waiting_time[i];
        avg_waiting_time += waiting_time[i];
        avg_turnaround_time += turnaround_time[i];

        printf("P[%d]\t%d\t\t%d\t\t%d\n",
               i + 1,
               burst_time[i],
               waiting_time[i],
               turnaround_time[i]);
    }

    avg_waiting_time /= n;
    avg_turnaround_time /= n;

    printf("\nAverage Waiting Time = %.2f\n", avg_waiting_time);
    printf("Average Turnaround Time = %.2f\n", avg_turnaround_time);

    return 0;
}