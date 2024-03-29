#include <iostream>
#include <fstream>
#include <string>

#include "syntax.h"

void readfile LParen std dColon string filename RParen start
    std dColon string fileContent endsHere

    std dColon ifstream readFile LParen filename RParen endsHere
    while LParen getline LParen readFile comma fileContent RParen RParen start
        std dColon cout LShift fileContent LShift "\n" endsHere
    end

    readFile dot close LParen RParen endsHere
end

int main LParen int argc comma char pointer argv LBracket RBracket RParen start
    std dColon cout LShift HelloWorld LShift std dColon endl endsHere

    if LParen argc LTorEQ 1 RParen start
        std dColon cerr LShift "error: no file to read.\n" endsHere
        return ExitFailure endsHere
    end

    std dColon string filename eq argv LBracket 1 RBracket endsHere
    std dColon cout LShift "reading file: "  LShift filename LShift std dColon endl endsHere

    readfile LParen filename RParen endsHere

    return ExitSuccess endsHere
end
