#pragma once
#include <stack>
#include <algorithm>
using namespace std;

const static int Block_size=4096/sizeof(bool);
class FAT{
public:
	stack<int>freeDiskBlock;
	stack<int>fullDiskBlock;
	void init(string blocks[]);
	int getBlock();
	void addBlock(int block,string blocks[]);
};