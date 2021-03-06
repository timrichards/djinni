// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from test.djinni

#import "DBAssortedPrimitives.h"
#import "DBColor.h"
#import "DBMapListRecord.h"
#import "DBNestedCollection.h"
#import "DBPrimitiveList.h"
#import "DBSetRecord.h"
#import <Foundation/Foundation.h>
@protocol DBClientInterface;
@protocol DBToken;


@interface DBTestHelpers : NSObject

+ (nonnull DBSetRecord *)getSetRecord;

+ (BOOL)checkSetRecord:(nonnull DBSetRecord *)rec;

+ (nonnull DBPrimitiveList *)getPrimitiveList;

+ (BOOL)checkPrimitiveList:(nonnull DBPrimitiveList *)pl;

+ (nonnull DBNestedCollection *)getNestedCollection;

+ (BOOL)checkNestedCollection:(nonnull DBNestedCollection *)nc;

+ (nonnull NSDictionary *)getMap;

+ (BOOL)checkMap:(nonnull NSDictionary *)m;

+ (nonnull NSDictionary *)getEmptyMap;

+ (BOOL)checkEmptyMap:(nonnull NSDictionary *)m;

+ (nonnull DBMapListRecord *)getMapListRecord;

+ (BOOL)checkMapListRecord:(nonnull DBMapListRecord *)m;

+ (void)checkClientInterfaceAscii:(nullable id<DBClientInterface>)i;

+ (void)checkClientInterfaceNonascii:(nullable id<DBClientInterface>)i;

+ (void)checkEnumMap:(nonnull NSDictionary *)m;

+ (void)checkEnum:(DBColor)c;

+ (nullable id<DBToken>)tokenId:(nullable id<DBToken>)t;

+ (nullable id<DBToken>)createCppToken;

+ (void)checkCppToken:(nullable id<DBToken>)t;

+ (int64_t)cppTokenId:(nullable id<DBToken>)t;

+ (void)checkTokenType:(nullable id<DBToken>)t
                  type:(nonnull NSString *)type;

+ (nullable NSNumber *)returnNone;

/** Ensures that we generate integer translation code */
+ (nonnull DBAssortedPrimitives *)assortedPrimitivesId:(nonnull DBAssortedPrimitives *)i;

+ (nonnull NSData *)idBinary:(nonnull NSData *)b;

@end
