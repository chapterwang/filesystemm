#pragma once

#include "FCB.H"
#include<string>

class File:public FCB
{
public:
	File();
	File(string _name, FileType _type, FAT & fat);
	~File();
	void Serialization();
	void Deserialization();
	bool addContent(const char * content, string  blocks[], FAT & fat);
	int index[N];
	FCB* father;
	void release(FAT & fat, string* blocks);
	string toString(string blocks[]);

};