#pragma once

#include "engine/common/vec2.h"

enum class ColliderType {
  Circle,
};

struct Collider {
  Vec2 position;
  virtual ColliderType type() = 0;
};

struct CircleCollider : Collider {
  float radius;

  inline ColliderType type() override { return ColliderType::Circle; }
};