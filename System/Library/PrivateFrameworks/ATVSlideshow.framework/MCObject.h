/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/MCObjectBase.h>

@class MCMontage, NSString;

@interface MCObject : MCObjectBase {

	MCMontage* mMontage;
	NSString* mObjectID;

}

@property (nonatomic,readonly) NSString * objectID; 
@property (nonatomic,readonly) MCMontage * montage; 
+(id)objectWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)dealloc;
-(void)finalize;
-(NSString *)objectID;
-(id)snapshot;
-(BOOL)isSnapshot;
-(MCMontage *)montage;
-(void)demolish;
-(id)initFromScratchWithMontage:(id)arg1 ;
-(id)imprint;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(id)initSnapshot;
@end

