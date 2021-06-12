#pragma once

#include "engine/physics/physical_obj.h"
#include "engine/rendering/renderable.h"
#include "engine/rendering/rendering_system.h"

class Asteroid : public PhysicalObj, public Renderable {
private:
  RenderingSystem &rendering_system;
  CircleCollider collider;
  bool is_destroyed;

public:
  Asteroid(RenderingSystem &rendering_system);

  virtual void render(Renderer &renderer) const;

  virtual void destroy();

  virtual Collider &get_collider();

  ~Asteroid();
};