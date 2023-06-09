// AUTOGENERATED COPYRIGHT HEADER START
// Copyright (C) 2019-2023 Michael Fabian 'Xaymar' Dirks <info@xaymar.com>
// AUTOGENERATED COPYRIGHT HEADER END

#pragma once
#include "common.hpp"
#include "obs/gs/gs-texture.hpp"

namespace streamfx::gfx {
	namespace blur {
		enum class type : int64_t {
			Invalid = -1,
			Area,
			Directional,
			Rotational,
			Zoom,
		};

		class base {
			public:
			virtual ~base() {}

			virtual void set_input(std::shared_ptr<::streamfx::obs::gs::texture> texture) = 0;

			virtual ::streamfx::gfx::blur::type get_type() = 0;

			virtual double_t get_size() = 0;

			virtual void set_size(double_t width) = 0;

			virtual void set_step_scale(double_t x, double_t y) = 0;

			virtual void set_step_scale_x(double_t v);

			virtual void set_step_scale_y(double_t v);

			virtual void get_step_scale(double_t& x, double_t& y) = 0;

			virtual double_t get_step_scale_x();

			virtual double_t get_step_scale_y();

			virtual std::shared_ptr<::streamfx::obs::gs::texture> render() = 0;

			virtual std::shared_ptr<::streamfx::obs::gs::texture> get() = 0;
		};

		class base_angle {
			public:
			virtual ~base_angle() {}

			virtual double_t get_angle() = 0;

			virtual void set_angle(double_t angle) = 0;
		};

		class base_center {
			public:
			virtual ~base_center() {}

			virtual void set_center(double_t x, double_t y) = 0;

			virtual void set_center_x(double_t v);

			virtual void set_center_y(double_t v);

			virtual void get_center(double_t& x, double_t& y) = 0;

			virtual double_t get_center_x();

			virtual double_t get_center_y();
		};

		class ifactory {
			public:
			virtual ~ifactory() {}

			virtual bool is_type_supported(::streamfx::gfx::blur::type type) = 0;

			virtual std::shared_ptr<::streamfx::gfx::blur::base> create(::streamfx::gfx::blur::type type) = 0;

			virtual double_t get_min_size(::streamfx::gfx::blur::type type) = 0;

			virtual double_t get_step_size(::streamfx::gfx::blur::type type) = 0;

			virtual double_t get_max_size(::streamfx::gfx::blur::type type) = 0;

			virtual double_t get_min_angle(::streamfx::gfx::blur::type type) = 0;

			virtual double_t get_step_angle(::streamfx::gfx::blur::type type) = 0;

			virtual double_t get_max_angle(::streamfx::gfx::blur::type type) = 0;

			virtual bool is_step_scale_supported(::streamfx::gfx::blur::type type) = 0;

			virtual double_t get_min_step_scale_x(::streamfx::gfx::blur::type type) = 0;

			virtual double_t get_step_step_scale_x(::streamfx::gfx::blur::type type) = 0;

			virtual double_t get_max_step_scale_x(::streamfx::gfx::blur::type type) = 0;

			virtual double_t get_min_step_scale_y(::streamfx::gfx::blur::type type) = 0;

			virtual double_t get_step_step_scale_y(::streamfx::gfx::blur::type type) = 0;

			virtual double_t get_max_step_scale_y(::streamfx::gfx::blur::type type) = 0;
		};
	} // namespace blur
} // namespace streamfx::gfx
