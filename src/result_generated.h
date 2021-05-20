// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_RESULT_H_
#define FLATBUFFERS_GENERATED_RESULT_H_

#include "flatbuffers/flatbuffers.h"

struct Result;
struct ResultBuilder;

struct Result FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ResultBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_STATUS = 4,
    VT_DATA = 6
  };
  int32_t status() const {
    return GetField<int32_t>(VT_STATUS, 0);
  }
  const flatbuffers::String *data() const {
    return GetPointer<const flatbuffers::String *>(VT_DATA);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_STATUS) &&
           VerifyOffset(verifier, VT_DATA) &&
           verifier.VerifyString(data()) &&
           verifier.EndTable();
  }
};

struct ResultBuilder {
  typedef Result Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_status(int32_t status) {
    fbb_.AddElement<int32_t>(Result::VT_STATUS, status, 0);
  }
  void add_data(flatbuffers::Offset<flatbuffers::String> data) {
    fbb_.AddOffset(Result::VT_DATA, data);
  }
  explicit ResultBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Result> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Result>(end);
    return o;
  }
};

inline flatbuffers::Offset<Result> CreateResult(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t status = 0,
    flatbuffers::Offset<flatbuffers::String> data = 0) {
  ResultBuilder builder_(_fbb);
  builder_.add_data(data);
  builder_.add_status(status);
  return builder_.Finish();
}

inline flatbuffers::Offset<Result> CreateResultDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t status = 0,
    const char *data = nullptr) {
  auto data__ = data ? _fbb.CreateString(data) : 0;
  return CreateResult(
      _fbb,
      status,
      data__);
}

inline const Result *GetResult(const void *buf) {
  return flatbuffers::GetRoot<Result>(buf);
}

inline const Result *GetSizePrefixedResult(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<Result>(buf);
}

inline bool VerifyResultBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<Result>(nullptr);
}

inline bool VerifySizePrefixedResultBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<Result>(nullptr);
}

inline void FinishResultBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Result> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedResultBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Result> root) {
  fbb.FinishSizePrefixed(root);
}

#endif  // FLATBUFFERS_GENERATED_RESULT_H_
