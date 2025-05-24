#include <iostream>
#include <map>
#include <string>

// returns an string with the deconfigured config
std::string deconf(std::map<std::string, std::string> &GMseq, std::map<std::string, bool> &conf) {

    std::string output;

    // Check if the setting is true, if it is, add it to the output
    for (auto i1 = conf.begin(); i1 != conf.end(); ++i1) {
        auto i2 = GMseq.find(i1->first);
        if (i2 != GMseq.end()) {
            if (i1->second == true) output += GMseq[i1->first];
        };
    };

    return "\033[0m";

};

// returns a map with the selected RGB colors
struct RGB {
    std::string R;
    std::string G;
    std::string B;
};

// returns an string with the selected color in the color sequence
std::string drawCseq(std::map<std::string, std::string> &Cseq, std::string C) {
    
    std::string output;

    // checks if the color given as an arguments is valid, if it is: add it to the output
    auto i1 = Cseq.find(C);
    if (i1 != Cseq.end()) return output += Cseq[C];

    return "\033[0m";

};

// returns an string with the selected color in the 256 sequence
std::string draw256(bool background, std::string color) {

    std::string output;

    // checks if is background true or false, and then adds the selected color to the output
    if (background == true) {
        output += "48;5;" + color + "m";
    } else {
        output += "38;5;" + color + "m";
    };

    return output;

};

// returns an string with the selected color in the RGB sequence
std::string drawRGB(bool background, RGB& color) {
    
    std::string output;

     // checks if is background true or false, and then adds the selected colors to the output
    if (background == true) {
        output += "48;2;" + color.R + ";" + color.G + ";" + color.B + "m";
    } else {
        output += "38;2;" + color.R + ";" + color.G + ";" + color.B + "m";
    };

    return output;
};

// resets every type of text format
std::string reset() {
    return "\033[0m";
};

int main() {

    std::string ec = "\033"; // escape code

    // Grpahics mode sequences
    std::map<std::string, std::string> GMseq = {
        {"reset",         "0"},
        {"bold",          "1"},
        {"faint",         "2"},
        {"italic",        "3"},
        {"underline",     "4"},
        {"blinking",      "5"},
        {"inverse",       "7"},
        {"hidden",        "8"},
        {"strikethrough", "9"},
    };

    // Colors Sequences
    std::map<std::string, std::string> Cseq = {
        {"forblack",   "30"},        {"bakblack",   "40"},        {"forbblack",   "100"},       {"bakbblack", "100"},
        {"forred",     "31"},        {"bakred",     "41"},        {"forbred",     "91"},        {"bakbred", "101"},
        {"forgreen",   "32"},        {"bakgreen",   "42"},        {"forbgreen",   "92"},        {"bakbgreen", "102"},
        {"foryellow",  "33"},        {"bakyellow",  "43"},        {"forbyellow",  "93"},        {"bakbyellow", "103"},
        {"forblue",    "34"},        {"bakblue",    "44"},        {"forbblue",    "94"},        {"bakbblue", "104"},
        {"formagenta", "35"},        {"bakmagenta", "45"},        {"forbmagenta", "95"},        {"bakbmagenta", "105"},
        {"forcyan",    "36"},        {"bakcyan",    "46"},        {"forbcyan",    "96"},        {"bakbcyan", "106"},
        {"forwhite",   "37"},        {"bakwhite",   "47"},        {"forbwhite",   "97"},        {"bakbwhite", "107"},
        {"fordefault", "39"},        {"bakdefault", "49"}
    };

    return 0;

};