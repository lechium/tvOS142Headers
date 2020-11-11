/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/MCMotionTrigger.h>

@class NSString, NSDictionary;

@interface MCMotionTriggerExpression : MCMotionTrigger {

	NSString* _expression;
	NSDictionary* _attributes;

}

@property (copy) NSString * expression;                  //@synthesize expression=_expression - In the implementation block
@property (copy) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)motionTriggerForTargetPlugObjectID:(id)arg1 withKey:(id)arg2 duration:(double)arg3 andExpression:(id)arg4 ;
-(id)description;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(NSString *)expression;
-(void)setExpression:(NSString *)arg1 ;
-(void)demolish;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
@end

