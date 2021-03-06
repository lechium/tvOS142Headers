/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/MCObjectLight.h>

@class NSString;

@interface MCAnimationPath : MCObjectLight {

	BOOL mIsTriggered;
	NSString* mKey;

}

@property (copy) NSString * key; 
@property (assign,nonatomic) BOOL isTriggered; 
+(id)animationPathWithKey:(id)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isTriggered;
-(void)setIsTriggered:(BOOL)arg1 ;
-(void)demolish;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
@end

