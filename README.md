# 🔍 Inverted Search Algorithm

## 📘 Overview

This project implements an **efficient inverted search algorithm** to improve data retrieval speed across large text-based datasets. Using an **inverted index** structure, the system enables fast and accurate lookups, reducing search time and improving scalability in applications such as **document search engines**, **database query systems**, and **information retrieval platforms**.

---

## 🚀 Features

- 📂 **File-based Indexing**: Reads and parses large datasets to create an inverted index.
- ⚡ **Fast Lookup**: Retrieves documents containing specific terms quickly.
- 🧠 **Memory-Efficient Structures**: Uses hash tables or maps for storing indexed data.
- 📚 **Text Parsing**: Tokenizes input by lines, words, and characters.
- 🧪 **Query System**: Search for words and get the list of all files containing them.
- 🧱 **Scalable**: Designed to handle large-scale text inputs efficiently.

---

## 📂 How It Works

1. **Indexing Phase**:
   - Input: One or more text files.
   - Tokenizes the content and stores word-to-file mappings in an inverted index.

2. **Search Phase**:
   - User inputs a search term.
   - The program returns all filenames where the term appears.

---

## 🛠️ Tech Stack

- 👨‍💻 Language: **C**
- 📄 Input: Plain text files
- 💾 Storage: In-memory inverted index using structures like hash maps or linked lists
- 🧰 Tools: GCC / Make / VS Code / Terminal

---
