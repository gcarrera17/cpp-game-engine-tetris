#pragma once

#include <cstddef>
#include <vector>
#include <cstdint>
#include <cassert>

namespace tetris::core {

    class Board {
        public:
            using size_type = std::size_t;

            static constexpr size_type kDefaultWidth  = 10;
            static constexpr size_type kDefaultHeight = 20;

            static constexpr std::uint8_t kEmpty  = 0;
            static constexpr std::uint8_t kFilled = 1;

            Board(size_type width = kDefaultWidth, size_type height = kDefaultHeight)
                : width_(width), height_(height), cells_(width * height, 0) {}

            size_type width() const noexcept { return width_; }
            size_type height() const noexcept { return height_; }

            bool in_bounds(int x, int y) const noexcept {
                if (x < 0 || y < 0)
                    return false;
                return static_cast<size_type>(x) < width_
                    && static_cast<size_type>(y) < height_;
            }

            bool is_filled(int x, int y) const noexcept {
                assert(in_bounds(x, y));
                return cells_[index(x, y)] != kEmpty;
            }

            void set_filled(int x, int y, bool value) noexcept {
                assert(in_bounds(x, y));
                cells_[index(x, y)] = value ? kFilled : kEmpty;
            }
            
            void clear() noexcept {
                std::fill(cells_.begin(), cells_.end(), kEmpty);
            }

        private:
            size_type width_;
            size_type height_;
            std::vector<std::uint8_t> cells_;

            size_type index(int x, int y) const noexcept {
                assert(in_bounds(x, y));
                return (static_cast<size_type>(y) * width_) + static_cast<size_type>(x);
            }
    };

}