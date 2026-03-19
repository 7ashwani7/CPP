#include <iostream>
#include <cstdlib>
using namespace std;

struct node {
    float coeff;
    int expo;
    struct node* link;
};

// Function to insert a new term in the polynomial (sorted by exponent)
struct node* insert(struct node* head, float coeff, int expo) {
    struct node* newp = (struct node*)malloc(sizeof(struct node));
    newp->coeff = coeff;
    newp->expo = expo;
    newp->link = NULL;

    // If list is empty or new node has higher exponent
    if (head == NULL || expo > head->expo) {
        newp->link = head;
        head = newp;
    } else {
        struct node* temp = head;
        struct node* prev = NULL;

        // Traverse until proper position is found
        while (temp != NULL && temp->expo > expo) {
            prev = temp;
            temp = temp->link;
        }

        // If same exponent exists, add coefficients
        if (temp != NULL && temp->expo == expo) {
            temp->coeff += coeff;
            free(newp);
        } else {
            newp->link = temp;
            if (prev != NULL)
                prev->link = newp;
        }
    }
    return head;
}

// Function to create polynomial
struct node* create(struct node* head) {
    int n, i;
    float coeff;
    int expo;
    cout << "Enter number of terms: ";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "Enter coeff and expo of term " << i + 1 << ": ";
        cin >> coeff >> expo;
        head = insert(head, coeff, expo);
    }
    return head;
}

// Function to display polynomial
void print(struct node* head) {
    if (head == NULL)
        cout << "No terms in polynomial";
    else {
        struct node* temp = head;
        while (temp != NULL) {
            cout << temp->coeff << "x^" << temp->expo;
            temp = temp->link;
            if (temp != NULL)
                cout << " + ";
            else
                cout << endl;
        }
    }
}

// Function to add two polynomials
void polyadd(struct node* head1, struct node* head2) {
    struct node* ptr1 = head1;
    struct node* ptr2 = head2;
    struct node* head3 = NULL;

    while (ptr1 != NULL && ptr2 != NULL) {
        if (ptr1->expo == ptr2->expo) {
            head3 = insert(head3, ptr1->coeff + ptr2->coeff, ptr1->expo);
            ptr1 = ptr1->link;
            ptr2 = ptr2->link;
        } else if (ptr1->expo > ptr2->expo) {
            head3 = insert(head3, ptr1->coeff, ptr1->expo);
            ptr1 = ptr1->link;
        } else {
            head3 = insert(head3, ptr2->coeff, ptr2->expo);
            ptr2 = ptr2->link;
        }
    }

    while (ptr1 != NULL) {
        head3 = insert(head3, ptr1->coeff, ptr1->expo);
        ptr1 = ptr1->link;
    }
    while (ptr2 != NULL) {
        head3 = insert(head3, ptr2->coeff, ptr2->expo);
        ptr2 = ptr2->link;
    }

    cout << "\nResultant polynomial after addition is:\n";
    print(head3);
}

int main() {
    struct node* head1 = NULL;
    struct node* head2 = NULL;

    cout << "Enter first polynomial:\n";
    head1 = create(head1);

    cout << "\nEnter second polynomial:\n";
    head2 = create(head2);

    polyadd(head1, head2);

    return 0;
}
