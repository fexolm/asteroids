#pragma once

class Renderer;

struct Renderable {
  virtual void render(Renderer &renderer) const = 0;
};