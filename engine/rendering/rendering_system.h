#pragma once

#include "engine/common/singleton.h"
#include "engine/rendering/renderer.h"
#include "renderable.h"
#include <memory>
#include <unordered_set>

class RenderingSystem : public Singleton<RenderingSystem> {
public:
  RenderingSystem(int window_size);

  void track(const Renderable *obj);
  void untrack(const Renderable *obj);

  void tick();

private:
  Renderer renderer;
  std::unordered_set<const Renderable *> objects;
};
