#include "question3.h"
#include<iostream>

using std::cout;
int main()
{
    string rna_str = transcribe_dna_into_rna("GATGGAACTTGACTACGTAAATT");
    cout<<rna_str;
    return 0;
}