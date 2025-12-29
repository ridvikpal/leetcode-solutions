#!/bin/bash

find . -type f \
    -not -path "./.git/*" \
    -not -path "./.vscode/*" \
    -not -path "./README.md" \
    -not -path "./count_solutions.sh" \
    -not -path "./.gitignore" \
    -not -path "./LICENSE" \
    | wc -l
