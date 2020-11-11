/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSProxy.h>

@class Protocol, NSObject;

@interface NSProtocolChecker : NSProxy

@property (readonly) Protocol * protocol; 
@property (retain,readonly) NSObject * target; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)protocolCheckerWithTarget:(id)arg1 protocol:(id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(NSObject *)target;
-(Protocol *)protocol;
-(objc_method_description*)methodDescriptionForSelector:(SEL)arg1 ;
-(const char*)_localClassNameForClass;
-(id)initWithTarget:(id)arg1 protocol:(id)arg2 ;
@end

