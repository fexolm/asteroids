#include "renderer.h"
#include <SDL2_gfx/SDL2_gfxPrimitives.h>
#include <stdexcept>

Renderer::Renderer(int size) : size(size) {
  window =
      SDL_CreateWindow("Asteroids", SDL_WINDOWPOS_CENTERED,
                       SDL_WINDOWPOS_CENTERED, size, size, SDL_WINDOW_OPENGL);

  if (!window) {
    throw std::runtime_error("Unable to create SDL window");
  }
  renderer = SDL_CreateRenderer(window, -1, 0);
  if (!renderer) {
    throw std::runtime_error("Unable to create SDL renderer");
  }
}

void Renderer::render_circle(Vec2 position, float radius) {
  int x = position.x * size;
  int y = position.y * size;
  int rad = radius * size;
  filledCircleRGBA(renderer, x, y, rad, 255, 0, 0, 100);
  SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
}

void Renderer::clear() { SDL_RenderClear(renderer); }

void Renderer::present() {
  SDL_RenderPresent(renderer);
  SDL_RenderFlush(renderer);
}

Renderer::~Renderer() {
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
}