//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString, RPIdentity;

@protocol RPDaemonXPCServerInterface
- (void)primaryAccountSignedOutWithCompletion:(void (^)(NSError *))arg1;
- (void)primaryAccountSignedInWithCompletion:(void (^)(NSError *))arg1;
- (void)getIdentitiesWithFlags:(unsigned int)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)diagnosticShow:(NSString *)arg1 level:(int)arg2 completion:(void (^)(NSString *))arg3;
- (void)diagnosticLogControl:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (void)diagnosticCommand:(NSString *)arg1 params:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)addOrUpdateIdentity:(RPIdentity *)arg1 completion:(void (^)(NSError *))arg2;
- (void)activateAssertionWithIdentifier:(NSString *)arg1;
@end

