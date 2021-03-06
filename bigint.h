#ifndef _BIGINT_H_
#define _BIGINT_H_

#include <vector>
#include <iterator>
#include <iostream>

#define COMPRESSED_NUM  ( 10000 )
#define COMPRESSED_BITS ( 4 )

class BigInt {
    private:
        std::vector< int > data;

        void mul10 ( );
        void div10 ( );

    public:
        BigInt ( );
        BigInt ( unsigned long x );
        BigInt ( const BigInt &x );

        friend std::ostream &operator << ( std::ostream &os, const BigInt &num );
        friend std::istream &operator >> ( std::istream &is, BigInt &num );
        friend BigInt operator + ( const BigInt &a, const BigInt &b );
        friend BigInt operator - ( const BigInt &a, const BigInt &b );
        friend BigInt operator * ( const BigInt &a, const BigInt &b );
        friend BigInt operator / ( BigInt a, BigInt b );
        friend BigInt operator % ( BigInt a, BigInt b );

        friend BigInt power ( const BigInt &a, const BigInt &b );

        friend int cmp ( const BigInt &a, const BigInt &b );
        friend bool operator < ( const BigInt &a, const BigInt &b );
        friend bool operator > ( const BigInt &a, const BigInt &b );
        friend bool operator <= ( const BigInt &a, const BigInt &b );
        friend bool operator >= ( const BigInt &a, const BigInt &b );
        friend bool operator == ( const BigInt &a, const BigInt &b );
        friend bool operator != ( const BigInt &a, const BigInt &b );
};

#endif // _BIGINT_H_
