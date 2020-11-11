/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIMenuBuilder, NSArray, UIMenu;

@interface UIMenuSystem : NSObject {

	_UIMenuBuilder* _defaultBuilder;
	_UIMenuBuilder* _automaticallyRebuildingBuilder;
	/*^block*/id _adaptBuilderToResponderPre;
	/*^block*/id _adaptBuilderToResponderPost;
	BOOL _shouldAutomaticallyRebuild;

}

@property (nonatomic,readonly) BOOL shouldAutomaticallyRebuild;              //@synthesize shouldAutomaticallyRebuild=_shouldAutomaticallyRebuild - In the implementation block
@property (nonatomic,readonly) NSArray * _keyCommands; 
@property (nonatomic,readonly) UIMenu * _rootMenu; 
+(id)mainSystem;
+(id)contextSystem;
-(NSArray *)_keyCommands;
-(id)initWithDefaultBuilder:(id)arg1 shouldAutomaticallyRebuild:(BOOL)arg2 adaptBuilderToResponderPre:(/*^block*/id)arg3 adaptBuilderToResponderPost:(/*^block*/id)arg4 ;
-(void)_automaticallyRebuildIfNeeded;
-(id)_newBuilderFromResponderChain:(id)arg1 atLocation:(CGPoint)arg2 inCoordinateSpace:(id)arg3 ;
-(UIMenu *)_rootMenu;
-(void)setNeedsRebuild;
-(void)setNeedsRevalidate;
-(BOOL)shouldAutomaticallyRebuild;
@end
