/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UISceneSnapshotPresentation.h>

@class FBSceneSnapshot, NSString;

@interface _UISceneSnapshotPresentationView : UIView <UISceneSnapshotPresentation> {

	FBSceneSnapshot* _snapshot;

}

@property (nonatomic,retain) FBSceneSnapshot * sceneSnapshot;              //@synthesize snapshot=_snapshot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithSnapshot:(id)arg1 ;
-(FBSceneSnapshot *)sceneSnapshot;
-(void)setSceneSnapshot:(FBSceneSnapshot *)arg1 ;
@end

