#include "power_of_troy.h"

namespace troy {

    void give_new_artifact(human& who , const std::string artifact_name ){
        who.possession = std::make_unique<artifact>(artifact_name);
    }

    void exchange_artifacts(std::unique_ptr<artifact> &art1,
                            std::unique_ptr<artifact> &art2) {
        // swap the artifacts
        std::swap(art1, art2);
    }

    void manifest_power(human& who , const std::string power_up ){
        who.own_power = std::make_unique<power>(power_up);
    }

    void use_power(const human &caster , human &target ) {
        target.influenced_by = caster.own_power;
    }

    int power_intensity(const human &person ) {
        return person.own_power.use_count();
    }
    
}  // namespace troy
