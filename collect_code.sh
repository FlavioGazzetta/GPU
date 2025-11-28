#!/bin/bash
# Combine all Python (.py) and SystemVerilog (.sv) source files into one text file
# with their file path as a header above each code block.
# Only searches inside 'dut' and 'tests' directories, excluding 'sim_build'.

OUTPUT_FILE="all_code.txt"

# Start fresh
echo "Creating $OUTPUT_FILE ..."
echo "# Combined source code dump" > "$OUTPUT_FILE"
echo "# Generated on $(date)" >> "$OUTPUT_FILE"
echo "" >> "$OUTPUT_FILE"

# Find and process .py, .sv, .cpp, and .hpp files, excluding sim_build
find  dut -type f \( -name "*.cpp" -o -name "*.hpp" -o -name "*.sv" -o -name "*.py" \) \
    -not -path "*/sim_build/*" | sort | while read -r FILE; do
    echo "Processing $FILE ..."
    {
        echo "===================================================================="
        echo ">>> File: $FILE"
        echo "===================================================================="
        echo ""
        cat "$FILE"
        echo ""
        echo ""
    } >> "$OUTPUT_FILE"
done

echo "✅ Done! Combined code written to $OUTPUT_FILE"
