#include "asteroid.h"

#include "engine/rendering/renderer.h"
#include "engine/rendering/rendering_system.h"

void Asteroid::render(Renderer &renderer) const {
  renderer.render_circle(collider.position, collider.radius);
}

Asteroid::Asteroid(RenderingSystem &rendering_system)
    : rendering_system(rendering_system), is_destroyed(false) {
  rendering_system.track(this);
}

void Asteroid::destroy() {
  is_destroyed = true;
  rendering_system.untrack(this);
}

Collider &Asteroid::get_collider() { return collider; }

Asteroid::~Asteroid() {
  if (!is_destroyed) {
    destroy();
  }
}