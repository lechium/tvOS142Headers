/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UILayoutGuide.h>
#import <UIKit/UILayoutSupport.h>

@class NSLayoutYAxisAnchor, NSLayoutDimension, NSArray, NSString;

@interface _UILayoutSpacer : UILayoutGuide <UILayoutSupport> {

	BOOL _compatibilityGuideAllowsArchivingAsSubview;
	BOOL _horizontal;
	NSArray* _constraintsToRemoveAtRuntime;

}

@property (assign,setter=_setHorizontal:,getter=_isHorizontal,nonatomic) BOOL _horizontal;                                                         //@synthesize horizontal=_horizontal - In the implementation block
@property (assign,setter=_setCompatibilityGuideAllowsArchivingAsSubview:,nonatomic) BOOL _compatibilityGuideAllowsArchivingAsSubview;              //@synthesize compatibilityGuideAllowsArchivingAsSubview=_compatibilityGuideAllowsArchivingAsSubview - In the implementation block
@property (setter=_setConstraintsToRemoveAtRuntime:,nonatomic,copy) NSArray * _constraintsToRemoveAtRuntime;                                       //@synthesize constraintsToRemoveAtRuntime=_constraintsToRemoveAtRuntime - In the implementation block
@property (setter=_setArchivedIdentifier:,nonatomic,copy) NSString * _archivedIdentifier; 
@property (nonatomic,readonly) double length; 
@property (readonly) NSLayoutYAxisAnchor * topAnchor; 
@property (readonly) NSLayoutYAxisAnchor * bottomAnchor; 
@property (readonly) NSLayoutDimension * heightAnchor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_verticalLayoutSpacer;
+(id)_horizontalLayoutSpacer;
-(void)dealloc;
-(double)length;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_layoutVariablesWithAmbiguousValue;
-(NSArray *)_constraintsToRemoveAtRuntime;
-(void)_setConstraintsToRemoveAtRuntime:(id)arg1 ;
-(NSString *)_archivedIdentifier;
-(BOOL)_isHorizontal;
-(void)_setUpCounterDimensionConstraint;
-(void)_setArchivedIdentifier:(id)arg1 ;
-(BOOL)_compatibilityGuideAllowsArchivingAsSubview;
-(void)_setCompatibilityGuideAllowsArchivingAsSubview:(BOOL)arg1 ;
-(void)_setHorizontal:(BOOL)arg1 ;
@end

