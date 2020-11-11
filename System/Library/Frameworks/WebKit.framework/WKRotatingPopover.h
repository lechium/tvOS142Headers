/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol WKRotatingPopoverDelegate;
@class WKContentView, UIPopoverController, NSString;

@interface WKRotatingPopover : NSObject <UIPopoverControllerDelegate> {

	WKContentView* _view;
	BOOL _isRotating;
	BOOL _isPreservingFocus;
	CGPoint _presentationPoint;
	RetainPtr<UIPopoverController>* _popoverController;
	id<WKRotatingPopoverDelegate> _dismissionDelegate;

}

@property (nonatomic,readonly) WKContentView * view;                                        //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) CGPoint presentationPoint;                                     //@synthesize presentationPoint=_presentationPoint - In the implementation block
@property (nonatomic,retain) UIPopoverController * popoverController; 
@property (assign,nonatomic) id<WKRotatingPopoverDelegate> dismissionDelegate;              //@synthesize dismissionDelegate=_dismissionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(WKContentView *)view;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)setPopoverController:(UIPopoverController *)arg1 ;
-(void)presentPopoverAnimated:(BOOL)arg1 ;
-(UIPopoverController *)popoverController;
-(void)setDismissionDelegate:(id<WKRotatingPopoverDelegate>)arg1 ;
-(unsigned long long)popoverArrowDirections;
-(void)setPresentationPoint:(CGPoint)arg1 ;
-(void)willRotate:(id)arg1 ;
-(void)didRotate:(id)arg1 ;
-(CGPoint)presentationPoint;
-(id<WKRotatingPopoverDelegate>)dismissionDelegate;
@end

