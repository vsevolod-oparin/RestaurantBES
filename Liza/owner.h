#pragma once

#include "fwd.h"

namespace restbes {

class Owner {
public:
    Owner() = default;

    static void change_dish_status(id_t dish_id, int set_status);

    static void change_dish_price(id_t dish_id, int set_price);

    static void change_dish_info(id_t dish_id, const std::string &set_info);
};

}  // namespace restbes
