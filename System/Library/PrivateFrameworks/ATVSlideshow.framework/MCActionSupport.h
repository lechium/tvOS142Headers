/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDictionary;


@protocol MCActionSupport
@property (readonly) NSDictionary * actions; 
@property (nonatomic,readonly) unsigned long long countOfActions; 
@required
-(void)removeAllActions;
-(NSDictionary *)actions;
-(id)actionForKey:(id)arg1;
-(void)removeActionForKey:(id)arg1;
-(void)setAction:(id)arg1 forKey:(id)arg2;
-(unsigned long long)countOfActions;
-(void)initActionsWithImprints:(id)arg1;
-(void)demolishActions;
-(id)imprintsForActions;

@end
