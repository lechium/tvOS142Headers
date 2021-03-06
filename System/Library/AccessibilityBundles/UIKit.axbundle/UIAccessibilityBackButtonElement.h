/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIAccessibilityElement.h>

@class NSArray;

@interface UIAccessibilityBackButtonElement : UIAccessibilityElement {

	NSArray* _associatedViews;

}

@property (nonatomic,retain) NSArray * associatedViews;              //@synthesize associatedViews=_associatedViews - In the implementation block
-(BOOL)canBecomeFocused;
-(BOOL)_accessibilityHasNativeFocus;
-(NSArray *)associatedViews;
-(void)setAssociatedViews:(NSArray *)arg1 ;
@end

