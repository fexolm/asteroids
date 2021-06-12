#pragma once

#include "colliders.h"

struct PhysicalObj {
  virtual void destroy() = 0;
  virtual Collider &get_collider() = 0;
};