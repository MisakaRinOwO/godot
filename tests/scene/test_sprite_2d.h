/**************************************************************************/
/*  test_sprite_2d.h                                                      */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

#pragma once

#include "scene/2d/sprite_2d.h"

#include "tests/test_macros.h"
#include "tests/test_utils.h"

namespace TestSprite2D {
TEST_CASE("[SceneTree][Sprite2D] Should construct a new Sprite2D object.") {
	Sprite2D *sprite_2d = memnew(Sprite2D);

	CHECK(sprite_2d->get_texture() == Ref<Texture2D>());
	CHECK_EQ(sprite_2d->get_offset(), Point2(0, 0));
	CHECK(sprite_2d->is_centered());
	CHECK_FALSE(sprite_2d->is_flipped_h());
	CHECK_FALSE(sprite_2d->is_flipped_v());
	CHECK_EQ(sprite_2d->get_hframes(), 1);
	CHECK_EQ(sprite_2d->get_vframes(), 1);
	CHECK_EQ(sprite_2d->get_frame(), 0);
	CHECK_EQ(sprite_2d->get_frame_coords(), Vector2i(0, 0));
	CHECK_FALSE(sprite_2d->is_region_enabled());

	memdelete(sprite_2d);
}
} // namespace TestSprite2D
