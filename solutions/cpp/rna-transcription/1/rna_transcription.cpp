#include "rna_transcription.h"

namespace rna_transcription {

    char to_rna(const char base ){
        const std::string dna_base {"GCTA"}, rna_base {"CGAU"};
        std::size_t found = dna_base.find(base);
        return (found != std::string::npos)? rna_base[found] : ' ';
    }
    
    std::string to_rna(const std::string dna_string ){
        std::string result {};
        for (const auto nucleotide : dna_string )
            result += to_rna(nucleotide);
        
        return result;
    }

}  // namespace rna_transcription
