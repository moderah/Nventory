#pragma once
#ifndef FILESTREAM_H
#define FILESTREAM_H

#include "../src/pch.h"

namespace Inventory {

	template<typename FileType, typename StreamF>
	class StreamFile {
	public:

		StreamFile();
		StreamFile(const std::ostream& os, const FileType& filetype);
		StreamFile(std::istream& is, FileType& filetype);
		~StreamFile();

		

		/// <summary>
		///		extracting file extension and
		///		setting as StreamFile 
		///		FileType member
		/// </summary>
		/// <param name="filename">
		///		takes in string and returns 
		///		the end chars after the "."
		/// </param>
		/// <returns>
		///		FileType(std::string(".ext"))
		///	</returns>
		FileType extractFileType(const char* filename);

		//getters
		FileType getFileType();

		//setters

		void setFileType(const char* filename);
	private:

		FileType* m_filetype;
		StreamF m_StreamF;

	};
};

#endif // !FILESTREAM_H


