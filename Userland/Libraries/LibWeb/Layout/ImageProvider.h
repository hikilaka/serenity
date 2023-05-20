/*
 * Copyright (c) 2023, Andreas Kling <kling@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibWeb/PixelUnits.h>

namespace Web::Layout {

class ImageProvider {
public:
    virtual ~ImageProvider() { }

    virtual Optional<CSSPixels> intrinsic_width() const = 0;
    virtual Optional<CSSPixels> intrinsic_height() const = 0;
    virtual Optional<float> intrinsic_aspect_ratio() const = 0;

    virtual RefPtr<Gfx::Bitmap const> current_image_bitmap() const = 0;
    virtual void set_visible_in_viewport(bool) = 0;
};

}
