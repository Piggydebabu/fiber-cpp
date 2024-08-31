#ifndef __mcs_NONCOPYABLE_H__
#define __mcs_NONCOPYABLE_H__

namespace mcs {
class Nonecopyable {
 public:
  Nonecopyable() = default;
  ~Nonecopyable() = default;
  Nonecopyable(const Nonecopyable &) = delete;
  Nonecopyable operator=(const Nonecopyable) = delete;
};
}  // namespace mcs

#endif