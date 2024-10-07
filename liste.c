#include "liste.h"

List ajout_tete(List l, int c, int q, float p) {
    prod obj = {c, q, p, l};
    return prod;
}

List ajout_fin(List l, int c, int q, float p) {
    prod* parcours = l;

    while(parcours->next != NULL) {
        parcours = parcours->next;
    }
    prod obj = {c, q, p, NULL};

    parcours->next = &prod;

}

List supp_tete(List l) {
    l = l->next;
    free(l);
    return l;
}

List supp_fin(List l) {
    prod* parcours = l;

    while((parcours->next)->next != NULL) {
        parcours = parcours->next;
    }
    
    free(parcours->next);
    parcours->next = NULL;
    return l;
}

int main(int argc, char **argv) {

}
