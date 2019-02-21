#!/bin/bash

if [ $# -ne 1 ]; then
    echo $0: usage: bash $0 name
    exit 1
fi

destfolder=$1

echo "Copiando arquivos para: "$destfolder

cp {*.cpp,*.h} $destfolder

mv $destfolder/main-wx.cpp $destfolder/minimal.cpp