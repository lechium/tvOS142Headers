/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <libobjc.A.dylib/TVLJSObject.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ATVJSCallback : NSObject <TVLJSObject> {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _successBlock;
	unsigned long long _successArgCount;
	/*^block*/id _failureBlock;
	OpaqueJSValueRef _jsObjectRef;
	/*^block*/id _parameterParsingBlock;

}

@property (nonatomic,readonly) OpaqueJSValueRef jsObjectRef;              //@synthesize jsObjectRef=_jsObjectRef - In the implementation block
@property (nonatomic,copy) id parameterParsingBlock;                      //@synthesize parameterParsingBlock=_parameterParsingBlock - In the implementation block
-(void)dealloc;
-(OpaqueJSValueRef)jsObjectRef;
-(id)initWithContext:(OpaqueJSContextRef)arg1 callbackQueue:(id)arg2 successBlock:(/*^block*/id)arg3 successArgCount:(unsigned long long)arg4 failureBlock:(/*^block*/id)arg5 ;
-(void)setParameterParsingBlock:(id)arg1 ;
-(id)parameterParsingBlock;
-(void)_callbackSuccessWithContext:(OpaqueJSContextRef)arg1 argumentCount:(unsigned long long)arg2 arguments:(const OpaqueJSValue*)arg3 exception:(const OpaqueJSValue*)arg4 ;
-(void)_callbackFailureWithContext:(OpaqueJSContextRef)arg1 argumentCount:(unsigned long long)arg2 arguments:(const OpaqueJSValue*)arg3 exception:(const OpaqueJSValue*)arg4 ;
-(void)_jsFinalize;
@end

