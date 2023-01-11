#!/usr/bin/env bash

input="$1"

peg -o grammar.c oyi.peg
cc -o oyi grammar.c main.c 

./oyi < $input

rm grammar.c
rm oyi

