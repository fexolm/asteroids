#include <engine/entities/asteroid.h>
#include <engine/rendering/rendering_system.h>

int main() {
  RenderingSystem rendering_system(800);
  Asteroid a(rendering_system);
  CircleCollider &collider = dynamic_cast<CircleCollider &>(a.get_collider());
  collider.position.x = 0.5;
  collider.position.y = 0.5;
  collider.radius = 0.1;

  for (int i = 0; i < 100000; i++) {
    rendering_system.tick();
    if (i == 30000) {
      a.destroy();
    }
  }
}