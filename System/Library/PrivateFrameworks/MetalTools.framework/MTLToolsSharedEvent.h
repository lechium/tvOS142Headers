/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MTLToolsEvent.h>
#import <libobjc.A.dylib/MTLSharedEvent.h>

@class NSString;

@interface MTLToolsSharedEvent : MTLToolsEvent <MTLSharedEvent>

@property (assign) unsigned long long signaledValue; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)label;
-(void)setSignaledValue:(unsigned long long)arg1 ;
-(unsigned long long)signaledValue;
-(void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)setLabel:(NSString *)arg1 ;
-(id)newSharedEventHandle;
@end
