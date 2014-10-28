#ifndef OPENAGE_ENGINE_COORD_VEC3_H_231F3FF2F983460AA07FD0F936819CE7
#define OPENAGE_ENGINE_COORD_VEC3_H_231F3FF2F983460AA07FD0F936819CE7

#include "decl.h"

#define MEMBERS x, y, z
#define SCALAR_TYPE int64_t
#define ABSOLUTE_TYPE vec3
#define RELATIVE_TYPE vec3_delta

namespace openage {
namespace coord {

struct vec3 {
	int64_t x, y, z;

	#include "ops/abs.h"
};

struct vec3_delta {
	int64_t x, y, z;

	#include "ops/rel.h"
};

#include "ops/free.h"

#ifdef GEN_IMPL_VEC3_CPP
#include "ops/impl.h"
#endif //GEN_IMPL_VEC3_CPP

} //namespace coord
} //namespace openage

#undef MEMBERS
#undef RELATIVE_TYPE
#undef ABSOLUTE_TYPE
#undef SCALAR_TYPE

#endif //_ENGINE_COORD_VEC3_H_
