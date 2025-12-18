Purpose
-------
This file gives an AI coding agent the minimal, high-value context needed to be immediately productive in the DSA_series repository. It focuses on the repo "shape", build/run/debug workflows, naming conventions, and a few concrete examples you can follow instead of guessing.

Quick Repo Summary
------------------
- This is an educational Data Structures & Algorithms repository composed of many small, single-file C/C++ example programs grouped by lecture folders (e.g. `lecture_17/`, `lecture_05/`, `Queue/`, `Linked_Lists/`).
- Most folders contain one or more small programs, occasional `build/` and `output/` dirs, and no global build system (no CMake, no Makefile).

Where to look (examples)
------------------------
- Entry README: [README.md](README.md#L1)
- Current working example: [Queue/with_array.cpp](Queue/with_array.cpp#L1)
- Pattern examples: [lecture_04/halfpyramid.cpp](lecture_04/halfpyramid.cpp#L1) and [lecture_17/binary_search/binary_search.cpp](lecture_17/binary_search/binary_search.cpp#L1)

Build & Run (practical)
-----------------------
- There is no global build tool. Typical workflow: compile a single file and run it.
  - Compile with default g++: `g++ -g <file>.cpp -o <output>`
  - The workspace includes a VS Code task for `g++-13` (label: "C/C++: g++-13 build active file"). Use the Tasks UI or run from terminal.
  - Example (from repo root):
    - `g++-13 -std=c++17 -g Queue/with_array.cpp -o Queue/with_array && ./Queue/with_array`
- Prefer `-std=c++17` for modern features unless the lecture file documents otherwise.

Debugging & Tests
------------------
- There are no automated tests in the repo. Use the compiler and run the produced binaries to verify behavior.
- Use the existing VS Code build tasks for quick compiles; debugging can be done with the VS Code C++ debugger configured by the user.

Conventions & Patterns
----------------------
- Files are organized by lecture/topic; filenames often match folder names (e.g., folder `queue` contains `with_array.cpp`).
- Examples are small, single-responsibility programs. When adding or modifying code, keep changes localized to the relevant lecture folder and avoid introducing a global build system.
- `build/` and `output/` directories are used for compiled binaries and sample outputs; avoid modifying previously captured outputs unless correcting them.

What an AI agent should do first
--------------------------------
1. Open relevant lecture folder and run the single-file compile flow described above.
2. If editing, keep edits minimal and focused (fix the root cause). Do not refactor across unrelated lectures.
3. When adding new examples, follow existing naming: place `.cpp` in the appropriate `lecture_xx/` folder, add a short comment header explaining purpose.

Safety & commit guidance
------------------------
- Keep commits small and topic-focused (one lecture/example per change).
- Don't add external dependencies (libraries or package managers) unless requested by the maintainer.

If something is missing
-----------------------
- If you need a project-wide build, ask the maintainer before introducing CMake/Make or a multi-file layout.
- If you need tests, propose a lightweight harness (single-file `test_*.cpp`) and run examples locally; do not create heavy CI without approval.

Questions for the maintainer
---------------------------
- Would you like a small top-level build (CMake) or continue with single-file compiles?
- Are there preferred compilation flags (pedantic/warnings) to enforce across examples?

End
