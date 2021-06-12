#include "rendering_system.h"

RenderingSystem::RenderingSystem(int window_size) : renderer(window_size) {}

void RenderingSystem::tick() {
  renderer.clear();
  for (auto &obj : objects) {
    obj->render(renderer);
  }
  renderer.present();
}

void RenderingSystem::track(const Renderable *obj) { objects.insert(obj); }

void RenderingSystem::untrack(const Renderable *obj) { objects.erase(obj); }
