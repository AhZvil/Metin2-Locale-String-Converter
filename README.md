# 🧩 Metin2-Locale-String-Converter
Tool automatically formatting and cleaning lines inside every `locale_list.txt` files.
Process files individually line by line.
Every line will contain line numbers in the converted file.

## ⚙️ Features
- Reads filenames from `file_list.txt` 
- Processes files line by line that exists in `Reference` directory
- Removes following characters from each line: `"` & `;`
- Cleaned and numbered lines to a `Converted` directory
- Error handling for missing or inaccessible files
- Clear console feedback for each file processed

## 🗂️ Project Folder Structure
<pre>
ProjectFolder/
│
├── Binary/
│   ├── Converted/
│   │   ├── locale_string.txt
│   │   ├── locale_string_AE.txt
│   │   ├── locale_string_BR.txt
│   │   ├── locale_string_DE.txt
│   │   └── ... (other converted locale files)
│   │
│   ├── Reference/
│   │   ├── locale_string.txt
│   │   ├── locale_string_AE.txt
│   │   ├── locale_string_BR.txt
│   │   ├── locale_string_DE.txt
│   │   └── ... (other reference locale files)
│   │
│   ├── file_list.txt
│   └── Metin2-Locale-String-Converter.exe
│
├── Metin2-Locale-String-Converter/
│   ├── Metin2-Locale-String-Converter.cpp
│   ├── Metin2-Locale-String-Converter.vcxproj
│   ├── Metin2-Locale-String-Converter.vcxproj.filters
│   └── Metin2-Locale-String-Converter.vcxproj.user
│
├── Metin2-Locale-String-Converter.sln
└── README.md
</pre>

## 🧱 Platform Settings
 - Toolset: `v143`
 - Language standard: `std:c++20`

## ⚠️ Error Handling
Program can handle these kind of errors:
 - Missing file_list.txt
 - Missing files inside ./Reference/
 - Insufficient permissions for writing inside ./Converted/
 - Every error gets printed into the terminal

## 💡 Some Tips
 - Converted directory must exists before running.
 - Every filename inside ./Reference/ folder must match with the name file_list.txt contains line by line.

## 🧑‍💻 Project Author
AhZvil
