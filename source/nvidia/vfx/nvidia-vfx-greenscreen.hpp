// AUTOGENERATED COPYRIGHT HEADER START
// Copyright (C) 2021-2023 Michael Fabian 'Xaymar' Dirks <info@xaymar.com>
// AUTOGENERATED COPYRIGHT HEADER END

#pragma once
#include "nvidia-vfx-effect.hpp"
#include "nvidia-vfx.hpp"
#include "nvidia/cuda/nvidia-cuda-gs-texture.hpp"
#include "nvidia/cuda/nvidia-cuda-obs.hpp"
#include "nvidia/cuda/nvidia-cuda.hpp"
#include "nvidia/cv/nvidia-cv-image.hpp"
#include "nvidia/cv/nvidia-cv-texture.hpp"
#include "obs/gs/gs-texture.hpp"

namespace streamfx::nvidia::vfx {
	enum class greenscreen_mode {
		QUALITY     = 0,
		PERFORMANCE = 1,
	};

	class greenscreen : protected effect {
		bool                                                     _dirty;
		std::list<std::shared_ptr<::streamfx::obs::gs::texture>> _buffer;
		std::shared_ptr<::streamfx::nvidia::cv::texture>         _input;
		std::shared_ptr<::streamfx::nvidia::cv::image>           _source;
		std::shared_ptr<::streamfx::nvidia::cv::image>           _destination;
		std::shared_ptr<::streamfx::nvidia::cv::texture>         _output;
		std::shared_ptr<::streamfx::nvidia::cv::image>           _tmp;

		public:
		~greenscreen();
		greenscreen();

		void size(std::pair<uint32_t, uint32_t>& size);

		void set_mode(greenscreen_mode mode);

		std::shared_ptr<::streamfx::obs::gs::texture> process(std::shared_ptr<::streamfx::obs::gs::texture> in);

		std::shared_ptr<::streamfx::obs::gs::texture> get_color();

		std::shared_ptr<::streamfx::obs::gs::texture> get_mask();

		private:
		void resize(uint32_t width, uint32_t height);

		void load();
	};
} // namespace streamfx::nvidia::vfx
