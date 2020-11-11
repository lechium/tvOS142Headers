/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSHashTable, NSMutableSet;

@interface MPVolumeHUDController : NSObject {

	NSHashTable* _scenes;
	NSMutableSet* _displays;
	NSMutableSet* _categories;
	BOOL _needsUpdate;

}

@property (nonatomic,readonly) id mainContext; 
+(id)sharedInstance;
-(id)init;
-(void)setNeedsUpdate;
-(void)_updateVisibility;
-(void)addVolumeDisplay:(id)arg1 ;
-(void)removeVolumeDisplay:(id)arg1 ;
-(id)mainContext;
-(void)registerView:(id)arg1 inContext:(id)arg2 ;
-(void)unregisterView:(id)arg1 inContext:(id)arg2 ;
-(void)_addCategory:(id)arg1 ;
-(void)_updateVisibilityForVolumeDisplays:(id)arg1 inWindowScene:(id)arg2 ;
@end

