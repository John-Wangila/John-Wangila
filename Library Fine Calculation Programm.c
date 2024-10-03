
#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate;
    int daysOverdue;
    float fineRate, fineAmount;

    printf("Enter Book ID: ");
    scanf("%d", &bookID);

    printf("Enter Due Date (in format DD/MM/YYYY): ");
    scanf("%d", &dueDate);

    printf("Enter Return Date (in format DD/MM/YYYY): ");
    scanf("%d", &returnDate);

    daysOverdue = returnDate - dueDate;

    if (daysOverdue <= 0) {
        printf("No fine applicable.\n");
    } else if (daysOverdue <= 7) {
        fineRate = 50.0;
        fineAmount = daysOverdue * fineRate;
        printf("Book ID: %d\n", bookID);
        printf("Due Date: %02d/%02d\n", dueDate / 100, dueDate % 100);
        printf("Return Date: %02d/%02d\n", returnDate / 100, returnDate % 100);
        printf("Days Overdue: %d\n", daysOverdue);
        printf("Fine Rate: Sh 50.00\n");
        printf("Fine Amount: Sh %.2f\n", fineAmount);
    } else if (daysOverdue <= 14) {
        fineRate = 100.0;
        fineAmount = daysOverdue * fineRate;
        printf("Book ID: %d\n", book        printf("Due Date: %02d/%02d\n", dueDate / 100, dueDate % 100);
        printf("Return Date: %02d/%02d\n", returnDate / 100, returnDate % 100);
        printf("Days Overdue: %d\n", daysOverdue);
        printf("Fine Rate: Sh 100.00\n");
        printf("Fine Amount: Sh %.2f\n", fineAmount);
    } else if (daysOverdue <= 21) {
        fineRate = 200.0;
        fineAmount = daysOverdue * fineRate;
        printf("Book ID: %d\n", bookID);
        printf("Due Date: %02d/%02d\n", dueDate / 100, dueDate % 100);
        printf("Return Date: %02d/%02d\n", returnDate / 100, returnDate % 100);
        printf("Days Overdue: %d\n", daysOverdue);
        printf("Fine Rate: Sh 200.00\n");
        printf("Fine Amount: Sh %.2f\n", fineAmount);
    } else {
        fineRate = 300.0;
        fineAmount = daysOverdue * fineRate;
        printf("Book ID: %d\n", bookID);
        printf("Due Date: %02d/%02d\n", dueDate / 100, dueDate % 100);
        printf("Return Date: %02d/%02d\n", returnDate / 100, returnDate % 100);
        printf("Days Overdue: %d\n", daysOverdue);
        printf("Fine Rate: Sh 300.00\n");
        printf("Fine Amount: Sh %.2f\n", fineAmount);
    }

    return 0;
}
