#include "protein_translation.h"

namespace protein_translation {

    std::map<std::string, std::string> aminos{
        {"AUG", "Methionine"},
        {"UUU", "Phenylalanine"},
        {"UUC", "Phenylalanine"},
        {"UUA", "Leucine"},
        {"UUG", "Leucine"},
        {"UCU", "Serine"},
        {"UCC", "Serine"},
        {"UCA", "Serine"},
        {"UCG", "Serine"},
        {"UAU", "Tyrosine"},
        {"UAC", "Tyrosine"},
        {"UGU", "Cysteine"},
        {"UGC", "Cysteine"},
        {"UGG", "Tryptophan"},
        {"UAA", "STOP"},
        {"UAG", "STOP"},
        {"UGA", "STOP"}
    };

    std::vector<std::string> proteins(const std::string& codons ){
        std::vector<std::string> result {};

        for ( size_t i {} ; i < codons.size(); i += 3){
            std::string segment = codons.substr(i,3);
            if (auto it = aminos.find(segment); it != aminos.end()) {
                if ( it->second == "STOP" )
                    break;
                result.push_back(it->second);
            }
            else
                std::cerr << "No amino found matching " << segment << std::endl;
        }
        return result;
    }

}  // namespace protein_translation
