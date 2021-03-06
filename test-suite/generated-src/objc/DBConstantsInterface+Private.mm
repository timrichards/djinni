// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constants.djinni

#import "DBConstantsInterface+Private.h"
#import "DBConstantsInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#include <exception>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface DBConstantsInterface ()

@property (nonatomic, readonly) ::djinni::DbxCppWrapperCache<::ConstantsInterface>::Handle cppRef;

- (id)initWithCpp:(const std::shared_ptr<::ConstantsInterface>&)cppRef;

@end

@implementation DBConstantsInterface

- (id)initWithCpp:(const std::shared_ptr<::ConstantsInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRef.assign(cppRef);
    }
    return self;
}

- (void)dummy {
    try {
        _cppRef.get()->dummy();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

@end

namespace djinni_generated {

auto ConstantsInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc.cppRef.get();
}

auto ConstantsInterface::fromCpp(const CppType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::DbxCppWrapperCache<::ConstantsInterface>::getInstance()->get(cpp, [] (const CppType& p) {
        return [[DBConstantsInterface alloc] initWithCpp:p];
    });
}

}  // namespace djinni_generated
