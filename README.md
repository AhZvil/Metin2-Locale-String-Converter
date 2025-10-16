# 🧩 Metin2-Locale-String-Converter
This tool automates the process of cleaning and formatting **locale_string.txt** files.
It reads the files line by line, removes certain unwanted characters from even-numbered lines,
and outputs the processed content in a structured format.

## 📘 Overview
This tool automates the process of cleaning and formatting text data across multiple files.  
It reads a list of files to process, removes certain unwanted characters from even-numbered lines,
and outputs the processed content in a structured format.

## ⚙️ Features
✅ Reads a list of filenames from `file_list.txt`  
✅ Processes files line by line from a `Reference` directory  
✅ Removes quotation marks (`"`) and semicolons (`;`)  
✅ Writes cleaned and numbered lines to a `Converted` directory  
✅ Includes robust error handling for missing or inaccessible files  
✅ Provides clear console feedback for each file processed  

## 🧠 How It Works
1. The program starts by reading the file `file_list.txt`, which should contain one filename per line.  
2. For each filename:
   - Opens the corresponding file inside the `./Reference/` directory.
   - Creates a matching output file inside the `./Converted/` directory.
3. It then processes each line:
   - Skips empty lines.
   - Processes **only even-numbered lines**.
   - Removes all double quotes (`"`) and semicolons (`;`).
   - Writes the cleaned line to the output file, prefixed with a line number and a tab.


## 🗂️ Project Structure
<pre>
ProjectFolder/
├── main.cpp
├── file_list.txt
├── Reference/
│   ├── locale_string.txt
│   ├── locale_string_AE.txt
│   └── ...
└── Converted/
    ├── locale_string.txt
    ├── locale_string_AE.txt
    └── ...
</pre>

## 🧱 **Dependencies**
 - C++20 or later (for std::format)

## ⚠️ Error Handling
The program throws and catches exceptions for:
 - Missing file_list.txt
 - Missing files inside ./Reference/
 - Insufficient permissions for writing inside ./Converted/
 - All errors are displayed in the console with a clear message, and the program waits for user input before exiting.

## 💡 Tips
 - Make sure the Converted directory exists before running.
 - Use consistent file naming (e.g., .txt) across file_list.txt and the Reference directory.
 - You can modify the filtering logic in the for (const auto& ch : line) loop if you need to remove or replace other characters.

## 🧑‍💻 Author
AhZvil
