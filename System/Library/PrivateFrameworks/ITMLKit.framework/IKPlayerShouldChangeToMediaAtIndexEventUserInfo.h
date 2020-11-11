/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSDictionary, NSString;

@interface IKPlayerShouldChangeToMediaAtIndexEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	BOOL _shouldChange;
	long long _index;

}

@property (nonatomic,readonly) long long index;                        //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) BOOL shouldChange;                      //@synthesize shouldChange=_shouldChange - In the implementation block
@property (nonatomic,readonly) NSDictionary * properties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)properties;
-(long long)index;
-(id)initWithIndex:(long long)arg1 ;
-(void)processReturnJSValue:(id)arg1 inContext:(id)arg2 ;
-(BOOL)expectsReturnValue;
-(BOOL)shouldChange;
@end

