/*
 * ReadsProcessor.h
 *
 *  Created on: Aug 8, 2012
 *      Author: cjustin
 */

#ifndef READSPROCESSOR_H_
#define READSPROCESSOR_H_
#include <string>
#include <stdint.h>

using namespace std;

class ReadsProcessor {
public:

	ReadsProcessor(uint16_t windowSize);
	const string &prepSeq(string const &sequence, size_t position);
	const string &prepSeqBisulf(string const &sequence, size_t position);

	virtual ~ReadsProcessor();
private:
	string outputFwd; //containers preventing reallocation of mem
	string outputRev; //containers preventing reallocation of mem
	string emptyResult;
	uint16_t kmerSize;
	uint16_t halfKmerSize;
};

#endif /* READSPROCESSOR_H_ */
