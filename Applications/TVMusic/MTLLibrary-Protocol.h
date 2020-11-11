//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MTLFunctionConstantValues, MTLFunctionDescriptor, NSArray, NSString;
@protocol MTLDevice, MTLFunction;

@protocol MTLLibrary <NSObject>
@property(nonatomic, readonly) NSString *installName;
@property(nonatomic, readonly) long long type;
@property(nonatomic, readonly) NSArray *functionNames;
- (id <MTLFunction>)newFunctionWithDescriptor:(MTLFunctionDescriptor *)arg1 error:(id *)arg2;
- (void)newFunctionWithDescriptor:(MTLFunctionDescriptor *)arg1 completionHandler:(void (^)(id <MTLFunction>, NSError *))arg2;
- (void)newFunctionWithName:(NSString *)arg1 constantValues:(MTLFunctionConstantValues *)arg2 completionHandler:(void (^)(id <MTLFunction>, NSError *))arg3;
- (id <MTLFunction>)newFunctionWithName:(NSString *)arg1 constantValues:(MTLFunctionConstantValues *)arg2 error:(id *)arg3;
- (id <MTLFunction>)newFunctionWithName:(NSString *)arg1;
@property(nonatomic, readonly) id <MTLDevice> device;
@property(nonatomic, copy) NSString *label;
@end

