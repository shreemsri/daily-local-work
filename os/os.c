#include <stdio.h>

int main() {
    int n, i, j;
    int at[20], bt[20], wt[20], tat[20], ct[20], rt[20], pid[20], temp;
    float avg_bt = 0, avg_wt = 0, avg_tat = 0, avg_ct = 0, avg_rt = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        pid[i] = i + 1;
        printf("\nProcess P[%d]\n", i + 1);
        printf("Arrival Time: ");
        scanf("%d", &at[i]);
        printf("Burst Time: ");
        scanf("%d", &bt[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (at[j] < at[i]) {
                temp = at[i];
                at[i] = at[j];
                at[j] = temp;

                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                temp = pid[i];
                pid[i] = pid[j];
                pid[j] = temp;
            }
        }
    }

    ct[0] = at[0] + bt[0];

    for (i = 1; i < n; i++) {
        if (ct[i - 1] < at[i])
            ct[i] = at[i] + bt[i];
        else
            ct[i] = ct[i - 1] + bt[i];
    }

    for (i = 0; i < n; i++) {
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        rt[i] = wt[i];

        avg_bt += bt[i];
        avg_wt += wt[i];
        avg_tat += tat[i];
        avg_ct += ct[i];
        avg_rt += rt[i];
    }

    avg_bt /= n;
    avg_wt /= n;
    avg_tat /= n;
    avg_ct /= n;
    avg_rt /= n;

    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\tRT\n");
    for (i = 0; i < n; i++) {
        printf("P[%d]\t%d\t%d\t%d\t%d\t%d\t%d\n",
               pid[i], at[i], bt[i], ct[i], tat[i], wt[i], rt[i]);
    }

    printf("\nAverage Burst Time       = %.2f", avg_bt);
    printf("\nAverage Completion Time  = %.2f", avg_ct);
    printf("\nAverage Turnaround Time  = %.2f", avg_tat);
    printf("\nAverage Waiting Time     = %.2f", avg_wt);
    printf("\nAverage Response Time    = %.2f\n", avg_rt);

    return 0;
    //sd
    //d
    
}