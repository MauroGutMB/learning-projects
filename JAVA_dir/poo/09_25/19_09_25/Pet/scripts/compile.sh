#!/bin/bash
# Compila todos os arquivos .java dentro de src/ e gera .class em bin/

cd "$(dirname "$0")/.." || exit 1
javac -d bin src/*.java

if [ $? -eq 0 ]; then
    echo "✅ Compilação concluída com sucesso!"
    find bin -type f -name "*.class"
else
    echo "❌ Erro na compilação."
    exit 1
fi
