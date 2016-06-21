#include "includes.h"

#ifndef H_PROG5
#define H_PROG5

#define NO_ITEMS 12    // max no of items printed in single line

// class to generate name tags for soldiers

class SEQ {
private:
    string id;         // name tag for soldier
    unsigned size, nd; // no of soldiers, no of digits in name tags

    // returns no of digits in name tags
    unsigned find_nd ( const double& sz ) {
        if ( ( sz / 26 ) <= 1 ) return 2;
        else return ( find_nd ( sz / 26 ) + 1 );
    }

public:
    // constructor for name-tag generator
    SEQ ( const unsigned& s = 1 ) : size ( s ) {
        double sz = ( double ) size / 9; nd = find_nd ( sz );
        id = string ( nd, 'A' ); id [ nd - 1 ] = '1'; 
    }

    // returns next name tag in sequence
    string operator ( ) ( ) {
        string tmp = id; int i = nd - 1;
        if ( id [ i ] < '9' ) id [ i ]++;
        else {
            id [ i ] = '1'; bool flag = true;
            for ( i--; i >= 0 && flag; i-- )
                if ( id [ i ] < 'Z' ) { id [ i ]++; flag = false; }
                else id [ i ] = 'A';
        } 
        return tmp;
    }
};

// reads and initializes all input arguments
void init_vals ( vector <string>&, unsigned&, unsigned&, unsigned& );

// prints all name tags for remaining soldiers after elimination
void print_vector ( const vector <string>&, const unsigned& );
#endif
