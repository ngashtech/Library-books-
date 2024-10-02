
#include <stdio.h>
#include <stdlib.h>

int main() {
    int bookid, returndate,deudate, daysoverdue, finerate, fineamount;

    // Overdue fine calculation
    printf("Enter book id, deu date, and return date: ");
    scanf("%d %d %d", &bookid, &deudate, &returndate);

    daysoverdue = returndate - deudate;

    if (daysoverdue <= 7) {
        finerate = 10;
    } else if (daysoverdue <= 14) {
        finerate = 20;
    } else {
        finerate = 30;
    }

    fineamount = daysoverdue * finerate;

    printf("book id: %d\n", bookid);
    printf("deu date: %d\n", deudate);
    printf("return date: %d\n", returndate);
    printf("days overdue: %d\n", daysoverdue);
    printf("fine rate: %.2f Ksh per day\n", finerate);
    printf("fine amount: %.2f Ksh\n", fineamount);

    return 0;
}