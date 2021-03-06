// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from parcelable.djinni

#pragma once

#include "djinni_support.hpp"
#include "parcelable_map_list.hpp"

namespace djinni_generated {

class NativeParcelableMapList final {
public:
    using CppType = ::testsuite::ParcelableMapList;
    using JniType = jobject;

    using Boxed = NativeParcelableMapList;

    ~NativeParcelableMapList();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeParcelableMapList();
    friend ::djinni::JniClass<NativeParcelableMapList>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/dropbox/djinni/test/ParcelableMapList") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/util/HashMap;)V") };
    const jfieldID field_mMapSet { ::djinni::jniGetFieldID(clazz.get(), "mMapSet", "Ljava/util/HashMap;") };
};

}  // namespace djinni_generated
