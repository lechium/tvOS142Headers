/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>
#import <UIKit/UIAccessibilityElementDelegate.h>

@class NSString, NSArray;

@interface _AXUITextViewParagraphElement : UIAccessibilityElement <UIAccessibilityElementDelegate> {

	NSString* __accessibilityContent;
	NSArray* _links;
	NSRange _textRange;

}

@property (nonatomic,readonly) NSRange textRange;                           //@synthesize textRange=_textRange - In the implementation block
@property (nonatomic,retain) NSString * _accessibilityContent;              //@synthesize _accessibilityContent=__accessibilityContent - In the implementation block
@property (nonatomic,readonly) NSArray * links;                             //@synthesize links=_links - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)accessibilityValue;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(CGRect)accessibilityFrame;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(NSArray *)links;
-(NSRange)textRange;
-(id)accessibilityElements;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)accessibilityRespondsToUserInteraction;
-(id)_accessibilityUserTestingChildren;
-(BOOL)accessibilityActivate;
-(CGPoint)accessibilityActivationPoint:(id)arg1 ;
-(id)initWithAccessibilityContainer:(id)arg1 textRange:(NSRange)arg2 links:(id)arg3 ;
-(void)set_accessibilityContent:(NSString *)arg1 ;
-(NSString *)_accessibilityContent;
@end

