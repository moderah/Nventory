#include "pch.h"
#include "../include/StreamFile.h"


namespace Inventory {

	template<typename FileType, typename StreamF>
	StreamFile<typename FileType, typename StreamF>::StreamFile() :
		m_filetype(nullptr),
		m_StreamF(nullptr)
	{
		//define default construction
	};

	template<typename FileType, typename StreamF>
	StreamFile<typename FileType, typename StreamF>::StreamFile(const std::ostream& os, const FileType& filetype) :
		m_filetype(nullptr),
		m_StreamF(nullptr) 
	{
		this->m_filetype = filetype;
		this->m_StreamF = &os;
	}
	template<typename FileType, typename StreamF>
	StreamFile<typename FileType, typename StreamF>::StreamFile(std::istream& is, FileType& filetype) :
		m_filetype(nullptr),
		m_StreamF(nullptr)
	{
		this->m_filetype = filetype;
		this->m_StreamF = &is;
	};
	template<typename FileType, typename StreamF>
	StreamFile<typename FileType, typename StreamF>::~StreamFile() {
		//delete this;
	};


	template<typename FileType, typename StreamF>
	FileType StreamFile<typename FileType, typename StreamF>::extractFileType(const char* filename) {
		int dot = 0;
		const char* markExt = "";
		*markExt.push(".");
		for (int i = 0; i < filename.length(); i++) {
			if (filename[i] == *markExt) {
				dot = i;
			};
		};
		std::rotate(filename.begin(), filename.begin() + (dot), filename.end());
		filename.substr(0, 3);
		return filename;
	};


	//getters
	template<typename FileType, typename StreamF>
	FileType StreamFile<typename FileType, typename StreamF>::getFileType() {
		return this->m_filetype;
	};

	//setters
	template<typename FileType, typename StreamF>
	void StreamFile<typename FileType, typename StreamF>::setFileType(const char* filename) {
		this->m_filetype = filename;
		this->extractFileType(filename);
	};

};
