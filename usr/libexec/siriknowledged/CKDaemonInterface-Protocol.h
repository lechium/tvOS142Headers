//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CKGenericCondition, CKTripleCondition, NSArray, NSDictionary, NSString;

@protocol CKDaemonInterface <NSObject>
- (void)disableSyncAndDeleteCloudDataWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)dropLinksBetweenSubject:(NSString *)arg1 andObject:(NSString *)arg2 inStoreWithIdentifier:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)dropLinksWithLabel:(NSString *)arg1 fromSubject:(NSString *)arg2 inStoreWithIdentifier:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)dropLinkWithLabel:(NSString *)arg1 betweenSubject:(NSString *)arg2 andObject:(NSString *)arg3 inStoreWithIdentifier:(NSString *)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)decreaseWeightForLinkWithLabel:(NSString *)arg1 betweenSubject:(NSString *)arg2 andObject:(NSString *)arg3 inStoreWithIdentifier:(NSString *)arg4 completionHandler:(void (^)(NSError *, long long))arg5;
- (void)increaseWeightForLinkWithLabel:(NSString *)arg1 betweenSubject:(NSString *)arg2 andObject:(NSString *)arg3 inStoreWithIdentifier:(NSString *)arg4 completionHandler:(void (^)(NSError *, long long))arg5;
- (void)setWeightForLinkWithLabel:(NSString *)arg1 betweenSubject:(NSString *)arg2 andObject:(NSString *)arg3 toValue:(long long)arg4 inStoreWithIdentifier:(NSString *)arg5 completionHandler:(void (^)(NSError *))arg6;
- (void)removeAllValuesFromSynchedStoreWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)removeAllValuesFromStoreWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)removeValuesMatchingCondition:(CKGenericCondition *)arg1 fromSynchedStoreWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)removeValuesMatchingCondition:(CKGenericCondition *)arg1 fromStoreWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)removeValuesForKeys:(NSArray *)arg1 fromSynchedStoreWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)removeValuesForKeys:(NSArray *)arg1 fromStoreWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)removeValueForKey:(NSString *)arg1 fromSynchedStoreWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)removeValueForKey:(NSString *)arg1 fromStoreWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)saveKeysAndValues:(NSDictionary *)arg1 toSynchedStoreWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)saveKeysAndValues:(NSDictionary *)arg1 toStoreWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)triplesComponentsMatching:(CKTripleCondition *)arg1 inStoreWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *, NSArray *))arg3;
- (void)keysAndValuesForKeysMatchingCondition:(CKGenericCondition *)arg1 inStoreWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *, NSDictionary *))arg3;
- (void)keysAndValuesInStoreWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *, NSDictionary *))arg2;
- (void)valuesForKeys:(NSArray *)arg1 inStoreWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *, NSArray *))arg3;
- (void)valuesForKeysMatchingCondition:(CKGenericCondition *)arg1 inStoreWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *, NSArray *))arg3;
- (void)valuesInStoreWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *, NSArray *))arg2;
- (void)valueForKey:(NSString *)arg1 inStoreWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *, id))arg3;
- (void)keysMatchingCondition:(CKGenericCondition *)arg1 inStoreWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *, NSArray *))arg3;
- (void)keysInStoreWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *, NSArray *))arg2;
@end

