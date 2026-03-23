#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int pid[n], at[n], bt[n], rt[n], ct[n], tat[n], wt[n];
    
    for(int i = 0; i < n; i++) {
        pid[i] = i + 1;
        printf("\nEnter Arrival Time and Burst Time for P%d: ", pid[i]);
        scanf("%d %d", &at[i], &bt[i]);
        rt[i] = bt[i]; // remaining time initially = burst time
    }

    int completed = 0, current_time = 0;
    int shortest, min_time;
    int finish_time;

    while (completed != n) {
        shortest = -1;
        min_time = INT_MAX;

        // Find process with minimum remaining time
        for (int i = 0; i < n; i++) {
            if (at[i] <= current_time && rt[i] > 0 && rt[i] < min_time) {
                min_time = rt[i];
                shortest = i;
            }
        }

        if (shortest == -1) {
            current_time++;
            continue;
        }

        // Execute process for 1 unit time
        rt[shortest]--;

        // If process completes
        if (rt[shortest] == 0) {
            completed++;
            finish_time = current_time + 1;

            ct[shortest] = finish_time;
            tat[shortest] = ct[shortest] - at[shortest];
            wt[shortest] = tat[shortest] - bt[shortest];
        }

        current_time++;
    }

    // Display results
    float total_wt = 0, total_tat = 0;

    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");

    for (int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];

        printf("P%d\t%d\t%d\t%d\t%d\t%d\n",
               pid[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    }

    printf("\nAverage Waiting Time = %.2f", total_wt / n);
    printf("\nAverage Turnaround Time = %.2f\n", total_tat / n);

    return 0;
}