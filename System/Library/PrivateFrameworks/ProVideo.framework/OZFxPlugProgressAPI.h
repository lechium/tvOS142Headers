/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/FxProgressAPI.h>
#import <libobjc.A.dylib/PROAPIObject.h>

@class NSString;

@interface OZFxPlugProgressAPI : NSObject <FxProgressAPI, PROAPIObject>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedProgressAPI;
+(void)releaseSharedProgressAPI;
-(id)init;
-(BOOL)updateProgress:(float)arg1 ;
-(BOOL)userHasCancelled;
-(BOOL)conformsToProtocol:(id)arg1 version:(unsigned)arg2 ;
-(void)_setControl:(const OZProcessControl*)arg1 ;
@end
