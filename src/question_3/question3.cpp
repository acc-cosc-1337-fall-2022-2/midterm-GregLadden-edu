#include "question3.h"
#include<algorithm>

using std::replace;
using std::string;

bool test_config()
{
    return true;
}

string transcribe_dna_into_rna(string dna)
{
    replace( dna.begin(), dna.end(), 'T', 'U');
    return dna;
}