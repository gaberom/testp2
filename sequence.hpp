//
// Created by gaber on 3/24/2023.
//

#ifndef MAIN_SEQUENCE_HPP
#define MAIN_SEQUENCE_HPP

#include <string>
#include <vector>
using namespace std;
string random_DNA_sequence(size_t min_length=10, size_t max_length=10000);
vector<string> get_kmers(string seq, size_t k, bool randomized=true);
bool compare_composition(const string & s1, const string & s2, size_t k);



#endif //MAIN_SEQUENCE_HPP
