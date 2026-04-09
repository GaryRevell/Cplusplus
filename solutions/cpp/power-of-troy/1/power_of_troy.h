#pragma once

#include <string>
#include <memory>

namespace troy {

    struct artifact {
        // constructors needed (until C++20)
        explicit artifact(std::string name) : name(name) {}
        std::string name;
    };

    struct power {
        // constructors needed (until C++20)
        power(std::string effect) : effect(effect) {}
        std::string effect;
    };

    struct human {
        human() = default;

        std::unique_ptr<troy::artifact> possession {};
        std::shared_ptr<troy::power> own_power {};
        std::shared_ptr<troy::power> influenced_by {};

    };

    void give_new_artifact(human& who , std::string artifact_name );
    void exchange_artifacts(std::unique_ptr<artifact> &art1,
                            std::unique_ptr<artifact> &art2);
    void manifest_power(human& who , std::string power );
    void use_power(const human& caster , human& target );
    int power_intensity(const human &caster );

}  // namespace troy