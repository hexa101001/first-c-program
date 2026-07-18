#!/bin/bash

# Install script for DO YOU LOVE ME?
# Created by Hexa

echo "🔧 Installing DO YOU LOVE ME?..."

# Check if gcc is installed
if ! command -v gcc &> /dev/null; then
    echo "❌ GCC not found. Please install GCC first."
    echo "   Ubuntu/Debian: sudo apt install gcc"
    echo "   Fedora: sudo dnf install gcc"
    echo "   macOS: xcode-select --install"
    exit 1
fi

# Compile the program
echo "📦 Compiling..."
gcc love.c -o love

if [ $? -eq 0 ]; then
    echo "✅ Compilation successful!"
    echo "🚀 Run with: ./love"
else
    echo "❌ Compilation failed!"
    exit 1
fi

echo "🎯 DO YOU LOVE ME? is ready!"
